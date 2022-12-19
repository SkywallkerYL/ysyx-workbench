#include <am.h>
#include <klib.h>
#include <klib-macros.h>
#include <stdarg.h>

#if !defined(__ISA_NATIVE__) || defined(__NATIVE_USE_KLIB__)
//find putch in klib-macros.h  maybe it can be use here
//putch ( char p)
void myputch(char p)
{
  putch(p);
}
unsigned long mpown(unsigned long m , unsigned long n)
{
  unsigned long res = 1;
  for (size_t i = 0; i < n; i++)
  {
    res = res * m;
  }
  return res;
}



int printf(const char *fmt, ...) {
  //panic("Not implemented");
  assert (fmt!=NULL);
  char *pstr = (char*) fmt;
  int intval = 0;
  unsigned long hexval = 0;
  double floatval = 0.0;
  int lencnt = 0;
  int tempval ;//对于整数等需要计算每一位打印，这个变量用来临时赋值
  int system_;
  char* strval = NULL;



  va_list ap;//这是变参函数列表
  //在栈区中，使用指针，遍历栈区中的参数列表，地址从低到高一个一个把参数内容读出来
  unsigned int resnum = 0;

  va_start(ap,fmt);//初始化ap指针，其指向第一个可变参数
  while (*pstr!='\0')
  {
    assert(resnum<=2);
    //switch里的break是跳出switch continue 是进入下一轮循环
    switch (*pstr)
    {
    case ' ':
      myputch(*pstr);resnum++;break;
    case '\t':
      myputch(*pstr);resnum=resnum+4;break;
    case '\n':
      myputch(*pstr);resnum++;break;
    case '\r':
      myputch(*pstr);resnum++;break;
    case '\%': // 进行格式解析
      pstr++;
      switch (*pstr)
      {
      case 'c':
        intval = va_arg(ap,int); //返回当前变量值，ap指向下一个变参     
        myputch((char)(intval));
        resnum++;
        pstr++;
        continue;
      case 'd':
        system_ = 10;
        intval = va_arg(ap,int);
        if (intval < 0)
        {
          intval = -intval;
          myputch('-');
          resnum++;
        }
        tempval = intval;
        //因为得按顺序打印，因此要先计算长度
        if (intval)
        {
          while (tempval){
            lencnt++;
            tempval = tempval/system_;
          }
        }
        else lencnt = 1; 
        resnum += lencnt;
        while (lencnt)
        {
          tempval = intval/(mpown(system_,lencnt-1));
          intval = intval%(mpown(system_,lencnt-1));
          myputch((char)tempval+'0');
          lencnt--;
        }
        pstr++;
        continue;
      case 'x':
        system_ = 16;
        hexval = va_arg(ap,unsigned long);
        tempval = hexval;
        //因为得按顺序打印，因此要先计算长度
        if (hexval)
        {
          while (tempval){
            lencnt++;
            tempval = tempval/system_;
          }
        }
        else lencnt = 1; 
        resnum += lencnt;
        while (lencnt)
        {
          tempval = hexval/(mpown(system_,lencnt-1));
          hexval = hexval%(mpown(system_,lencnt-1));
          if (tempval<=9)
          {
            myputch((char)tempval+'0');
          }
          else myputch((char)tempval-10+'A');
          lencnt--;
        }
        pstr++;
        continue;
      case 's':
        strval = va_arg(ap,char*);
        resnum += (unsigned int) strlen(strval);
        putstr(strval);
        pstr++;
        continue;
      default:
        myputch(' ');resnum++;
        continue;
      }
      case 'f':
        floatval = va_arg(ap,double);
        if (floatval<0.0)
        {
          myputch('-');
          resnum++;
          floatval = -floatval;
        }
        int valseg = (unsigned long) floatval;
        tempval = valseg;
        floatval = floatval - valseg;
        if (valseg)
        {
          while (valseg)
          {
            lencnt++;
            valseg = valseg/10;
          }
        }
        else lencnt = 1;
        resnum += lencnt;
        while (lencnt)
        {
          valseg = tempval/mpown(10,lencnt-1);
          tempval = tempval%mpown(10,lencnt-1);
          myputch((char)valseg+'0');
          lencnt--;
        }
        myputch('.');
        resnum++;
        //输出小数部分，保留6位，不四舍五入
        lencnt = 6;
        resnum+=lencnt;
        floatval = floatval*mpown(10,lencnt);
        tempval = (int) floatval;
        while (lencnt)
        {
          valseg = tempval/mpown(10,lencnt-1);
          tempval = tempval%mpown(10,lencnt-1);
          myputch((char)valseg+'0');
          lencnt--;
        }
        pstr++;
        continue;  
    default:
      myputch(*pstr);resnum++;
      break;
    }
    pstr++;
  }
  va_end(ap);
  return resnum;
}

