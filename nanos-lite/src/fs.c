#include <fs.h>

/*
typedef size_t (*ReadFn) (void *buf, size_t offset, size_t len);
typedef size_t (*WriteFn) (const void *buf, size_t offset, size_t len);
typedef struct {
  char *name;
  size_t size;
  size_t disk_offset;
  ReadFn read;
  WriteFn write;
} Finfo;
*/
size_t ramdisk_read(void *buf, size_t offset, size_t len);
size_t ramdisk_write(const void *buf, size_t offset, size_t len);
/*
enum
{
  FD_STDIN,
  FD_STDOUT,
  FD_STDERR,
  FD_FB
};
*/
size_t invalid_read(void *buf, size_t offset, size_t len)
{
  panic("should not reach here");
  return 0;
}

size_t invalid_write(const void *buf, size_t offset, size_t len)
{
  panic("should not reach here");
  return 0;
}

void init_fs()
{
  // TODO: initialize the size of /dev/fb
  AM_GPU_CONFIG_T ev = io_read(AM_GPU_CONFIG);
  uint32_t height = ev.height;
  uint32_t width = ev.width;
  file_table[FB_DEV].size = height*width*4;
}
char* get_file_name(int fd) {
    return file_table[fd].name;
}
/* This is the information about all files in disk. */
/*
static Finfo file_table[] __attribute__((used)) = {
    [FD_STDIN] = {"stdin", 0, 0, invalid_read, invalid_write},
    [FD_STDOUT] = {"stdout", 0, 0, invalid_read, invalid_write},
    [FD_STDERR] = {"stderr", 0, 0, invalid_read, invalid_write},
#include "files.h"
};
*/
// 新开一个结构体 记录打开文件的读写偏移量,这样子方便记录一个文件是否打开
// open_offset 来记录目前文件操作的位置. 每次对文件读写了多少个字节, 偏移量就前进多少.
// 不维护这个结构了 ，open_offset移到Finfo里面区
/*
typedef struct
{
  size_t fd;
  size_t open_offset;
} OpenFinfo;

static OpenFinfo OpenFileTable[LENGTH(file_table)];
static size_t OpenNum = 0;
static int GetOpenInd(size_t fd)
{
  int OpenInd = -1;
  for (size_t i = 0; i < OpenNum; i++)
  {
    if (OpenFileTable[i].fd == fd)
    {
      OpenInd = i;
      return OpenInd;
    }
  }
  return OpenInd;
}
*/
// 这些都忽略flags mode
// 对于前三个特殊的占为表项也忽略
int fs_open(const char *pathname, int flags, int mode)
{
  for (size_t i = 0; i < LENGTH(file_table); i++)
  {
    if (strcmp(pathname, file_table[i].name) == 0)
    {
      //if (i == FD_STDIN || i == FD_STDOUT || i == FD_STDERR)
      if (i < FB_DEV)
      {
        if (i == FD_STDIN || i == FD_STDOUT || i == FD_STDERR)Log("File open ignore %s", pathname);
        return i;
      }
      //OpenFileTable[OpenNum].fd = i;
      //OpenFileTable[OpenNum].open_offset = 0;
      //OpenNum++;
      file_table[i].open_offset = 0;
      return i;
    }
  }
  Log("File %s not found, should not reach here!", pathname);
  assert(0);
  return -1;
}
// man 2 read
// success 返回读入的长度，失败返回-1
size_t fs_read(int fd, void *buf, size_t len)
{
  // 将fd文件的len长度读入buf
  // 注意len之后不要超过文件的size不要跃届
  ReadFn read = file_table[fd].read;
  if (read != NULL)
  { 
    return read(buf,0,len);
  }
  
  /*
  if (fd == FD_STDIN || fd == FD_STDOUT || fd == FD_STDERR)
  {
    Log("File read ignore %s", file_table[fd].name);
    return 0;
  }
  */
  /*
  int openind = GetOpenInd(fd);
  if (openind == -1 )
  {
    Log("File %s read but not open", file_table[fd].name);
    return -1;
  }
  */
  size_t readlen = len;
  size_t openoff = file_table[fd].open_offset;//OpenFileTable[openind].open_offset;
  if (openoff > file_table[fd].size)
    return 0;
  readlen = (openoff + len) > file_table[fd].size ? (file_table[fd].size - openoff) : len;
  ramdisk_read(buf, file_table[fd].disk_offset + openoff, readlen);
  //OpenFileTable[openind].open_offset += readlen;
  file_table[fd].open_offset  += readlen;
  return readlen;
}
// man 2 write
// success 返回写入的bytes 失败 -1
size_t fs_write(int fd, const void *buf, size_t len)
{
  //添加了vfs抽象，直接调串口的写入，即文件列表里初始化的写函数
  WriteFn write = file_table[fd].write;
  if(write != NULL && fd < FB_DEV){
    return write(buf,0,len);//忽略offset
  }
  /*
  if (fd == FD_STDIN)
  {
    Log("File write ignore %s", file_table[fd].name);
    return 0;
  }
  // 这两个直接输出到串口 与sys_write 行为一样
  if (fd == FD_STDOUT || fd == FD_STDERR)
  {
    for (size_t i = 0; i < len; i++)
    {
      putch(*((char *)buf + i));
    }
    return len;
  }
  */
 /*
  int openind = GetOpenInd(fd);
  if (openind == -1)
  {
    Log("File %s write but not open", file_table[fd].name);
    return -1;
  }
  */
  /*
  if (fd == FB_DEV)
  {
    //printf("AAAA\n");
    size_t writelen = len*4;
    size_t openoff = OpenFileTable[openind].open_offset;
    if (openoff > file_table[fd].size) return 0;
    writelen = (openoff + len*4) > file_table[fd].size ? (file_table[fd].size - openoff) : len*4;
    //writelen = writelen/4;
    write(buf, openoff,writelen/4);
    return writelen;
  }
  */
  size_t writelen = len;
  size_t openoff = file_table[fd].open_offset;//OpenFileTable[openind].open_offset;
  if (openoff > file_table[fd].size) return 0;
  writelen = (openoff + len) > file_table[fd].size ? (file_table[fd].size - openoff) : len;

  if(write!=NULL) {
    if (fd == FB_DEV)
    {
      //printf("AAAA\n");
      write(buf, openoff,writelen);
    }
  }
  
  ramdisk_write(buf, file_table[fd].disk_offset + openoff, writelen);
  //OpenFileTable[openind].open_offset += writelen;
  file_table[fd].open_offset = writelen;
  return writelen;
}
// man 2 lseek
// success return offset from the begin of file
// fail -1
/*
SEEK_SET
The file offset is set to offset bytes.

SEEK_CUR
The  file  offset  is  set  to  its current location plus offset bytes.

SEEK_END
The file offset is set to the  size  of  the  file  plus  offset bytes.

*/
// lseek 允许offset超过size 因此不作判断
size_t fs_lseek(int fd, size_t offset, int whence)
{
  //if (fd == FD_STDIN || fd == FD_STDOUT || fd == FD_STDERR)
  if (fd < FB_DEV)
  {
    if (fd == FD_STDIN || fd == FD_STDOUT || fd == FD_STDERR) Log("File lseek ignore %s", file_table[fd].name);
    return 0;
  }
  /*
  int openind = GetOpenInd(fd);
  if (openind == -1)
  {
    Log("File %s lseek but not open", file_table[fd].name);
    return -1;
  }
  */
  size_t setoffset = -1;
  size_t fdsize = file_table[fd].size;
  size_t openoffset = file_table[fd].open_offset;//OpenFileTable[openind].open_offset;
  switch (whence)
  {
  case SEEK_SET:
    setoffset = offset;
    break;
  case SEEK_CUR:
    setoffset = offset + openoffset;
    break;
  case SEEK_END:
    setoffset = offset + fdsize;
    break;
  default:
    Log("Unknown whence type");
    return -1;
    break;
  }
  assert(setoffset >= 0);
  //OpenFileTable[openind].open_offset = setoffset;
  file_table[fd].open_offset = setoffset;
  return setoffset;
}
int fs_close(int fd)
{
  //if (fd == FD_STDIN || fd == FD_STDOUT || fd == FD_STDERR)
  if (fd < FB_DEV)
  {
    if (fd == FD_STDIN || fd == FD_STDOUT || fd == FD_STDERR) Log("File close ignore %s", file_table[fd].name);
    return 0;
  }
  /*
  int openind = GetOpenInd(fd);
  if (openind == -1)
  {
    Log("File %s close but not open", file_table[fd].name);
    return -1;
  }
  // 把openind从table里删除
  for (size_t i = openind; i < OpenNum - 1; i++)
  {
    OpenFileTable[i] = OpenFileTable[i + 1];
  }
  OpenNum--;
  assert(OpenNum >= 0);
  */
  return 0;
}
