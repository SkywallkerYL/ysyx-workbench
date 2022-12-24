#include <klib.h>
#include <klib-macros.h>
#include <stdint.h>

#if !defined(__ISA_NATIVE__) || defined(__NATIVE_USE_KLIB__)

size_t strlen(const char *s) {
  //panic("Not implemented");
  //int point = 0;
  assert(s!=NULL);
  const char *pt = s;
  //int maxsize = sizeof(s)/sizeof(char);
  while (*pt++!='\0')
  {
    //point++;
  }
  return pt-s-1;
}

char *strcpy(char *dst, const char *src) {
  //panic("Not implemented");
  //int size = sizeof(dst)/(sizeof(char));
  //memset(dst,'\0',size);
  const char *srcpoint = src;
  char* dstpoint = dst ;
  while (*(srcpoint)!='\0'/*&&dstpoint<size*/)
  {
    *dstpoint = *(srcpoint);
    dstpoint++;
    srcpoint++;
  }
  /*
  if (dstpoint<size)
  {
    dst[dstpoint] = '\0';
  }
  else dst[size-1] = '\0';
  */
  return dst;
}

char *strncpy(char *dst, const char *src, size_t n) {
  //panic("Not implemented");
  //int size = sizeof(dst)/(sizeof(char));
  //memset(dst,'\0',size);
  const char *srcpoint = src;
  char* dstpoint = dst ;
  while (*(srcpoint)!='\0'&&n--/*&&dstpoint<size*/)
  {
    *dstpoint = *(srcpoint);
    dstpoint++;
    srcpoint++;
  }
  /*
  if (dstpoint<size)
  {
    dst[dstpoint] = '\0';
  }
  else dst[size-1] = '\0';
  */
  return dst;
}

char *strcat(char *dst, const char *src) {
  //panic("Not implemented");
  //int size = sizeof(dst)/(sizeof(char));
  int dstlen = strlen(dst);
  const char *srcpoint = src;
  char* dstpoint = dst + dstlen ;
  while (*(srcpoint)!='\0')
  {
    *(dstpoint) = *(srcpoint);
    dstpoint++;
    srcpoint++;
  }
  /*
  if (dstpoint<size)
  {
    dst[dstpoint] = '\0';
  }
  else dst[size-1] = '\0';
  */
  return dst;

}

int strcmp(const char *s1, const char *s2) {
  /*
  s1 < s2 returnvalue <0 ;
  s1 = s2 returnvalue =0 ;
  s1 > s2 returnvalue >0 ;
  */
  //panic("Not implemented");
  //也可以用strlen，但是就不能应对没有'\0'的情况了
  int sizes1 = strlen(s1);//sizeof (s1)/sizeof(char);
  int sizes2 = strlen(s2);//sizeof (s2)/sizeof(char);
  int point = 0;
  //两个都非空时
  while (point < sizes1 && point < sizes2 )
  {
    if (s1[point] < s2 [point])
    {
      return -1;
    }
    else if (s1[point] > s2[point])
    {
      return 1;
    }
    else if (s1[point] == s2[point])
    {
      point ++;
    }
  }
  if (point == (sizes1) && point == (sizes2) )
  {
    return 0;
  }
  else if (point == sizes1 && point < sizes2)
  {
    return -1;
  }
  else if (point < sizes1 && point == sizes2)
  {
    return 1;
  }
  return 0;
}

int strncmp(const char *s1, const char *s2, size_t n) {
  //panic("Not implemented");
  int sizes1 = strlen(s1);//sizeof (s1)/sizeof(char);
  int sizes2 = strlen(s2);//sizeof (s2)/sizeof(char);
  int point = 0;
  //两个都非空时
  while (point < sizes1 && point < sizes2 && point < n )
  {
    if (s1[point] < s2 [point])
    {
      return -1;
    }
    else if (s1[point] > s2[point])
    {
      return 1;
    }
    else if (s1[point] == s2[point])
    {
      point ++;
    }
  }
  if (point == n)
  {
    return 0;
  }
  else 
  {
    if (point == (sizes1) && point == (sizes2) )
    {
      return 0;
    }
    else if (point == sizes1 && point < sizes2)
    {
      return -1;
    }
    else if (point < sizes1 && point == sizes2)
    {
      return 1;
    }
  }
  return 0;
}

void *memset(void *s, int c, size_t n) {
  //panic("Not implemented");
  if (s == NULL || n <0)
  {
    return NULL;
  }
  char *point = (char *)s;
  for (size_t i = 0; i < n; i++)
  {
    *(point+i) = c;
  }
  return s;
}

void *memmove(void *dst, const void *src, size_t n) {
  //panic("Not implemented");
  //要考虑内存重叠的情况
  assert(NULL != src && NULL != dst);
  char * pdst = (char*) dst;
  char * psrc = (char*) src;
  if (pdst <= psrc || pdst >= psrc + n)
  {
    while (n--)
    {
      *pdst = *psrc;
    }
    pdst++;
    psrc++;
  }
  else
  {
    pdst = pdst+n-1;
    psrc = psrc+n-1;
    while (n--)
    {
      *pdst = *psrc; 
    }
    pdst--;
    psrc--;
  }
  return dst;
}

void *memcpy(void *out, const void *in, size_t n) {
  //panic("Not implemented");
  assert(NULL != out && NULL != in);
  char * pdst = (char*) out;
  char * psrc = (char*) in;
  while (n--)
  {
    *pdst++=*psrc++;
  }

  return out;
}

int memcmp(const void *s1, const void *s2, size_t n) {
  //panic("Not implemented");
  assert(NULL != s1 && NULL != s2);
  char * pdst = (char*) s1;
  char * psrc = (char*) s2;
  while (n--)
  {
    if (*(pdst)<*(psrc))
    {
      return -1;
    }
    else if (*(pdst)>*(psrc))
    {
      return 1;
    }
    else if (*(pdst)==*(psrc))
    {
      continue;
    }
  }
  return 0;
  
}

#endif