int vsprintf(char *out, const char *fmt, va_list ap) {
  panic("Not implemented");
}
//sprintf 函数与printf函数差不多，只不过是把要输出的字符拷贝到out里面
int sprintf(char *out, const char *fmt, ...) {
  //panic("Not implemented");
  assert (fmt!=NULL);
  char *pstr = (char*) fmt;
  int intval = 0;
  unsigned long hexval = 0;
  double floatval = 0.0;
  int lencnt = 0;
  int tempval ;//对于整数等需要计算每一位打印，这个变量用来临时赋值
  int system_;
  char* strval = NULL;



  va_list ap;//这是变参函数列表
  //在栈区中，使用指针，遍历栈区中的参数列表，地址从低到高一个一个把参数内容读出来
  unsigned int resnum = 0;

  va_start(ap,fmt);//初始化ap指针，其指向第一个可变参数
  while (*pstr!='\0')
  {
    //switch里的break是跳出switch continue 是进入下一轮循环
    switch (*pstr)
    {
    case ' ':
      *out = *pstr;resnum++;break;
    case '\t':
      *out = *pstr;resnum=resnum+4;break;
    case '\n':
      *out = *pstr;resnum++;break;
    case '\r':
      *out = *pstr;resnum++;break;
    case '\%': // 进行格式解析
      pstr++;
      switch (*pstr)
      {
      case 'c':
        intval = va_arg(ap,int); //返回当前变量值，ap指向下一个变参     
        *out = ((char)(intval));
        out++;
        resnum++;
        pstr++;
        continue;
      case 'd':
        system_ = 10;
        intval = va_arg(ap,int);
        if (intval < 0)
        {
          intval = -intval;
          *out = '-';
          out++;
          resnum++;
        }
        tempval = intval;
        //因为得按顺序打印，因此要先计算长度
        if (intval)
        {
          while (tempval){
            lencnt++;
            tempval = tempval/system_;
          }
        }
        else lencnt = 1; 
        resnum += lencnt;
        while (lencnt)
        {
          tempval = intval/(mpown(system_,lencnt-1));
          intval = intval%(mpown(system_,lencnt-1));
          *out = ((char)tempval+'0');
          out++;
          lencnt--;
        }
        pstr++;
        continue;
      case 'x':
        system_ = 16;
        hexval = va_arg(ap,unsigned long);
        tempval = hexval;
        //因为得按顺序打印，因此要先计算长度
        if (hexval)
        {
          while (tempval){
            lencnt++;
            tempval = tempval/system_;
          }
        }
        else lencnt = 1; 
        resnum += lencnt;
        while (lencnt)
        {
          tempval = hexval/(mpown(system_,lencnt-1));
          hexval = hexval%(mpown(system_,lencnt-1));
          if (tempval<=9)
          {
            *out = ((char)tempval+'0');
          }
          else  *out = ((char)tempval-10+'A');
          out++;
          lencnt--;
        }
        pstr++;
        continue;
      case 's':
        strval = va_arg(ap,char*);
        int lentemp = strlen(strval);
        resnum += (unsigned int) lentemp;
        //printf ("%d\n",lentemp);
        for (char *p = strval; *p; p++) {*out = *p;out++;}
        pstr++;
        continue;
      default:
        *out = ' ';out++;resnum++;
        continue;
      }
      case 'f':
        floatval = va_arg(ap,double);
        if (floatval<0.0)
        {
          *out = '-';out++;
          resnum++;
          floatval = -floatval;
        }
        int valseg = (unsigned long) floatval;
        tempval = valseg;
        floatval = floatval - valseg;
        if (valseg)
        {
          while (valseg)
          {
            lencnt++;
            valseg = valseg/10;
          }
        }
        else lencnt = 1;
        resnum += lencnt;
        while (lencnt)
        {
          valseg = tempval/mpown(10,lencnt-1);
          tempval = tempval%mpown(10,lencnt-1);
          *out = ((char)valseg+'0');out++;
          lencnt--;
        }
        *out = '.';out++;
        resnum++;
        //输出小数部分，保留6位，不四舍五入
        lencnt = 6;
        resnum+=lencnt;
        floatval = floatval*mpown(10,lencnt);
        tempval = (int) floatval;
        while (lencnt)
        {
          valseg = tempval/mpown(10,lencnt-1);
          tempval = tempval%mpown(10,lencnt-1);
          *out = ((char)valseg+'0');out++;
          lencnt--;
        }
        pstr++;
        continue;  
    default:
      *out = *pstr;resnum++;
      break;
    }
    pstr++;
    out++;
  }
  *out = '\0';
  va_end(ap);
  return resnum;
}

int snprintf(char *out, size_t n, const char *fmt, ...) {
  panic("Not implemented");
}

int vsnprintf(char *out, size_t n, const char *fmt, va_list ap) {
  panic("Not implemented");
}

#endif
