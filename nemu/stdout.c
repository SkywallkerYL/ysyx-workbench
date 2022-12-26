# 0 "src/isa/riscv64/inst.c"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 0 "<command-line>" 2
# 1 "src/isa/riscv64/inst.c"
# 16 "src/isa/riscv64/inst.c"
# 1 "src/isa/riscv64/local-include/reg.h" 1
# 19 "src/isa/riscv64/local-include/reg.h"
# 1 "/home/yangli/ysyx-workbench/nemu/include/common.h" 1
# 19 "/home/yangli/ysyx-workbench/nemu/include/common.h"
# 1 "/usr/lib/gcc/x86_64-linux-gnu/11/include/stdint.h" 1 3 4
# 9 "/usr/lib/gcc/x86_64-linux-gnu/11/include/stdint.h" 3 4
# 1 "/usr/include/stdint.h" 1 3 4
# 26 "/usr/include/stdint.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/libc-header-start.h" 1 3 4
# 33 "/usr/include/x86_64-linux-gnu/bits/libc-header-start.h" 3 4
# 1 "/usr/include/features.h" 1 3 4
# 392 "/usr/include/features.h" 3 4
# 1 "/usr/include/features-time64.h" 1 3 4
# 20 "/usr/include/features-time64.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/wordsize.h" 1 3 4
# 21 "/usr/include/features-time64.h" 2 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/timesize.h" 1 3 4
# 19 "/usr/include/x86_64-linux-gnu/bits/timesize.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/wordsize.h" 1 3 4
# 20 "/usr/include/x86_64-linux-gnu/bits/timesize.h" 2 3 4
# 22 "/usr/include/features-time64.h" 2 3 4
# 393 "/usr/include/features.h" 2 3 4
# 486 "/usr/include/features.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/sys/cdefs.h" 1 3 4
# 559 "/usr/include/x86_64-linux-gnu/sys/cdefs.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/wordsize.h" 1 3 4
# 560 "/usr/include/x86_64-linux-gnu/sys/cdefs.h" 2 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/long-double.h" 1 3 4
# 561 "/usr/include/x86_64-linux-gnu/sys/cdefs.h" 2 3 4
# 487 "/usr/include/features.h" 2 3 4
# 510 "/usr/include/features.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/gnu/stubs.h" 1 3 4
# 10 "/usr/include/x86_64-linux-gnu/gnu/stubs.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/gnu/stubs-64.h" 1 3 4
# 11 "/usr/include/x86_64-linux-gnu/gnu/stubs.h" 2 3 4
# 511 "/usr/include/features.h" 2 3 4
# 34 "/usr/include/x86_64-linux-gnu/bits/libc-header-start.h" 2 3 4
# 27 "/usr/include/stdint.h" 2 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/types.h" 1 3 4
# 27 "/usr/include/x86_64-linux-gnu/bits/types.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/wordsize.h" 1 3 4
# 28 "/usr/include/x86_64-linux-gnu/bits/types.h" 2 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/timesize.h" 1 3 4
# 19 "/usr/include/x86_64-linux-gnu/bits/timesize.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/wordsize.h" 1 3 4
# 20 "/usr/include/x86_64-linux-gnu/bits/timesize.h" 2 3 4
# 29 "/usr/include/x86_64-linux-gnu/bits/types.h" 2 3 4



# 31 "/usr/include/x86_64-linux-gnu/bits/types.h" 3 4
typedef unsigned char __u_char;
typedef unsigned short int __u_short;
typedef unsigned int __u_int;
typedef unsigned long int __u_long;


typedef signed char __int8_t;
typedef unsigned char __uint8_t;
typedef signed short int __int16_t;
typedef unsigned short int __uint16_t;
typedef signed int __int32_t;
typedef unsigned int __uint32_t;

typedef signed long int __int64_t;
typedef unsigned long int __uint64_t;






typedef __int8_t __int_least8_t;
typedef __uint8_t __uint_least8_t;
typedef __int16_t __int_least16_t;
typedef __uint16_t __uint_least16_t;
typedef __int32_t __int_least32_t;
typedef __uint32_t __uint_least32_t;
typedef __int64_t __int_least64_t;
typedef __uint64_t __uint_least64_t;



typedef long int __quad_t;
typedef unsigned long int __u_quad_t;







typedef long int __intmax_t;
typedef unsigned long int __uintmax_t;
# 141 "/usr/include/x86_64-linux-gnu/bits/types.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/typesizes.h" 1 3 4
# 142 "/usr/include/x86_64-linux-gnu/bits/types.h" 2 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/time64.h" 1 3 4
# 143 "/usr/include/x86_64-linux-gnu/bits/types.h" 2 3 4


typedef unsigned long int __dev_t;
typedef unsigned int __uid_t;
typedef unsigned int __gid_t;
typedef unsigned long int __ino_t;
typedef unsigned long int __ino64_t;
typedef unsigned int __mode_t;
typedef unsigned long int __nlink_t;
typedef long int __off_t;
typedef long int __off64_t;
typedef int __pid_t;
typedef struct { int __val[2]; } __fsid_t;
typedef long int __clock_t;
typedef unsigned long int __rlim_t;
typedef unsigned long int __rlim64_t;
typedef unsigned int __id_t;
typedef long int __time_t;
typedef unsigned int __useconds_t;
typedef long int __suseconds_t;
typedef long int __suseconds64_t;

typedef int __daddr_t;
typedef int __key_t;


typedef int __clockid_t;


typedef void * __timer_t;


typedef long int __blksize_t;




typedef long int __blkcnt_t;
typedef long int __blkcnt64_t;


typedef unsigned long int __fsblkcnt_t;
typedef unsigned long int __fsblkcnt64_t;


typedef unsigned long int __fsfilcnt_t;
typedef unsigned long int __fsfilcnt64_t;


typedef long int __fsword_t;

typedef long int __ssize_t;


typedef long int __syscall_slong_t;

typedef unsigned long int __syscall_ulong_t;



typedef __off64_t __loff_t;
typedef char *__caddr_t;


typedef long int __intptr_t;


typedef unsigned int __socklen_t;




typedef int __sig_atomic_t;
# 28 "/usr/include/stdint.h" 2 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/wchar.h" 1 3 4
# 29 "/usr/include/stdint.h" 2 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/wordsize.h" 1 3 4
# 30 "/usr/include/stdint.h" 2 3 4




# 1 "/usr/include/x86_64-linux-gnu/bits/stdint-intn.h" 1 3 4
# 24 "/usr/include/x86_64-linux-gnu/bits/stdint-intn.h" 3 4
typedef __int8_t int8_t;
typedef __int16_t int16_t;
typedef __int32_t int32_t;
typedef __int64_t int64_t;
# 35 "/usr/include/stdint.h" 2 3 4


# 1 "/usr/include/x86_64-linux-gnu/bits/stdint-uintn.h" 1 3 4
# 24 "/usr/include/x86_64-linux-gnu/bits/stdint-uintn.h" 3 4
typedef __uint8_t uint8_t;
typedef __uint16_t uint16_t;
typedef __uint32_t uint32_t;
typedef __uint64_t uint64_t;
# 38 "/usr/include/stdint.h" 2 3 4





typedef __int_least8_t int_least8_t;
typedef __int_least16_t int_least16_t;
typedef __int_least32_t int_least32_t;
typedef __int_least64_t int_least64_t;


typedef __uint_least8_t uint_least8_t;
typedef __uint_least16_t uint_least16_t;
typedef __uint_least32_t uint_least32_t;
typedef __uint_least64_t uint_least64_t;





typedef signed char int_fast8_t;

typedef long int int_fast16_t;
typedef long int int_fast32_t;
typedef long int int_fast64_t;
# 71 "/usr/include/stdint.h" 3 4
typedef unsigned char uint_fast8_t;

typedef unsigned long int uint_fast16_t;
typedef unsigned long int uint_fast32_t;
typedef unsigned long int uint_fast64_t;
# 87 "/usr/include/stdint.h" 3 4
typedef long int intptr_t;


typedef unsigned long int uintptr_t;
# 101 "/usr/include/stdint.h" 3 4
typedef __intmax_t intmax_t;
typedef __uintmax_t uintmax_t;
# 10 "/usr/lib/gcc/x86_64-linux-gnu/11/include/stdint.h" 2 3 4
# 20 "/home/yangli/ysyx-workbench/nemu/include/common.h" 2
# 1 "/usr/include/inttypes.h" 1 3 4
# 34 "/usr/include/inttypes.h" 3 4
typedef int __gwchar_t;
# 266 "/usr/include/inttypes.h" 3 4





typedef struct
  {
    long int quot;
    long int rem;
  } imaxdiv_t;
# 290 "/usr/include/inttypes.h" 3 4
extern intmax_t imaxabs (intmax_t __n) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));


extern imaxdiv_t imaxdiv (intmax_t __numer, intmax_t __denom)
      __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));


extern intmax_t strtoimax (const char *__restrict __nptr,
      char **__restrict __endptr, int __base) __attribute__ ((__nothrow__ , __leaf__));


extern uintmax_t strtoumax (const char *__restrict __nptr,
       char ** __restrict __endptr, int __base) __attribute__ ((__nothrow__ , __leaf__));


extern intmax_t wcstoimax (const __gwchar_t *__restrict __nptr,
      __gwchar_t **__restrict __endptr, int __base)
     __attribute__ ((__nothrow__ , __leaf__));


extern uintmax_t wcstoumax (const __gwchar_t *__restrict __nptr,
       __gwchar_t ** __restrict __endptr, int __base)
     __attribute__ ((__nothrow__ , __leaf__));


# 21 "/home/yangli/ysyx-workbench/nemu/include/common.h" 2
# 1 "/usr/lib/gcc/x86_64-linux-gnu/11/include/stdbool.h" 1 3 4
# 22 "/home/yangli/ysyx-workbench/nemu/include/common.h" 2
# 1 "/usr/include/string.h" 1 3 4
# 26 "/usr/include/string.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/libc-header-start.h" 1 3 4
# 27 "/usr/include/string.h" 2 3 4






# 1 "/usr/lib/gcc/x86_64-linux-gnu/11/include/stddef.h" 1 3 4
# 209 "/usr/lib/gcc/x86_64-linux-gnu/11/include/stddef.h" 3 4
typedef long unsigned int size_t;
# 34 "/usr/include/string.h" 2 3 4
# 43 "/usr/include/string.h" 3 4
extern void *memcpy (void *__restrict __dest, const void *__restrict __src,
       size_t __n) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));


extern void *memmove (void *__dest, const void *__src, size_t __n)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));





extern void *memccpy (void *__restrict __dest, const void *__restrict __src,
        int __c, size_t __n)
    __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2))) __attribute__ ((__access__ (__write_only__, 1, 4)));




extern void *memset (void *__s, int __c, size_t __n) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));


extern int memcmp (const void *__s1, const void *__s2, size_t __n)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));
# 80 "/usr/include/string.h" 3 4
extern int __memcmpeq (const void *__s1, const void *__s2, size_t __n)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));
# 107 "/usr/include/string.h" 3 4
extern void *memchr (const void *__s, int __c, size_t __n)
      __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));
# 141 "/usr/include/string.h" 3 4
extern char *strcpy (char *__restrict __dest, const char *__restrict __src)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));

extern char *strncpy (char *__restrict __dest,
        const char *__restrict __src, size_t __n)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));


extern char *strcat (char *__restrict __dest, const char *__restrict __src)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));

extern char *strncat (char *__restrict __dest, const char *__restrict __src,
        size_t __n) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));


extern int strcmp (const char *__s1, const char *__s2)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));

extern int strncmp (const char *__s1, const char *__s2, size_t __n)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));


extern int strcoll (const char *__s1, const char *__s2)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));

extern size_t strxfrm (char *__restrict __dest,
         const char *__restrict __src, size_t __n)
    __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2))) __attribute__ ((__access__ (__write_only__, 1, 3)));



# 1 "/usr/include/x86_64-linux-gnu/bits/types/locale_t.h" 1 3 4
# 22 "/usr/include/x86_64-linux-gnu/bits/types/locale_t.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/types/__locale_t.h" 1 3 4
# 27 "/usr/include/x86_64-linux-gnu/bits/types/__locale_t.h" 3 4
struct __locale_struct
{

  struct __locale_data *__locales[13];


  const unsigned short int *__ctype_b;
  const int *__ctype_tolower;
  const int *__ctype_toupper;


  const char *__names[13];
};

typedef struct __locale_struct *__locale_t;
# 23 "/usr/include/x86_64-linux-gnu/bits/types/locale_t.h" 2 3 4

typedef __locale_t locale_t;
# 173 "/usr/include/string.h" 2 3 4


extern int strcoll_l (const char *__s1, const char *__s2, locale_t __l)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2, 3)));


extern size_t strxfrm_l (char *__dest, const char *__src, size_t __n,
    locale_t __l) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2, 4)))
     __attribute__ ((__access__ (__write_only__, 1, 3)));





extern char *strdup (const char *__s)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__malloc__)) __attribute__ ((__nonnull__ (1)));






extern char *strndup (const char *__string, size_t __n)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__malloc__)) __attribute__ ((__nonnull__ (1)));
# 246 "/usr/include/string.h" 3 4
extern char *strchr (const char *__s, int __c)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));
# 273 "/usr/include/string.h" 3 4
extern char *strrchr (const char *__s, int __c)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));
# 293 "/usr/include/string.h" 3 4
extern size_t strcspn (const char *__s, const char *__reject)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));


extern size_t strspn (const char *__s, const char *__accept)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));
# 323 "/usr/include/string.h" 3 4
extern char *strpbrk (const char *__s, const char *__accept)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));
# 350 "/usr/include/string.h" 3 4
extern char *strstr (const char *__haystack, const char *__needle)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));




extern char *strtok (char *__restrict __s, const char *__restrict __delim)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2)));



extern char *__strtok_r (char *__restrict __s,
    const char *__restrict __delim,
    char **__restrict __save_ptr)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2, 3)));

extern char *strtok_r (char *__restrict __s, const char *__restrict __delim,
         char **__restrict __save_ptr)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2, 3)));
# 407 "/usr/include/string.h" 3 4
extern size_t strlen (const char *__s)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));




extern size_t strnlen (const char *__string, size_t __maxlen)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));




extern char *strerror (int __errnum) __attribute__ ((__nothrow__ , __leaf__));
# 432 "/usr/include/string.h" 3 4
extern int strerror_r (int __errnum, char *__buf, size_t __buflen) __asm__ ("" "__xpg_strerror_r") __attribute__ ((__nothrow__ , __leaf__))

                        __attribute__ ((__nonnull__ (2)))
    __attribute__ ((__access__ (__write_only__, 2, 3)));
# 458 "/usr/include/string.h" 3 4
extern char *strerror_l (int __errnum, locale_t __l) __attribute__ ((__nothrow__ , __leaf__));



# 1 "/usr/include/strings.h" 1 3 4
# 23 "/usr/include/strings.h" 3 4
# 1 "/usr/lib/gcc/x86_64-linux-gnu/11/include/stddef.h" 1 3 4
# 24 "/usr/include/strings.h" 2 3 4










extern int bcmp (const void *__s1, const void *__s2, size_t __n)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));


extern void bcopy (const void *__src, void *__dest, size_t __n)
  __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));


extern void bzero (void *__s, size_t __n) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));
# 68 "/usr/include/strings.h" 3 4
extern char *index (const char *__s, int __c)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));
# 96 "/usr/include/strings.h" 3 4
extern char *rindex (const char *__s, int __c)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));






extern int ffs (int __i) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));





extern int ffsl (long int __l) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));
__extension__ extern int ffsll (long long int __ll)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));



extern int strcasecmp (const char *__s1, const char *__s2)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));


extern int strncasecmp (const char *__s1, const char *__s2, size_t __n)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));






extern int strcasecmp_l (const char *__s1, const char *__s2, locale_t __loc)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2, 3)));



extern int strncasecmp_l (const char *__s1, const char *__s2,
     size_t __n, locale_t __loc)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2, 4)));








# 1 "/usr/include/x86_64-linux-gnu/bits/strings_fortified.h" 1 3 4
# 22 "/usr/include/x86_64-linux-gnu/bits/strings_fortified.h" 3 4
extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__gnu_inline__)) __attribute__ ((__artificial__)) void
__attribute__ ((__nothrow__ , __leaf__)) bcopy (const void *__src, void *__dest, size_t __len)
{
  (void) __builtin___memmove_chk (__dest, __src, __len,
      __builtin_object_size (__dest, 0));
}

extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__gnu_inline__)) __attribute__ ((__artificial__)) void
__attribute__ ((__nothrow__ , __leaf__)) bzero (void *__dest, size_t __len)
{
  (void) __builtin___memset_chk (__dest, '\0', __len,
     __builtin_object_size (__dest, 0));
}
# 145 "/usr/include/strings.h" 2 3 4
# 463 "/usr/include/string.h" 2 3 4



extern void explicit_bzero (void *__s, size_t __n) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)))
    __attribute__ ((__access__ (__write_only__, 1, 2)));



extern char *strsep (char **__restrict __stringp,
       const char *__restrict __delim)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));




extern char *strsignal (int __sig) __attribute__ ((__nothrow__ , __leaf__));
# 489 "/usr/include/string.h" 3 4
extern char *__stpcpy (char *__restrict __dest, const char *__restrict __src)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));
extern char *stpcpy (char *__restrict __dest, const char *__restrict __src)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));



extern char *__stpncpy (char *__restrict __dest,
   const char *__restrict __src, size_t __n)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));
extern char *stpncpy (char *__restrict __dest,
        const char *__restrict __src, size_t __n)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));
# 535 "/usr/include/string.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/string_fortified.h" 1 3 4
# 25 "/usr/include/x86_64-linux-gnu/bits/string_fortified.h" 3 4
extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__gnu_inline__)) __attribute__ ((__artificial__)) void *
__attribute__ ((__nothrow__ , __leaf__)) memcpy (void *__restrict __dest, const void *__restrict __src, size_t __len)

{
  return __builtin___memcpy_chk (__dest, __src, __len,
     __builtin_object_size (__dest, 0));
}

extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__gnu_inline__)) __attribute__ ((__artificial__)) void *
__attribute__ ((__nothrow__ , __leaf__)) memmove (void *__dest, const void *__src, size_t __len)
{
  return __builtin___memmove_chk (__dest, __src, __len,
      __builtin_object_size (__dest, 0));
}
# 56 "/usr/include/x86_64-linux-gnu/bits/string_fortified.h" 3 4
extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__gnu_inline__)) __attribute__ ((__artificial__)) void *
__attribute__ ((__nothrow__ , __leaf__)) memset (void *__dest, int __ch, size_t __len)
{
  return __builtin___memset_chk (__dest, __ch, __len,
     __builtin_object_size (__dest, 0));
}




void __explicit_bzero_chk (void *__dest, size_t __len, size_t __destlen)
  __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1))) __attribute__ ((__access__ (__write_only__, 1, 2)));

extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__gnu_inline__)) __attribute__ ((__artificial__)) void
__attribute__ ((__nothrow__ , __leaf__)) explicit_bzero (void *__dest, size_t __len)
{
  __explicit_bzero_chk (__dest, __len, __builtin_object_size (__dest, 0));
}


extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__gnu_inline__)) __attribute__ ((__artificial__)) char *
__attribute__ ((__nothrow__ , __leaf__)) strcpy (char *__restrict __dest, const char *__restrict __src)
{
  return __builtin___strcpy_chk (__dest, __src, __builtin_object_size (__dest, 2 > 1));
}


extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__gnu_inline__)) __attribute__ ((__artificial__)) char *
__attribute__ ((__nothrow__ , __leaf__)) stpcpy (char *__restrict __dest, const char *__restrict __src)
{
  return __builtin___stpcpy_chk (__dest, __src, __builtin_object_size (__dest, 2 > 1));
}



extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__gnu_inline__)) __attribute__ ((__artificial__)) char *
__attribute__ ((__nothrow__ , __leaf__)) strncpy (char *__restrict __dest, const char *__restrict __src, size_t __len)

{
  return __builtin___strncpy_chk (__dest, __src, __len,
      __builtin_object_size (__dest, 2 > 1));
}



extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__gnu_inline__)) __attribute__ ((__artificial__)) char *
__attribute__ ((__nothrow__ , __leaf__)) stpncpy (char *__dest, const char *__src, size_t __n)
{
  return __builtin___stpncpy_chk (__dest, __src, __n,
      __builtin_object_size (__dest, 2 > 1));
}
# 127 "/usr/include/x86_64-linux-gnu/bits/string_fortified.h" 3 4
extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__gnu_inline__)) __attribute__ ((__artificial__)) char *
__attribute__ ((__nothrow__ , __leaf__)) strcat (char *__restrict __dest, const char *__restrict __src)
{
  return __builtin___strcat_chk (__dest, __src, __builtin_object_size (__dest, 2 > 1));
}


extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__gnu_inline__)) __attribute__ ((__artificial__)) char *
__attribute__ ((__nothrow__ , __leaf__)) strncat (char *__restrict __dest, const char *__restrict __src, size_t __len)

{
  return __builtin___strncat_chk (__dest, __src, __len,
      __builtin_object_size (__dest, 2 > 1));
}
# 536 "/usr/include/string.h" 2 3 4




# 23 "/home/yangli/ysyx-workbench/nemu/include/common.h" 2

# 1 "/home/yangli/ysyx-workbench/nemu/include/generated/autoconf.h" 1
# 25 "/home/yangli/ysyx-workbench/nemu/include/common.h" 2
# 1 "/home/yangli/ysyx-workbench/nemu/include/macro.h" 1
# 26 "/home/yangli/ysyx-workbench/nemu/include/common.h" 2




# 1 "/usr/include/assert.h" 1 3 4
# 66 "/usr/include/assert.h" 3 4



extern void __assert_fail (const char *__assertion, const char *__file,
      unsigned int __line, const char *__function)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__noreturn__));


extern void __assert_perror_fail (int __errnum, const char *__file,
      unsigned int __line, const char *__function)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__noreturn__));




extern void __assert (const char *__assertion, const char *__file, int __line)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__noreturn__));



# 31 "/home/yangli/ysyx-workbench/nemu/include/common.h" 2
# 1 "/usr/include/stdlib.h" 1 3 4
# 26 "/usr/include/stdlib.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/libc-header-start.h" 1 3 4
# 27 "/usr/include/stdlib.h" 2 3 4





# 1 "/usr/lib/gcc/x86_64-linux-gnu/11/include/stddef.h" 1 3 4
# 321 "/usr/lib/gcc/x86_64-linux-gnu/11/include/stddef.h" 3 4
typedef int wchar_t;
# 33 "/usr/include/stdlib.h" 2 3 4







# 1 "/usr/include/x86_64-linux-gnu/bits/waitflags.h" 1 3 4
# 41 "/usr/include/stdlib.h" 2 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/waitstatus.h" 1 3 4
# 42 "/usr/include/stdlib.h" 2 3 4
# 56 "/usr/include/stdlib.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/floatn.h" 1 3 4
# 119 "/usr/include/x86_64-linux-gnu/bits/floatn.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/floatn-common.h" 1 3 4
# 24 "/usr/include/x86_64-linux-gnu/bits/floatn-common.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/long-double.h" 1 3 4
# 25 "/usr/include/x86_64-linux-gnu/bits/floatn-common.h" 2 3 4
# 120 "/usr/include/x86_64-linux-gnu/bits/floatn.h" 2 3 4
# 57 "/usr/include/stdlib.h" 2 3 4


typedef struct
  {
    int quot;
    int rem;
  } div_t;



typedef struct
  {
    long int quot;
    long int rem;
  } ldiv_t;





__extension__ typedef struct
  {
    long long int quot;
    long long int rem;
  } lldiv_t;
# 98 "/usr/include/stdlib.h" 3 4
extern size_t __ctype_get_mb_cur_max (void) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__warn_unused_result__));



extern double atof (const char *__nptr)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1))) __attribute__ ((__warn_unused_result__));

extern int atoi (const char *__nptr)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1))) __attribute__ ((__warn_unused_result__));

extern long int atol (const char *__nptr)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1))) __attribute__ ((__warn_unused_result__));



__extension__ extern long long int atoll (const char *__nptr)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1))) __attribute__ ((__warn_unused_result__));



extern double strtod (const char *__restrict __nptr,
        char **__restrict __endptr)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));



extern float strtof (const char *__restrict __nptr,
       char **__restrict __endptr) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));

extern long double strtold (const char *__restrict __nptr,
       char **__restrict __endptr)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));
# 177 "/usr/include/stdlib.h" 3 4
extern long int strtol (const char *__restrict __nptr,
   char **__restrict __endptr, int __base)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));

extern unsigned long int strtoul (const char *__restrict __nptr,
      char **__restrict __endptr, int __base)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));



__extension__
extern long long int strtoq (const char *__restrict __nptr,
        char **__restrict __endptr, int __base)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));

__extension__
extern unsigned long long int strtouq (const char *__restrict __nptr,
           char **__restrict __endptr, int __base)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));




__extension__
extern long long int strtoll (const char *__restrict __nptr,
         char **__restrict __endptr, int __base)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));

__extension__
extern unsigned long long int strtoull (const char *__restrict __nptr,
     char **__restrict __endptr, int __base)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));
# 361 "/usr/include/stdlib.h" 3 4
extern __inline __attribute__ ((__gnu_inline__)) int
__attribute__ ((__nothrow__ , __leaf__)) atoi (const char *__nptr)
{
  return (int) strtol (__nptr, (char **) ((void *)0), 10);
}
extern __inline __attribute__ ((__gnu_inline__)) long int
__attribute__ ((__nothrow__ , __leaf__)) atol (const char *__nptr)
{
  return strtol (__nptr, (char **) ((void *)0), 10);
}


__extension__ extern __inline __attribute__ ((__gnu_inline__)) long long int
__attribute__ ((__nothrow__ , __leaf__)) atoll (const char *__nptr)
{
  return strtoll (__nptr, (char **) ((void *)0), 10);
}
# 386 "/usr/include/stdlib.h" 3 4
extern char *l64a (long int __n) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__warn_unused_result__));


extern long int a64l (const char *__s)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1))) __attribute__ ((__warn_unused_result__));




# 1 "/usr/include/x86_64-linux-gnu/sys/types.h" 1 3 4
# 27 "/usr/include/x86_64-linux-gnu/sys/types.h" 3 4






typedef __u_char u_char;
typedef __u_short u_short;
typedef __u_int u_int;
typedef __u_long u_long;
typedef __quad_t quad_t;
typedef __u_quad_t u_quad_t;
typedef __fsid_t fsid_t;


typedef __loff_t loff_t;




typedef __ino_t ino_t;
# 59 "/usr/include/x86_64-linux-gnu/sys/types.h" 3 4
typedef __dev_t dev_t;




typedef __gid_t gid_t;




typedef __mode_t mode_t;




typedef __nlink_t nlink_t;




typedef __uid_t uid_t;





typedef __off_t off_t;
# 97 "/usr/include/x86_64-linux-gnu/sys/types.h" 3 4
typedef __pid_t pid_t;





typedef __id_t id_t;




typedef __ssize_t ssize_t;





typedef __daddr_t daddr_t;
typedef __caddr_t caddr_t;





typedef __key_t key_t;




# 1 "/usr/include/x86_64-linux-gnu/bits/types/clock_t.h" 1 3 4






typedef __clock_t clock_t;
# 127 "/usr/include/x86_64-linux-gnu/sys/types.h" 2 3 4

# 1 "/usr/include/x86_64-linux-gnu/bits/types/clockid_t.h" 1 3 4






typedef __clockid_t clockid_t;
# 129 "/usr/include/x86_64-linux-gnu/sys/types.h" 2 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/types/time_t.h" 1 3 4
# 10 "/usr/include/x86_64-linux-gnu/bits/types/time_t.h" 3 4
typedef __time_t time_t;
# 130 "/usr/include/x86_64-linux-gnu/sys/types.h" 2 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/types/timer_t.h" 1 3 4






typedef __timer_t timer_t;
# 131 "/usr/include/x86_64-linux-gnu/sys/types.h" 2 3 4
# 144 "/usr/include/x86_64-linux-gnu/sys/types.h" 3 4
# 1 "/usr/lib/gcc/x86_64-linux-gnu/11/include/stddef.h" 1 3 4
# 145 "/usr/include/x86_64-linux-gnu/sys/types.h" 2 3 4



typedef unsigned long int ulong;
typedef unsigned short int ushort;
typedef unsigned int uint;







typedef __uint8_t u_int8_t;
typedef __uint16_t u_int16_t;
typedef __uint32_t u_int32_t;
typedef __uint64_t u_int64_t;


typedef int register_t __attribute__ ((__mode__ (__word__)));
# 176 "/usr/include/x86_64-linux-gnu/sys/types.h" 3 4
# 1 "/usr/include/endian.h" 1 3 4
# 24 "/usr/include/endian.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/endian.h" 1 3 4
# 35 "/usr/include/x86_64-linux-gnu/bits/endian.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/endianness.h" 1 3 4
# 36 "/usr/include/x86_64-linux-gnu/bits/endian.h" 2 3 4
# 25 "/usr/include/endian.h" 2 3 4
# 35 "/usr/include/endian.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/byteswap.h" 1 3 4
# 33 "/usr/include/x86_64-linux-gnu/bits/byteswap.h" 3 4
static __inline __uint16_t
__bswap_16 (__uint16_t __bsx)
{

  return __builtin_bswap16 (__bsx);



}






static __inline __uint32_t
__bswap_32 (__uint32_t __bsx)
{

  return __builtin_bswap32 (__bsx);



}
# 69 "/usr/include/x86_64-linux-gnu/bits/byteswap.h" 3 4
__extension__ static __inline __uint64_t
__bswap_64 (__uint64_t __bsx)
{

  return __builtin_bswap64 (__bsx);



}
# 36 "/usr/include/endian.h" 2 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/uintn-identity.h" 1 3 4
# 32 "/usr/include/x86_64-linux-gnu/bits/uintn-identity.h" 3 4
static __inline __uint16_t
__uint16_identity (__uint16_t __x)
{
  return __x;
}

static __inline __uint32_t
__uint32_identity (__uint32_t __x)
{
  return __x;
}

static __inline __uint64_t
__uint64_identity (__uint64_t __x)
{
  return __x;
}
# 37 "/usr/include/endian.h" 2 3 4
# 177 "/usr/include/x86_64-linux-gnu/sys/types.h" 2 3 4


# 1 "/usr/include/x86_64-linux-gnu/sys/select.h" 1 3 4
# 30 "/usr/include/x86_64-linux-gnu/sys/select.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/select.h" 1 3 4
# 31 "/usr/include/x86_64-linux-gnu/sys/select.h" 2 3 4


# 1 "/usr/include/x86_64-linux-gnu/bits/types/sigset_t.h" 1 3 4



# 1 "/usr/include/x86_64-linux-gnu/bits/types/__sigset_t.h" 1 3 4




typedef struct
{
  unsigned long int __val[(1024 / (8 * sizeof (unsigned long int)))];
} __sigset_t;
# 5 "/usr/include/x86_64-linux-gnu/bits/types/sigset_t.h" 2 3 4


typedef __sigset_t sigset_t;
# 34 "/usr/include/x86_64-linux-gnu/sys/select.h" 2 3 4



# 1 "/usr/include/x86_64-linux-gnu/bits/types/struct_timeval.h" 1 3 4







struct timeval
{




  __time_t tv_sec;
  __suseconds_t tv_usec;

};
# 38 "/usr/include/x86_64-linux-gnu/sys/select.h" 2 3 4

# 1 "/usr/include/x86_64-linux-gnu/bits/types/struct_timespec.h" 1 3 4
# 11 "/usr/include/x86_64-linux-gnu/bits/types/struct_timespec.h" 3 4
struct timespec
{



  __time_t tv_sec;




  __syscall_slong_t tv_nsec;
# 31 "/usr/include/x86_64-linux-gnu/bits/types/struct_timespec.h" 3 4
};
# 40 "/usr/include/x86_64-linux-gnu/sys/select.h" 2 3 4



typedef __suseconds_t suseconds_t;





typedef long int __fd_mask;
# 59 "/usr/include/x86_64-linux-gnu/sys/select.h" 3 4
typedef struct
  {






    __fd_mask __fds_bits[1024 / (8 * (int) sizeof (__fd_mask))];


  } fd_set;






typedef __fd_mask fd_mask;
# 91 "/usr/include/x86_64-linux-gnu/sys/select.h" 3 4

# 102 "/usr/include/x86_64-linux-gnu/sys/select.h" 3 4
extern int select (int __nfds, fd_set *__restrict __readfds,
     fd_set *__restrict __writefds,
     fd_set *__restrict __exceptfds,
     struct timeval *__restrict __timeout);
# 127 "/usr/include/x86_64-linux-gnu/sys/select.h" 3 4
extern int pselect (int __nfds, fd_set *__restrict __readfds,
      fd_set *__restrict __writefds,
      fd_set *__restrict __exceptfds,
      const struct timespec *__restrict __timeout,
      const __sigset_t *__restrict __sigmask);
# 150 "/usr/include/x86_64-linux-gnu/sys/select.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/select2.h" 1 3 4
# 24 "/usr/include/x86_64-linux-gnu/bits/select2.h" 3 4
extern long int __fdelt_chk (long int __d);
extern long int __fdelt_warn (long int __d)
  __attribute__((__warning__ ("bit outside of fd_set selected")));
# 151 "/usr/include/x86_64-linux-gnu/sys/select.h" 2 3 4



# 180 "/usr/include/x86_64-linux-gnu/sys/types.h" 2 3 4





typedef __blksize_t blksize_t;






typedef __blkcnt_t blkcnt_t;



typedef __fsblkcnt_t fsblkcnt_t;



typedef __fsfilcnt_t fsfilcnt_t;
# 227 "/usr/include/x86_64-linux-gnu/sys/types.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h" 1 3 4
# 23 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/thread-shared-types.h" 1 3 4
# 44 "/usr/include/x86_64-linux-gnu/bits/thread-shared-types.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes-arch.h" 1 3 4
# 21 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes-arch.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/wordsize.h" 1 3 4
# 22 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes-arch.h" 2 3 4
# 45 "/usr/include/x86_64-linux-gnu/bits/thread-shared-types.h" 2 3 4

# 1 "/usr/include/x86_64-linux-gnu/bits/atomic_wide_counter.h" 1 3 4
# 25 "/usr/include/x86_64-linux-gnu/bits/atomic_wide_counter.h" 3 4
typedef union
{
  __extension__ unsigned long long int __value64;
  struct
  {
    unsigned int __low;
    unsigned int __high;
  } __value32;
} __atomic_wide_counter;
# 47 "/usr/include/x86_64-linux-gnu/bits/thread-shared-types.h" 2 3 4




typedef struct __pthread_internal_list
{
  struct __pthread_internal_list *__prev;
  struct __pthread_internal_list *__next;
} __pthread_list_t;

typedef struct __pthread_internal_slist
{
  struct __pthread_internal_slist *__next;
} __pthread_slist_t;
# 76 "/usr/include/x86_64-linux-gnu/bits/thread-shared-types.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/struct_mutex.h" 1 3 4
# 22 "/usr/include/x86_64-linux-gnu/bits/struct_mutex.h" 3 4
struct __pthread_mutex_s
{
  int __lock;
  unsigned int __count;
  int __owner;

  unsigned int __nusers;



  int __kind;

  short __spins;
  short __elision;
  __pthread_list_t __list;
# 53 "/usr/include/x86_64-linux-gnu/bits/struct_mutex.h" 3 4
};
# 77 "/usr/include/x86_64-linux-gnu/bits/thread-shared-types.h" 2 3 4
# 89 "/usr/include/x86_64-linux-gnu/bits/thread-shared-types.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/struct_rwlock.h" 1 3 4
# 23 "/usr/include/x86_64-linux-gnu/bits/struct_rwlock.h" 3 4
struct __pthread_rwlock_arch_t
{
  unsigned int __readers;
  unsigned int __writers;
  unsigned int __wrphase_futex;
  unsigned int __writers_futex;
  unsigned int __pad3;
  unsigned int __pad4;

  int __cur_writer;
  int __shared;
  signed char __rwelision;




  unsigned char __pad1[7];


  unsigned long int __pad2;


  unsigned int __flags;
# 55 "/usr/include/x86_64-linux-gnu/bits/struct_rwlock.h" 3 4
};
# 90 "/usr/include/x86_64-linux-gnu/bits/thread-shared-types.h" 2 3 4




struct __pthread_cond_s
{
  __atomic_wide_counter __wseq;
  __atomic_wide_counter __g1_start;
  unsigned int __g_refs[2] ;
  unsigned int __g_size[2];
  unsigned int __g1_orig_size;
  unsigned int __wrefs;
  unsigned int __g_signals[2];
};

typedef unsigned int __tss_t;
typedef unsigned long int __thrd_t;

typedef struct
{
  int __data ;
} __once_flag;
# 24 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h" 2 3 4



typedef unsigned long int pthread_t;




typedef union
{
  char __size[4];
  int __align;
} pthread_mutexattr_t;




typedef union
{
  char __size[4];
  int __align;
} pthread_condattr_t;



typedef unsigned int pthread_key_t;



typedef int pthread_once_t;


union pthread_attr_t
{
  char __size[56];
  long int __align;
};

typedef union pthread_attr_t pthread_attr_t;




typedef union
{
  struct __pthread_mutex_s __data;
  char __size[40];
  long int __align;
} pthread_mutex_t;


typedef union
{
  struct __pthread_cond_s __data;
  char __size[48];
  __extension__ long long int __align;
} pthread_cond_t;





typedef union
{
  struct __pthread_rwlock_arch_t __data;
  char __size[56];
  long int __align;
} pthread_rwlock_t;

typedef union
{
  char __size[8];
  long int __align;
} pthread_rwlockattr_t;





typedef volatile int pthread_spinlock_t;




typedef union
{
  char __size[32];
  long int __align;
} pthread_barrier_t;

typedef union
{
  char __size[4];
  int __align;
} pthread_barrierattr_t;
# 228 "/usr/include/x86_64-linux-gnu/sys/types.h" 2 3 4



# 396 "/usr/include/stdlib.h" 2 3 4






extern long int random (void) __attribute__ ((__nothrow__ , __leaf__));


extern void srandom (unsigned int __seed) __attribute__ ((__nothrow__ , __leaf__));





extern char *initstate (unsigned int __seed, char *__statebuf,
   size_t __statelen) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2)));



extern char *setstate (char *__statebuf) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));







struct random_data
  {
    int32_t *fptr;
    int32_t *rptr;
    int32_t *state;
    int rand_type;
    int rand_deg;
    int rand_sep;
    int32_t *end_ptr;
  };

extern int random_r (struct random_data *__restrict __buf,
       int32_t *__restrict __result) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));

extern int srandom_r (unsigned int __seed, struct random_data *__buf)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2)));

extern int initstate_r (unsigned int __seed, char *__restrict __statebuf,
   size_t __statelen,
   struct random_data *__restrict __buf)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2, 4)));

extern int setstate_r (char *__restrict __statebuf,
         struct random_data *__restrict __buf)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));





extern int rand (void) __attribute__ ((__nothrow__ , __leaf__));

extern void srand (unsigned int __seed) __attribute__ ((__nothrow__ , __leaf__));



extern int rand_r (unsigned int *__seed) __attribute__ ((__nothrow__ , __leaf__));







extern double drand48 (void) __attribute__ ((__nothrow__ , __leaf__));
extern double erand48 (unsigned short int __xsubi[3]) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));


extern long int lrand48 (void) __attribute__ ((__nothrow__ , __leaf__));
extern long int nrand48 (unsigned short int __xsubi[3])
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));


extern long int mrand48 (void) __attribute__ ((__nothrow__ , __leaf__));
extern long int jrand48 (unsigned short int __xsubi[3])
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));


extern void srand48 (long int __seedval) __attribute__ ((__nothrow__ , __leaf__));
extern unsigned short int *seed48 (unsigned short int __seed16v[3])
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));
extern void lcong48 (unsigned short int __param[7]) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));





struct drand48_data
  {
    unsigned short int __x[3];
    unsigned short int __old_x[3];
    unsigned short int __c;
    unsigned short int __init;
    __extension__ unsigned long long int __a;

  };


extern int drand48_r (struct drand48_data *__restrict __buffer,
        double *__restrict __result) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));
extern int erand48_r (unsigned short int __xsubi[3],
        struct drand48_data *__restrict __buffer,
        double *__restrict __result) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));


extern int lrand48_r (struct drand48_data *__restrict __buffer,
        long int *__restrict __result)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));
extern int nrand48_r (unsigned short int __xsubi[3],
        struct drand48_data *__restrict __buffer,
        long int *__restrict __result)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));


extern int mrand48_r (struct drand48_data *__restrict __buffer,
        long int *__restrict __result)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));
extern int jrand48_r (unsigned short int __xsubi[3],
        struct drand48_data *__restrict __buffer,
        long int *__restrict __result)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));


extern int srand48_r (long int __seedval, struct drand48_data *__buffer)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2)));

extern int seed48_r (unsigned short int __seed16v[3],
       struct drand48_data *__buffer) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));

extern int lcong48_r (unsigned short int __param[7],
        struct drand48_data *__buffer)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));




extern void *malloc (size_t __size) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__malloc__))
     __attribute__ ((__alloc_size__ (1))) __attribute__ ((__warn_unused_result__));

extern void *calloc (size_t __nmemb, size_t __size)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__malloc__)) __attribute__ ((__alloc_size__ (1, 2))) __attribute__ ((__warn_unused_result__));






extern void *realloc (void *__ptr, size_t __size)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__warn_unused_result__)) __attribute__ ((__alloc_size__ (2)));


extern void free (void *__ptr) __attribute__ ((__nothrow__ , __leaf__));







extern void *reallocarray (void *__ptr, size_t __nmemb, size_t __size)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__warn_unused_result__))
     __attribute__ ((__alloc_size__ (2, 3)))
    __attribute__ ((__malloc__ (__builtin_free, 1)));


extern void *reallocarray (void *__ptr, size_t __nmemb, size_t __size)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__malloc__ (reallocarray, 1)));



# 1 "/usr/include/alloca.h" 1 3 4
# 24 "/usr/include/alloca.h" 3 4
# 1 "/usr/lib/gcc/x86_64-linux-gnu/11/include/stddef.h" 1 3 4
# 25 "/usr/include/alloca.h" 2 3 4







extern void *alloca (size_t __size) __attribute__ ((__nothrow__ , __leaf__));






# 575 "/usr/include/stdlib.h" 2 3 4





extern void *valloc (size_t __size) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__malloc__))
     __attribute__ ((__alloc_size__ (1))) __attribute__ ((__warn_unused_result__));




extern int posix_memalign (void **__memptr, size_t __alignment, size_t __size)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1))) __attribute__ ((__warn_unused_result__));




extern void *aligned_alloc (size_t __alignment, size_t __size)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__malloc__)) __attribute__ ((__alloc_align__ (1)))
     __attribute__ ((__alloc_size__ (2))) __attribute__ ((__warn_unused_result__));



extern void abort (void) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__noreturn__));



extern int atexit (void (*__func) (void)) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));







extern int at_quick_exit (void (*__func) (void)) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));






extern int on_exit (void (*__func) (int __status, void *__arg), void *__arg)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));





extern void exit (int __status) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__noreturn__));





extern void quick_exit (int __status) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__noreturn__));





extern void _Exit (int __status) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__noreturn__));




extern char *getenv (const char *__name) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1))) __attribute__ ((__warn_unused_result__));
# 654 "/usr/include/stdlib.h" 3 4
extern int putenv (char *__string) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));





extern int setenv (const char *__name, const char *__value, int __replace)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2)));


extern int unsetenv (const char *__name) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));






extern int clearenv (void) __attribute__ ((__nothrow__ , __leaf__));
# 682 "/usr/include/stdlib.h" 3 4
extern char *mktemp (char *__template) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));
# 695 "/usr/include/stdlib.h" 3 4
extern int mkstemp (char *__template) __attribute__ ((__nonnull__ (1))) __attribute__ ((__warn_unused_result__));
# 717 "/usr/include/stdlib.h" 3 4
extern int mkstemps (char *__template, int __suffixlen) __attribute__ ((__nonnull__ (1))) __attribute__ ((__warn_unused_result__));
# 738 "/usr/include/stdlib.h" 3 4
extern char *mkdtemp (char *__template) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1))) __attribute__ ((__warn_unused_result__));
# 791 "/usr/include/stdlib.h" 3 4
extern int system (const char *__command) __attribute__ ((__warn_unused_result__));
# 808 "/usr/include/stdlib.h" 3 4
extern char *realpath (const char *__restrict __name,
         char *__restrict __resolved) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__warn_unused_result__));






typedef int (*__compar_fn_t) (const void *, const void *);
# 828 "/usr/include/stdlib.h" 3 4
extern void *bsearch (const void *__key, const void *__base,
        size_t __nmemb, size_t __size, __compar_fn_t __compar)
     __attribute__ ((__nonnull__ (1, 2, 5))) __attribute__ ((__warn_unused_result__));


# 1 "/usr/include/x86_64-linux-gnu/bits/stdlib-bsearch.h" 1 3 4
# 19 "/usr/include/x86_64-linux-gnu/bits/stdlib-bsearch.h" 3 4
extern __inline __attribute__ ((__gnu_inline__)) void *
bsearch (const void *__key, const void *__base, size_t __nmemb, size_t __size,
  __compar_fn_t __compar)
{
  size_t __l, __u, __idx;
  const void *__p;
  int __comparison;

  __l = 0;
  __u = __nmemb;
  while (__l < __u)
    {
      __idx = (__l + __u) / 2;
      __p = (const void *) (((const char *) __base) + (__idx * __size));
      __comparison = (*__compar) (__key, __p);
      if (__comparison < 0)
 __u = __idx;
      else if (__comparison > 0)
 __l = __idx + 1;
      else
 {

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wcast-qual"

   return (void *) __p;

#pragma GCC diagnostic pop

 }
    }

  return ((void *)0);
}
# 834 "/usr/include/stdlib.h" 2 3 4




extern void qsort (void *__base, size_t __nmemb, size_t __size,
     __compar_fn_t __compar) __attribute__ ((__nonnull__ (1, 4)));
# 848 "/usr/include/stdlib.h" 3 4
extern int abs (int __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)) __attribute__ ((__warn_unused_result__));
extern long int labs (long int __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)) __attribute__ ((__warn_unused_result__));


__extension__ extern long long int llabs (long long int __x)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)) __attribute__ ((__warn_unused_result__));






extern div_t div (int __numer, int __denom)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)) __attribute__ ((__warn_unused_result__));
extern ldiv_t ldiv (long int __numer, long int __denom)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)) __attribute__ ((__warn_unused_result__));


__extension__ extern lldiv_t lldiv (long long int __numer,
        long long int __denom)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)) __attribute__ ((__warn_unused_result__));
# 880 "/usr/include/stdlib.h" 3 4
extern char *ecvt (double __value, int __ndigit, int *__restrict __decpt,
     int *__restrict __sign) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (3, 4))) __attribute__ ((__warn_unused_result__));




extern char *fcvt (double __value, int __ndigit, int *__restrict __decpt,
     int *__restrict __sign) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (3, 4))) __attribute__ ((__warn_unused_result__));




extern char *gcvt (double __value, int __ndigit, char *__buf)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (3))) __attribute__ ((__warn_unused_result__));




extern char *qecvt (long double __value, int __ndigit,
      int *__restrict __decpt, int *__restrict __sign)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (3, 4))) __attribute__ ((__warn_unused_result__));
extern char *qfcvt (long double __value, int __ndigit,
      int *__restrict __decpt, int *__restrict __sign)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (3, 4))) __attribute__ ((__warn_unused_result__));
extern char *qgcvt (long double __value, int __ndigit, char *__buf)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (3))) __attribute__ ((__warn_unused_result__));




extern int ecvt_r (double __value, int __ndigit, int *__restrict __decpt,
     int *__restrict __sign, char *__restrict __buf,
     size_t __len) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (3, 4, 5)));
extern int fcvt_r (double __value, int __ndigit, int *__restrict __decpt,
     int *__restrict __sign, char *__restrict __buf,
     size_t __len) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (3, 4, 5)));

extern int qecvt_r (long double __value, int __ndigit,
      int *__restrict __decpt, int *__restrict __sign,
      char *__restrict __buf, size_t __len)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (3, 4, 5)));
extern int qfcvt_r (long double __value, int __ndigit,
      int *__restrict __decpt, int *__restrict __sign,
      char *__restrict __buf, size_t __len)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (3, 4, 5)));





extern int mblen (const char *__s, size_t __n) __attribute__ ((__nothrow__ , __leaf__));


extern int mbtowc (wchar_t *__restrict __pwc,
     const char *__restrict __s, size_t __n) __attribute__ ((__nothrow__ , __leaf__));


extern int wctomb (char *__s, wchar_t __wchar) __attribute__ ((__nothrow__ , __leaf__));



extern size_t mbstowcs (wchar_t *__restrict __pwcs,
   const char *__restrict __s, size_t __n) __attribute__ ((__nothrow__ , __leaf__))
    __attribute__ ((__access__ (__read_only__, 2)));

extern size_t wcstombs (char *__restrict __s,
   const wchar_t *__restrict __pwcs, size_t __n)
     __attribute__ ((__nothrow__ , __leaf__))
  __attribute__ ((__access__ (__write_only__, 1, 3)))
  __attribute__ ((__access__ (__read_only__, 2)));






extern int rpmatch (const char *__response) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1))) __attribute__ ((__warn_unused_result__));
# 967 "/usr/include/stdlib.h" 3 4
extern int getsubopt (char **__restrict __optionp,
        char *const *__restrict __tokens,
        char **__restrict __valuep)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2, 3))) __attribute__ ((__warn_unused_result__));
# 1013 "/usr/include/stdlib.h" 3 4
extern int getloadavg (double __loadavg[], int __nelem)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));
# 1023 "/usr/include/stdlib.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/stdlib-float.h" 1 3 4
# 24 "/usr/include/x86_64-linux-gnu/bits/stdlib-float.h" 3 4
extern __inline __attribute__ ((__gnu_inline__)) double
__attribute__ ((__nothrow__ , __leaf__)) atof (const char *__nptr)
{
  return strtod (__nptr, (char **) ((void *)0));
}
# 1024 "/usr/include/stdlib.h" 2 3 4



# 1 "/usr/include/x86_64-linux-gnu/bits/stdlib.h" 1 3 4
# 23 "/usr/include/x86_64-linux-gnu/bits/stdlib.h" 3 4
extern char *__realpath_chk (const char *__restrict __name,
        char *__restrict __resolved,
        size_t __resolvedlen) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__warn_unused_result__));
extern char *__realpath_alias (const char *__restrict __name, char *__restrict __resolved) __asm__ ("" "realpath") __attribute__ ((__nothrow__ , __leaf__))

                                                 __attribute__ ((__warn_unused_result__));
extern char *__realpath_chk_warn (const char *__restrict __name, char *__restrict __resolved, size_t __resolvedlen) __asm__ ("" "__realpath_chk") __attribute__ ((__nothrow__ , __leaf__))


                                                __attribute__ ((__warn_unused_result__))
     __attribute__((__warning__ ("second argument of realpath must be either NULL or at " "least PATH_MAX bytes long buffer")))
                                      ;

extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__gnu_inline__)) __attribute__ ((__artificial__)) __attribute__ ((__warn_unused_result__)) char *
__attribute__ ((__nothrow__ , __leaf__)) realpath (const char *__restrict __name, char *__restrict __resolved)
{
  size_t sz = __builtin_object_size (__resolved, 2 > 1);

  if (sz == (size_t) -1)
    return __realpath_alias (__name, __resolved);





  return __realpath_chk (__name, __resolved, sz);
}


extern int __ptsname_r_chk (int __fd, char *__buf, size_t __buflen,
       size_t __nreal) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2)))
    __attribute__ ((__access__ (__write_only__, 2, 3)));
extern int __ptsname_r_alias (int __fd, char *__buf, size_t __buflen) __asm__ ("" "ptsname_r") __attribute__ ((__nothrow__ , __leaf__))

     __attribute__ ((__nonnull__ (2))) __attribute__ ((__access__ (__write_only__, 2, 3)));
extern int __ptsname_r_chk_warn (int __fd, char *__buf, size_t __buflen, size_t __nreal) __asm__ ("" "__ptsname_r_chk") __attribute__ ((__nothrow__ , __leaf__))


     __attribute__ ((__nonnull__ (2))) __attribute__((__warning__ ("ptsname_r called with buflen bigger than " "size of buf")))
                   ;

extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__gnu_inline__)) __attribute__ ((__artificial__)) int
__attribute__ ((__nothrow__ , __leaf__)) ptsname_r (int __fd, char *__buf, size_t __buflen)
{
  return ((((__typeof (__buflen)) 0 < (__typeof (__buflen)) -1 || (__builtin_constant_p (__buflen) && (__buflen) > 0)) && __builtin_constant_p ((((long unsigned int) (__buflen)) <= (__builtin_object_size (__buf, 2 > 1)) / (sizeof (char)))) && (((long unsigned int) (__buflen)) <= (__builtin_object_size (__buf, 2 > 1)) / (sizeof (char)))) ? __ptsname_r_alias (__fd, __buf, __buflen) : ((((__typeof (__buflen)) 0 < (__typeof (__buflen)) -1 || (__builtin_constant_p (__buflen) && (__buflen) > 0)) && __builtin_constant_p ((((long unsigned int) (__buflen)) <= (__builtin_object_size (__buf, 2 > 1)) / (sizeof (char)))) && !(((long unsigned int) (__buflen)) <= (__builtin_object_size (__buf, 2 > 1)) / (sizeof (char)))) ? __ptsname_r_chk_warn (__fd, __buf, __buflen, __builtin_object_size (__buf, 2 > 1)) : __ptsname_r_chk (__fd, __buf, __buflen, __builtin_object_size (__buf, 2 > 1))))

                           ;
}


extern int __wctomb_chk (char *__s, wchar_t __wchar, size_t __buflen)
  __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__warn_unused_result__));
extern int __wctomb_alias (char *__s, wchar_t __wchar) __asm__ ("" "wctomb") __attribute__ ((__nothrow__ , __leaf__))
              __attribute__ ((__warn_unused_result__));

extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__gnu_inline__)) __attribute__ ((__artificial__)) __attribute__ ((__warn_unused_result__)) int
__attribute__ ((__nothrow__ , __leaf__)) wctomb (char *__s, wchar_t __wchar)
{







  if (__builtin_object_size (__s, 2 > 1) != (size_t) -1
      && 16 > __builtin_object_size (__s, 2 > 1))
    return __wctomb_chk (__s, __wchar, __builtin_object_size (__s, 2 > 1));
  return __wctomb_alias (__s, __wchar);
}


extern size_t __mbstowcs_chk (wchar_t *__restrict __dst,
         const char *__restrict __src,
         size_t __len, size_t __dstlen) __attribute__ ((__nothrow__ , __leaf__))
    __attribute__ ((__access__ (__write_only__, 1, 3))) __attribute__ ((__access__ (__read_only__, 2)));
extern size_t __mbstowcs_alias (wchar_t *__restrict __dst, const char *__restrict __src, size_t __len) __asm__ ("" "mbstowcs") __attribute__ ((__nothrow__ , __leaf__))



    __attribute__ ((__access__ (__write_only__, 1, 3))) __attribute__ ((__access__ (__read_only__, 2)));
extern size_t __mbstowcs_chk_warn (wchar_t *__restrict __dst, const char *__restrict __src, size_t __len, size_t __dstlen) __asm__ ("" "__mbstowcs_chk") __attribute__ ((__nothrow__ , __leaf__))



     __attribute__((__warning__ ("mbstowcs called with dst buffer smaller than len " "* sizeof (wchar_t)")))
                        ;

extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__gnu_inline__)) __attribute__ ((__artificial__)) size_t
__attribute__ ((__nothrow__ , __leaf__)) mbstowcs (wchar_t *__restrict __dst, const char *__restrict __src, size_t __len)

{
  return ((((__typeof (__len)) 0 < (__typeof (__len)) -1 || (__builtin_constant_p (__len) && (__len) > 0)) && __builtin_constant_p ((((long unsigned int) (__len)) <= (__builtin_object_size (__dst, 2 > 1)) / (sizeof (wchar_t)))) && (((long unsigned int) (__len)) <= (__builtin_object_size (__dst, 2 > 1)) / (sizeof (wchar_t)))) ? __mbstowcs_alias (__dst, __src, __len) : ((((__typeof (__len)) 0 < (__typeof (__len)) -1 || (__builtin_constant_p (__len) && (__len) > 0)) && __builtin_constant_p ((((long unsigned int) (__len)) <= (__builtin_object_size (__dst, 2 > 1)) / (sizeof (wchar_t)))) && !(((long unsigned int) (__len)) <= (__builtin_object_size (__dst, 2 > 1)) / (sizeof (wchar_t)))) ? __mbstowcs_chk_warn (__dst, __src, __len, (__builtin_object_size (__dst, 2 > 1)) / (sizeof (wchar_t))) : __mbstowcs_chk (__dst, __src, __len, (__builtin_object_size (__dst, 2 > 1)) / (sizeof (wchar_t)))))

                           ;
}


extern size_t __wcstombs_chk (char *__restrict __dst,
         const wchar_t *__restrict __src,
         size_t __len, size_t __dstlen) __attribute__ ((__nothrow__ , __leaf__))
  __attribute__ ((__access__ (__write_only__, 1, 3))) __attribute__ ((__access__ (__read_only__, 2)));
extern size_t __wcstombs_alias (char *__restrict __dst, const wchar_t *__restrict __src, size_t __len) __asm__ ("" "wcstombs") __attribute__ ((__nothrow__ , __leaf__))



  __attribute__ ((__access__ (__write_only__, 1, 3))) __attribute__ ((__access__ (__read_only__, 2)));
extern size_t __wcstombs_chk_warn (char *__restrict __dst, const wchar_t *__restrict __src, size_t __len, size_t __dstlen) __asm__ ("" "__wcstombs_chk") __attribute__ ((__nothrow__ , __leaf__))



     __attribute__((__warning__ ("wcstombs called with dst buffer smaller than len")));

extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__gnu_inline__)) __attribute__ ((__artificial__)) size_t
__attribute__ ((__nothrow__ , __leaf__)) wcstombs (char *__restrict __dst, const wchar_t *__restrict __src, size_t __len)

{
  return ((((__typeof (__len)) 0 < (__typeof (__len)) -1 || (__builtin_constant_p (__len) && (__len) > 0)) && __builtin_constant_p ((((long unsigned int) (__len)) <= (__builtin_object_size (__dst, 2 > 1)) / (sizeof (char)))) && (((long unsigned int) (__len)) <= (__builtin_object_size (__dst, 2 > 1)) / (sizeof (char)))) ? __wcstombs_alias (__dst, __src, __len) : ((((__typeof (__len)) 0 < (__typeof (__len)) -1 || (__builtin_constant_p (__len) && (__len) > 0)) && __builtin_constant_p ((((long unsigned int) (__len)) <= (__builtin_object_size (__dst, 2 > 1)) / (sizeof (char)))) && !(((long unsigned int) (__len)) <= (__builtin_object_size (__dst, 2 > 1)) / (sizeof (char)))) ? __wcstombs_chk_warn (__dst, __src, __len, __builtin_object_size (__dst, 2 > 1)) : __wcstombs_chk (__dst, __src, __len, __builtin_object_size (__dst, 2 > 1))))

                         ;
}
# 1028 "/usr/include/stdlib.h" 2 3 4








# 32 "/home/yangli/ysyx-workbench/nemu/include/common.h" 2







# 38 "/home/yangli/ysyx-workbench/nemu/include/common.h"
typedef uint64_t word_t;
typedef int64_t sword_t;


typedef word_t vaddr_t;
typedef uint32_t paddr_t;

typedef uint16_t ioaddr_t;

# 1 "/home/yangli/ysyx-workbench/nemu/include/debug.h" 1
# 19 "/home/yangli/ysyx-workbench/nemu/include/debug.h"
# 1 "/home/yangli/ysyx-workbench/nemu/include/common.h" 1
# 20 "/home/yangli/ysyx-workbench/nemu/include/debug.h" 2
# 1 "/usr/include/stdio.h" 1 3 4
# 27 "/usr/include/stdio.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/libc-header-start.h" 1 3 4
# 28 "/usr/include/stdio.h" 2 3 4





# 1 "/usr/lib/gcc/x86_64-linux-gnu/11/include/stddef.h" 1 3 4
# 34 "/usr/include/stdio.h" 2 3 4


# 1 "/usr/lib/gcc/x86_64-linux-gnu/11/include/stdarg.h" 1 3 4
# 40 "/usr/lib/gcc/x86_64-linux-gnu/11/include/stdarg.h" 3 4

# 40 "/usr/lib/gcc/x86_64-linux-gnu/11/include/stdarg.h" 3 4
typedef __builtin_va_list __gnuc_va_list;
# 37 "/usr/include/stdio.h" 2 3 4


# 1 "/usr/include/x86_64-linux-gnu/bits/types/__fpos_t.h" 1 3 4




# 1 "/usr/include/x86_64-linux-gnu/bits/types/__mbstate_t.h" 1 3 4
# 13 "/usr/include/x86_64-linux-gnu/bits/types/__mbstate_t.h" 3 4
typedef struct
{
  int __count;
  union
  {
    unsigned int __wch;
    char __wchb[4];
  } __value;
} __mbstate_t;
# 6 "/usr/include/x86_64-linux-gnu/bits/types/__fpos_t.h" 2 3 4




typedef struct _G_fpos_t
{
  __off_t __pos;
  __mbstate_t __state;
} __fpos_t;
# 40 "/usr/include/stdio.h" 2 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/types/__fpos64_t.h" 1 3 4
# 10 "/usr/include/x86_64-linux-gnu/bits/types/__fpos64_t.h" 3 4
typedef struct _G_fpos64_t
{
  __off64_t __pos;
  __mbstate_t __state;
} __fpos64_t;
# 41 "/usr/include/stdio.h" 2 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/types/__FILE.h" 1 3 4



struct _IO_FILE;
typedef struct _IO_FILE __FILE;
# 42 "/usr/include/stdio.h" 2 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/types/FILE.h" 1 3 4



struct _IO_FILE;


typedef struct _IO_FILE FILE;
# 43 "/usr/include/stdio.h" 2 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/types/struct_FILE.h" 1 3 4
# 35 "/usr/include/x86_64-linux-gnu/bits/types/struct_FILE.h" 3 4
struct _IO_FILE;
struct _IO_marker;
struct _IO_codecvt;
struct _IO_wide_data;




typedef void _IO_lock_t;





struct _IO_FILE
{
  int _flags;


  char *_IO_read_ptr;
  char *_IO_read_end;
  char *_IO_read_base;
  char *_IO_write_base;
  char *_IO_write_ptr;
  char *_IO_write_end;
  char *_IO_buf_base;
  char *_IO_buf_end;


  char *_IO_save_base;
  char *_IO_backup_base;
  char *_IO_save_end;

  struct _IO_marker *_markers;

  struct _IO_FILE *_chain;

  int _fileno;
  int _flags2;
  __off_t _old_offset;


  unsigned short _cur_column;
  signed char _vtable_offset;
  char _shortbuf[1];

  _IO_lock_t *_lock;







  __off64_t _offset;

  struct _IO_codecvt *_codecvt;
  struct _IO_wide_data *_wide_data;
  struct _IO_FILE *_freeres_list;
  void *_freeres_buf;
  size_t __pad5;
  int _mode;

  char _unused2[15 * sizeof (int) - 4 * sizeof (void *) - sizeof (size_t)];
};
# 44 "/usr/include/stdio.h" 2 3 4
# 52 "/usr/include/stdio.h" 3 4
typedef __gnuc_va_list va_list;
# 84 "/usr/include/stdio.h" 3 4
typedef __fpos_t fpos_t;
# 133 "/usr/include/stdio.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/stdio_lim.h" 1 3 4
# 134 "/usr/include/stdio.h" 2 3 4
# 143 "/usr/include/stdio.h" 3 4
extern FILE *stdin;
extern FILE *stdout;
extern FILE *stderr;






extern int remove (const char *__filename) __attribute__ ((__nothrow__ , __leaf__));

extern int rename (const char *__old, const char *__new) __attribute__ ((__nothrow__ , __leaf__));



extern int renameat (int __oldfd, const char *__old, int __newfd,
       const char *__new) __attribute__ ((__nothrow__ , __leaf__));
# 178 "/usr/include/stdio.h" 3 4
extern int fclose (FILE *__stream);
# 188 "/usr/include/stdio.h" 3 4
extern FILE *tmpfile (void)
  __attribute__ ((__malloc__)) __attribute__ ((__malloc__ (fclose, 1))) __attribute__ ((__warn_unused_result__));
# 205 "/usr/include/stdio.h" 3 4
extern char *tmpnam (char[20]) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__warn_unused_result__));




extern char *tmpnam_r (char __s[20]) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__warn_unused_result__));
# 222 "/usr/include/stdio.h" 3 4
extern char *tempnam (const char *__dir, const char *__pfx)
   __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__malloc__)) __attribute__ ((__warn_unused_result__)) __attribute__ ((__malloc__ (__builtin_free, 1)));






extern int fflush (FILE *__stream);
# 239 "/usr/include/stdio.h" 3 4
extern int fflush_unlocked (FILE *__stream);
# 258 "/usr/include/stdio.h" 3 4
extern FILE *fopen (const char *__restrict __filename,
      const char *__restrict __modes)
  __attribute__ ((__malloc__)) __attribute__ ((__malloc__ (fclose, 1))) __attribute__ ((__warn_unused_result__));




extern FILE *freopen (const char *__restrict __filename,
        const char *__restrict __modes,
        FILE *__restrict __stream) __attribute__ ((__warn_unused_result__));
# 293 "/usr/include/stdio.h" 3 4
extern FILE *fdopen (int __fd, const char *__modes) __attribute__ ((__nothrow__ , __leaf__))
  __attribute__ ((__malloc__)) __attribute__ ((__malloc__ (fclose, 1))) __attribute__ ((__warn_unused_result__));
# 308 "/usr/include/stdio.h" 3 4
extern FILE *fmemopen (void *__s, size_t __len, const char *__modes)
  __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__malloc__)) __attribute__ ((__malloc__ (fclose, 1))) __attribute__ ((__warn_unused_result__));




extern FILE *open_memstream (char **__bufloc, size_t *__sizeloc) __attribute__ ((__nothrow__ , __leaf__))
  __attribute__ ((__malloc__)) __attribute__ ((__malloc__ (fclose, 1))) __attribute__ ((__warn_unused_result__));
# 328 "/usr/include/stdio.h" 3 4
extern void setbuf (FILE *__restrict __stream, char *__restrict __buf) __attribute__ ((__nothrow__ , __leaf__));



extern int setvbuf (FILE *__restrict __stream, char *__restrict __buf,
      int __modes, size_t __n) __attribute__ ((__nothrow__ , __leaf__));




extern void setbuffer (FILE *__restrict __stream, char *__restrict __buf,
         size_t __size) __attribute__ ((__nothrow__ , __leaf__));


extern void setlinebuf (FILE *__stream) __attribute__ ((__nothrow__ , __leaf__));







extern int fprintf (FILE *__restrict __stream,
      const char *__restrict __format, ...);




extern int printf (const char *__restrict __format, ...);

extern int sprintf (char *__restrict __s,
      const char *__restrict __format, ...) __attribute__ ((__nothrow__));





extern int vfprintf (FILE *__restrict __s, const char *__restrict __format,
       __gnuc_va_list __arg);




extern int vprintf (const char *__restrict __format, __gnuc_va_list __arg);

extern int vsprintf (char *__restrict __s, const char *__restrict __format,
       __gnuc_va_list __arg) __attribute__ ((__nothrow__));



extern int snprintf (char *__restrict __s, size_t __maxlen,
       const char *__restrict __format, ...)
     __attribute__ ((__nothrow__)) __attribute__ ((__format__ (__printf__, 3, 4)));

extern int vsnprintf (char *__restrict __s, size_t __maxlen,
        const char *__restrict __format, __gnuc_va_list __arg)
     __attribute__ ((__nothrow__)) __attribute__ ((__format__ (__printf__, 3, 0)));
# 403 "/usr/include/stdio.h" 3 4
extern int vdprintf (int __fd, const char *__restrict __fmt,
       __gnuc_va_list __arg)
     __attribute__ ((__format__ (__printf__, 2, 0)));
extern int dprintf (int __fd, const char *__restrict __fmt, ...)
     __attribute__ ((__format__ (__printf__, 2, 3)));







extern int fscanf (FILE *__restrict __stream,
     const char *__restrict __format, ...) __attribute__ ((__warn_unused_result__));




extern int scanf (const char *__restrict __format, ...) __attribute__ ((__warn_unused_result__));

extern int sscanf (const char *__restrict __s,
     const char *__restrict __format, ...) __attribute__ ((__nothrow__ , __leaf__));
# 434 "/usr/include/stdio.h" 3 4
extern int fscanf (FILE *__restrict __stream, const char *__restrict __format, ...) __asm__ ("" "__isoc99_fscanf")

                          __attribute__ ((__warn_unused_result__));
extern int scanf (const char *__restrict __format, ...) __asm__ ("" "__isoc99_scanf")
                         __attribute__ ((__warn_unused_result__));
extern int sscanf (const char *__restrict __s, const char *__restrict __format, ...) __asm__ ("" "__isoc99_sscanf") __attribute__ ((__nothrow__ , __leaf__))

                      ;
# 459 "/usr/include/stdio.h" 3 4
extern int vfscanf (FILE *__restrict __s, const char *__restrict __format,
      __gnuc_va_list __arg)
     __attribute__ ((__format__ (__scanf__, 2, 0))) __attribute__ ((__warn_unused_result__));





extern int vscanf (const char *__restrict __format, __gnuc_va_list __arg)
     __attribute__ ((__format__ (__scanf__, 1, 0))) __attribute__ ((__warn_unused_result__));


extern int vsscanf (const char *__restrict __s,
      const char *__restrict __format, __gnuc_va_list __arg)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__format__ (__scanf__, 2, 0)));





extern int vfscanf (FILE *__restrict __s, const char *__restrict __format, __gnuc_va_list __arg) __asm__ ("" "__isoc99_vfscanf")



     __attribute__ ((__format__ (__scanf__, 2, 0))) __attribute__ ((__warn_unused_result__));
extern int vscanf (const char *__restrict __format, __gnuc_va_list __arg) __asm__ ("" "__isoc99_vscanf")

     __attribute__ ((__format__ (__scanf__, 1, 0))) __attribute__ ((__warn_unused_result__));
extern int vsscanf (const char *__restrict __s, const char *__restrict __format, __gnuc_va_list __arg) __asm__ ("" "__isoc99_vsscanf") __attribute__ ((__nothrow__ , __leaf__))



     __attribute__ ((__format__ (__scanf__, 2, 0)));
# 513 "/usr/include/stdio.h" 3 4
extern int fgetc (FILE *__stream);
extern int getc (FILE *__stream);





extern int getchar (void);






extern int getc_unlocked (FILE *__stream);
extern int getchar_unlocked (void);
# 538 "/usr/include/stdio.h" 3 4
extern int fgetc_unlocked (FILE *__stream);
# 549 "/usr/include/stdio.h" 3 4
extern int fputc (int __c, FILE *__stream);
extern int putc (int __c, FILE *__stream);





extern int putchar (int __c);
# 565 "/usr/include/stdio.h" 3 4
extern int fputc_unlocked (int __c, FILE *__stream);







extern int putc_unlocked (int __c, FILE *__stream);
extern int putchar_unlocked (int __c);






extern int getw (FILE *__stream);


extern int putw (int __w, FILE *__stream);







extern char *fgets (char *__restrict __s, int __n, FILE *__restrict __stream)
     __attribute__ ((__warn_unused_result__)) __attribute__ ((__access__ (__write_only__, 1, 2)));
# 632 "/usr/include/stdio.h" 3 4
extern __ssize_t __getdelim (char **__restrict __lineptr,
                             size_t *__restrict __n, int __delimiter,
                             FILE *__restrict __stream) __attribute__ ((__warn_unused_result__));
extern __ssize_t getdelim (char **__restrict __lineptr,
                           size_t *__restrict __n, int __delimiter,
                           FILE *__restrict __stream) __attribute__ ((__warn_unused_result__));







extern __ssize_t getline (char **__restrict __lineptr,
                          size_t *__restrict __n,
                          FILE *__restrict __stream) __attribute__ ((__warn_unused_result__));







extern int fputs (const char *__restrict __s, FILE *__restrict __stream);





extern int puts (const char *__s);






extern int ungetc (int __c, FILE *__stream);






extern size_t fread (void *__restrict __ptr, size_t __size,
       size_t __n, FILE *__restrict __stream) __attribute__ ((__warn_unused_result__));




extern size_t fwrite (const void *__restrict __ptr, size_t __size,
        size_t __n, FILE *__restrict __s);
# 702 "/usr/include/stdio.h" 3 4
extern size_t fread_unlocked (void *__restrict __ptr, size_t __size,
         size_t __n, FILE *__restrict __stream) __attribute__ ((__warn_unused_result__));
extern size_t fwrite_unlocked (const void *__restrict __ptr, size_t __size,
          size_t __n, FILE *__restrict __stream);







extern int fseek (FILE *__stream, long int __off, int __whence);




extern long int ftell (FILE *__stream) __attribute__ ((__warn_unused_result__));




extern void rewind (FILE *__stream);
# 736 "/usr/include/stdio.h" 3 4
extern int fseeko (FILE *__stream, __off_t __off, int __whence);




extern __off_t ftello (FILE *__stream) __attribute__ ((__warn_unused_result__));
# 760 "/usr/include/stdio.h" 3 4
extern int fgetpos (FILE *__restrict __stream, fpos_t *__restrict __pos);




extern int fsetpos (FILE *__stream, const fpos_t *__pos);
# 786 "/usr/include/stdio.h" 3 4
extern void clearerr (FILE *__stream) __attribute__ ((__nothrow__ , __leaf__));

extern int feof (FILE *__stream) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__warn_unused_result__));

extern int ferror (FILE *__stream) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__warn_unused_result__));



extern void clearerr_unlocked (FILE *__stream) __attribute__ ((__nothrow__ , __leaf__));
extern int feof_unlocked (FILE *__stream) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__warn_unused_result__));
extern int ferror_unlocked (FILE *__stream) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__warn_unused_result__));







extern void perror (const char *__s);




extern int fileno (FILE *__stream) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__warn_unused_result__));




extern int fileno_unlocked (FILE *__stream) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__warn_unused_result__));
# 823 "/usr/include/stdio.h" 3 4
extern int pclose (FILE *__stream);





extern FILE *popen (const char *__command, const char *__modes)
  __attribute__ ((__malloc__)) __attribute__ ((__malloc__ (pclose, 1))) __attribute__ ((__warn_unused_result__));






extern char *ctermid (char *__s) __attribute__ ((__nothrow__ , __leaf__))
  __attribute__ ((__access__ (__write_only__, 1)));
# 867 "/usr/include/stdio.h" 3 4
extern void flockfile (FILE *__stream) __attribute__ ((__nothrow__ , __leaf__));



extern int ftrylockfile (FILE *__stream) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__warn_unused_result__));


extern void funlockfile (FILE *__stream) __attribute__ ((__nothrow__ , __leaf__));
# 885 "/usr/include/stdio.h" 3 4
extern int __uflow (FILE *);
extern int __overflow (FILE *, int);




# 1 "/usr/include/x86_64-linux-gnu/bits/stdio.h" 1 3 4
# 46 "/usr/include/x86_64-linux-gnu/bits/stdio.h" 3 4
extern __inline __attribute__ ((__gnu_inline__)) int
getchar (void)
{
  return getc (stdin);
}




extern __inline __attribute__ ((__gnu_inline__)) int
fgetc_unlocked (FILE *__fp)
{
  return (__builtin_expect (((__fp)->_IO_read_ptr >= (__fp)->_IO_read_end), 0) ? __uflow (__fp) : *(unsigned char *) (__fp)->_IO_read_ptr++);
}





extern __inline __attribute__ ((__gnu_inline__)) int
getc_unlocked (FILE *__fp)
{
  return (__builtin_expect (((__fp)->_IO_read_ptr >= (__fp)->_IO_read_end), 0) ? __uflow (__fp) : *(unsigned char *) (__fp)->_IO_read_ptr++);
}


extern __inline __attribute__ ((__gnu_inline__)) int
getchar_unlocked (void)
{
  return (__builtin_expect (((stdin)->_IO_read_ptr >= (stdin)->_IO_read_end), 0) ? __uflow (stdin) : *(unsigned char *) (stdin)->_IO_read_ptr++);
}




extern __inline __attribute__ ((__gnu_inline__)) int
putchar (int __c)
{
  return putc (__c, stdout);
}




extern __inline __attribute__ ((__gnu_inline__)) int
fputc_unlocked (int __c, FILE *__stream)
{
  return (__builtin_expect (((__stream)->_IO_write_ptr >= (__stream)->_IO_write_end), 0) ? __overflow (__stream, (unsigned char) (__c)) : (unsigned char) (*(__stream)->_IO_write_ptr++ = (__c)));
}





extern __inline __attribute__ ((__gnu_inline__)) int
putc_unlocked (int __c, FILE *__stream)
{
  return (__builtin_expect (((__stream)->_IO_write_ptr >= (__stream)->_IO_write_end), 0) ? __overflow (__stream, (unsigned char) (__c)) : (unsigned char) (*(__stream)->_IO_write_ptr++ = (__c)));
}


extern __inline __attribute__ ((__gnu_inline__)) int
putchar_unlocked (int __c)
{
  return (__builtin_expect (((stdout)->_IO_write_ptr >= (stdout)->_IO_write_end), 0) ? __overflow (stdout, (unsigned char) (__c)) : (unsigned char) (*(stdout)->_IO_write_ptr++ = (__c)));
}
# 127 "/usr/include/x86_64-linux-gnu/bits/stdio.h" 3 4
extern __inline __attribute__ ((__gnu_inline__)) int
__attribute__ ((__nothrow__ , __leaf__)) feof_unlocked (FILE *__stream)
{
  return (((__stream)->_flags & 0x0010) != 0);
}


extern __inline __attribute__ ((__gnu_inline__)) int
__attribute__ ((__nothrow__ , __leaf__)) ferror_unlocked (FILE *__stream)
{
  return (((__stream)->_flags & 0x0020) != 0);
}
# 892 "/usr/include/stdio.h" 2 3 4


# 1 "/usr/include/x86_64-linux-gnu/bits/stdio2.h" 1 3 4
# 26 "/usr/include/x86_64-linux-gnu/bits/stdio2.h" 3 4
extern int __sprintf_chk (char *__restrict __s, int __flag, size_t __slen,
     const char *__restrict __format, ...) __attribute__ ((__nothrow__ , __leaf__))
    __attribute__ ((__access__ (__write_only__, 1, 3)));
extern int __vsprintf_chk (char *__restrict __s, int __flag, size_t __slen,
      const char *__restrict __format,
      __gnuc_va_list __ap) __attribute__ ((__nothrow__ , __leaf__))
    __attribute__ ((__access__ (__write_only__, 1, 3)));


extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__gnu_inline__)) __attribute__ ((__artificial__)) int
__attribute__ ((__nothrow__ , __leaf__)) sprintf (char *__restrict __s, const char *__restrict __fmt, ...)
{
  return __builtin___sprintf_chk (__s, 2 - 1,
      __builtin_object_size (__s, 2 > 1), __fmt,
      __builtin_va_arg_pack ());
}






extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__gnu_inline__)) __attribute__ ((__artificial__)) int
__attribute__ ((__nothrow__ , __leaf__)) vsprintf (char *__restrict __s, const char *__restrict __fmt, __gnuc_va_list __ap)

{
  return __builtin___vsprintf_chk (__s, 2 - 1,
       __builtin_object_size (__s, 2 > 1), __fmt, __ap);
}



extern int __snprintf_chk (char *__restrict __s, size_t __n, int __flag,
      size_t __slen, const char *__restrict __format,
      ...) __attribute__ ((__nothrow__ , __leaf__))
    __attribute__ ((__access__ (__write_only__, 1, 2)));
extern int __vsnprintf_chk (char *__restrict __s, size_t __n, int __flag,
       size_t __slen, const char *__restrict __format,
       __gnuc_va_list __ap) __attribute__ ((__nothrow__ , __leaf__));


extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__gnu_inline__)) __attribute__ ((__artificial__)) int
__attribute__ ((__nothrow__ , __leaf__)) snprintf (char *__restrict __s, size_t __n, const char *__restrict __fmt, ...)

{
  return __builtin___snprintf_chk (__s, __n, 2 - 1,
       __builtin_object_size (__s, 2 > 1), __fmt,
       __builtin_va_arg_pack ());
}






extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__gnu_inline__)) __attribute__ ((__artificial__)) int
__attribute__ ((__nothrow__ , __leaf__)) vsnprintf (char *__restrict __s, size_t __n, const char *__restrict __fmt, __gnuc_va_list __ap)

{
  return __builtin___vsnprintf_chk (__s, __n, 2 - 1,
        __builtin_object_size (__s, 2 > 1), __fmt, __ap);
}





extern int __fprintf_chk (FILE *__restrict __stream, int __flag,
     const char *__restrict __format, ...);
extern int __printf_chk (int __flag, const char *__restrict __format, ...);
extern int __vfprintf_chk (FILE *__restrict __stream, int __flag,
      const char *__restrict __format, __gnuc_va_list __ap);
extern int __vprintf_chk (int __flag, const char *__restrict __format,
     __gnuc_va_list __ap);


extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__gnu_inline__)) __attribute__ ((__artificial__)) int
fprintf (FILE *__restrict __stream, const char *__restrict __fmt, ...)
{
  return __fprintf_chk (__stream, 2 - 1, __fmt,
   __builtin_va_arg_pack ());
}

extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__gnu_inline__)) __attribute__ ((__artificial__)) int
printf (const char *__restrict __fmt, ...)
{
  return __printf_chk (2 - 1, __fmt, __builtin_va_arg_pack ());
}







extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__gnu_inline__)) __attribute__ ((__artificial__)) int
vprintf (const char *__restrict __fmt, __gnuc_va_list __ap)
{

  return __vfprintf_chk (stdout, 2 - 1, __fmt, __ap);



}

extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__gnu_inline__)) __attribute__ ((__artificial__)) int
vfprintf (FILE *__restrict __stream,
   const char *__restrict __fmt, __gnuc_va_list __ap)
{
  return __vfprintf_chk (__stream, 2 - 1, __fmt, __ap);
}


extern int __dprintf_chk (int __fd, int __flag, const char *__restrict __fmt,
     ...) __attribute__ ((__format__ (__printf__, 3, 4)));
extern int __vdprintf_chk (int __fd, int __flag,
      const char *__restrict __fmt, __gnuc_va_list __arg)
     __attribute__ ((__format__ (__printf__, 3, 0)));


extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__gnu_inline__)) __attribute__ ((__artificial__)) int
dprintf (int __fd, const char *__restrict __fmt, ...)
{
  return __dprintf_chk (__fd, 2 - 1, __fmt,
   __builtin_va_arg_pack ());
}





extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__gnu_inline__)) __attribute__ ((__artificial__)) int
vdprintf (int __fd, const char *__restrict __fmt, __gnuc_va_list __ap)
{
  return __vdprintf_chk (__fd, 2 - 1, __fmt, __ap);
}
# 248 "/usr/include/x86_64-linux-gnu/bits/stdio2.h" 3 4
extern char *__fgets_chk (char *__restrict __s, size_t __size, int __n,
     FILE *__restrict __stream)
    __attribute__ ((__warn_unused_result__)) __attribute__ ((__access__ (__write_only__, 1, 3)));
extern char *__fgets_alias (char *__restrict __s, int __n, FILE *__restrict __stream) __asm__ ("" "fgets")


    __attribute__ ((__warn_unused_result__)) __attribute__ ((__access__ (__write_only__, 1, 2)));
extern char *__fgets_chk_warn (char *__restrict __s, size_t __size, int __n, FILE *__restrict __stream) __asm__ ("" "__fgets_chk")


     __attribute__ ((__warn_unused_result__)) __attribute__((__warning__ ("fgets called with bigger size than length " "of destination buffer")))
                                 ;

extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__gnu_inline__)) __attribute__ ((__artificial__)) __attribute__ ((__warn_unused_result__)) __attribute__ ((__access__ (__write_only__, 1, 2))) char *
fgets (char *__restrict __s, int __n, FILE *__restrict __stream)
{
  size_t sz = __builtin_object_size (__s, 2 > 1);
  if ((((__typeof (__n)) 0 < (__typeof (__n)) -1 || (__builtin_constant_p (__n) && (__n) > 0)) && __builtin_constant_p ((((long unsigned int) (__n)) <= (sz) / (sizeof (char)))) && (((long unsigned int) (__n)) <= (sz) / (sizeof (char)))))
    return __fgets_alias (__s, __n, __stream);
  if ((((__typeof (__n)) 0 < (__typeof (__n)) -1 || (__builtin_constant_p (__n) && (__n) > 0)) && __builtin_constant_p ((((long unsigned int) (__n)) <= (sz) / (sizeof (char)))) && !(((long unsigned int) (__n)) <= (sz) / (sizeof (char)))))
    return __fgets_chk_warn (__s, sz, __n, __stream);
  return __fgets_chk (__s, sz, __n, __stream);
}

extern size_t __fread_chk (void *__restrict __ptr, size_t __ptrlen,
      size_t __size, size_t __n,
      FILE *__restrict __stream) __attribute__ ((__warn_unused_result__));
extern size_t __fread_alias (void *__restrict __ptr, size_t __size, size_t __n, FILE *__restrict __stream) __asm__ ("" "fread")


            __attribute__ ((__warn_unused_result__));
extern size_t __fread_chk_warn (void *__restrict __ptr, size_t __ptrlen, size_t __size, size_t __n, FILE *__restrict __stream) __asm__ ("" "__fread_chk")




     __attribute__ ((__warn_unused_result__)) __attribute__((__warning__ ("fread called with bigger size * nmemb than length " "of destination buffer")))
                                 ;

extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__gnu_inline__)) __attribute__ ((__artificial__)) __attribute__ ((__warn_unused_result__)) size_t
fread (void *__restrict __ptr, size_t __size, size_t __n,
       FILE *__restrict __stream)
{
  size_t sz = __builtin_object_size (__ptr, 0);
  if ((((__typeof (__n)) 0 < (__typeof (__n)) -1 || (__builtin_constant_p (__n) && (__n) > 0)) && __builtin_constant_p ((((long unsigned int) (__n)) <= (sz) / (__size))) && (((long unsigned int) (__n)) <= (sz) / (__size))))
    return __fread_alias (__ptr, __size, __n, __stream);
  if ((((__typeof (__n)) 0 < (__typeof (__n)) -1 || (__builtin_constant_p (__n) && (__n) > 0)) && __builtin_constant_p ((((long unsigned int) (__n)) <= (sz) / (__size))) && !(((long unsigned int) (__n)) <= (sz) / (__size))))
    return __fread_chk_warn (__ptr, sz, __size, __n, __stream);
  return __fread_chk (__ptr, sz, __size, __n, __stream);
}
# 327 "/usr/include/x86_64-linux-gnu/bits/stdio2.h" 3 4
extern size_t __fread_unlocked_chk (void *__restrict __ptr, size_t __ptrlen,
        size_t __size, size_t __n,
        FILE *__restrict __stream) __attribute__ ((__warn_unused_result__));
extern size_t __fread_unlocked_alias (void *__restrict __ptr, size_t __size, size_t __n, FILE *__restrict __stream) __asm__ ("" "fread_unlocked")


                     __attribute__ ((__warn_unused_result__));
extern size_t __fread_unlocked_chk_warn (void *__restrict __ptr, size_t __ptrlen, size_t __size, size_t __n, FILE *__restrict __stream) __asm__ ("" "__fread_unlocked_chk")




     __attribute__ ((__warn_unused_result__)) __attribute__((__warning__ ("fread_unlocked called with bigger size * nmemb than " "length of destination buffer")))
                                        ;

extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__gnu_inline__)) __attribute__ ((__artificial__)) __attribute__ ((__warn_unused_result__)) size_t
fread_unlocked (void *__restrict __ptr, size_t __size, size_t __n,
  FILE *__restrict __stream)
{
  size_t sz = __builtin_object_size (__ptr, 0);
  if ((((__typeof (__n)) 0 < (__typeof (__n)) -1 || (__builtin_constant_p (__n) && (__n) > 0)) && __builtin_constant_p ((((long unsigned int) (__n)) <= (sz) / (__size))) && (((long unsigned int) (__n)) <= (sz) / (__size))))
    {

      if (__builtin_constant_p (__size)
   && __builtin_constant_p (__n)
   && (__size | __n) < (((size_t) 1) << (8 * sizeof (size_t) / 2))
   && __size * __n <= 8)
 {
   size_t __cnt = __size * __n;
   char *__cptr = (char *) __ptr;
   if (__cnt == 0)
     return 0;

   for (; __cnt > 0; --__cnt)
     {
       int __c = getc_unlocked (__stream);
       if (__c == (-1))
  break;
       *__cptr++ = __c;
     }
   return (__cptr - (char *) __ptr) / __size;
 }

      return __fread_unlocked_alias (__ptr, __size, __n, __stream);
    }
  if ((((__typeof (__n)) 0 < (__typeof (__n)) -1 || (__builtin_constant_p (__n) && (__n) > 0)) && __builtin_constant_p ((((long unsigned int) (__n)) <= (sz) / (__size))) && !(((long unsigned int) (__n)) <= (sz) / (__size))))
    return __fread_unlocked_chk_warn (__ptr, sz, __size, __n, __stream);
  return __fread_unlocked_chk (__ptr, sz, __size, __n, __stream);

}
# 895 "/usr/include/stdio.h" 2 3 4








# 21 "/home/yangli/ysyx-workbench/nemu/include/debug.h" 2
# 1 "/home/yangli/ysyx-workbench/nemu/include/utils.h" 1
# 23 "/home/yangli/ysyx-workbench/nemu/include/utils.h"

# 23 "/home/yangli/ysyx-workbench/nemu/include/utils.h"
enum { NEMU_RUNNING, NEMU_STOP, NEMU_END, NEMU_ABORT, NEMU_QUIT };

typedef struct {
  int state;
  vaddr_t halt_pc;
  uint32_t halt_ret;
} NEMUState;

extern NEMUState nemu_state;



uint64_t get_time();
# 22 "/home/yangli/ysyx-workbench/nemu/include/debug.h" 2
# 48 "/home/yangli/ysyx-workbench/nemu/include/common.h" 2
# 20 "src/isa/riscv64/local-include/reg.h" 2

static inline int check_reg_idx(int idx) {
  
# 22 "src/isa/riscv64/local-include/reg.h" 3 4
 ((void) sizeof ((
# 22 "src/isa/riscv64/local-include/reg.h"
 idx >= 0 && idx < 32
# 22 "src/isa/riscv64/local-include/reg.h" 3 4
 ) ? 1 : 0), __extension__ ({ if (
# 22 "src/isa/riscv64/local-include/reg.h"
 idx >= 0 && idx < 32
# 22 "src/isa/riscv64/local-include/reg.h" 3 4
 ) ; else __assert_fail (
# 22 "src/isa/riscv64/local-include/reg.h"
 "idx >= 0 && idx < 32"
# 22 "src/isa/riscv64/local-include/reg.h" 3 4
 , "src/isa/riscv64/local-include/reg.h", 22, __extension__ __PRETTY_FUNCTION__); }))
# 22 "src/isa/riscv64/local-include/reg.h"
                                                     ;
  return idx;
}



static inline const char* reg_name(int idx, int width) {
  extern const char* regs[];
  return regs[check_reg_idx(idx)];
}
# 17 "src/isa/riscv64/inst.c" 2
# 1 "/home/yangli/ysyx-workbench/nemu/include/cpu/cpu.h" 1
# 21 "/home/yangli/ysyx-workbench/nemu/include/cpu/cpu.h"
void cpu_exec(uint64_t n);

void set_nemu_state(int state, vaddr_t pc, int halt_ret);
void invalid_inst(vaddr_t thispc);
# 18 "src/isa/riscv64/inst.c" 2
# 1 "/home/yangli/ysyx-workbench/nemu/include/cpu/ifetch.h" 1
# 18 "/home/yangli/ysyx-workbench/nemu/include/cpu/ifetch.h"
# 1 "/home/yangli/ysyx-workbench/nemu/include/memory/vaddr.h" 1
# 21 "/home/yangli/ysyx-workbench/nemu/include/memory/vaddr.h"
word_t vaddr_ifetch(vaddr_t addr, int len);
word_t vaddr_read(vaddr_t addr, int len);
void vaddr_write(vaddr_t addr, int len, word_t data);
# 19 "/home/yangli/ysyx-workbench/nemu/include/cpu/ifetch.h" 2

static inline uint32_t inst_fetch(vaddr_t *pc, int len) {
  uint32_t inst = vaddr_ifetch(*pc, len);
  (*pc) += len;
  return inst;
}
# 19 "src/isa/riscv64/inst.c" 2
# 1 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h" 1
# 19 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h"
# 1 "/home/yangli/ysyx-workbench/nemu/include/isa.h" 1
# 20 "/home/yangli/ysyx-workbench/nemu/include/isa.h"
# 1 "/home/yangli/ysyx-workbench/nemu/src/isa/riscv64/include/isa-def.h" 1
# 21 "/home/yangli/ysyx-workbench/nemu/src/isa/riscv64/include/isa-def.h"
typedef struct {
  word_t gpr[32];
  vaddr_t pc;
} riscv64_CPU_state;


typedef struct {
  union {
    uint32_t val;
  } inst;
} riscv64_ISADecodeInfo;
# 21 "/home/yangli/ysyx-workbench/nemu/include/isa.h" 2



typedef riscv64_CPU_state CPU_state;
typedef riscv64_ISADecodeInfo ISADecodeInfo;


extern char isa_logo[];
void init_isa();


extern CPU_state cpu;
void isa_reg_display();
word_t isa_reg_str2val(const char *name, 
# 34 "/home/yangli/ysyx-workbench/nemu/include/isa.h" 3 4
                                        _Bool 
# 34 "/home/yangli/ysyx-workbench/nemu/include/isa.h"
                                             *success);


struct Decode;
int isa_exec_once(struct Decode *s);


enum { MMU_DIRECT, MMU_TRANSLATE, MMU_FAIL };
enum { MEM_TYPE_IFETCH, MEM_TYPE_READ, MEM_TYPE_WRITE };
enum { MEM_RET_OK, MEM_RET_FAIL, MEM_RET_CROSS_PAGE };



paddr_t isa_mmu_translate(vaddr_t vaddr, int len, int type);


vaddr_t isa_raise_intr(word_t NO, vaddr_t epc);

word_t isa_query_intr();



# 55 "/home/yangli/ysyx-workbench/nemu/include/isa.h" 3 4
_Bool 
# 55 "/home/yangli/ysyx-workbench/nemu/include/isa.h"
    isa_difftest_checkregs(CPU_state *ref_r, vaddr_t pc);
void isa_difftest_attach();
# 20 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h" 2

typedef struct Decode {
  vaddr_t pc;
  vaddr_t snpc;
  vaddr_t dnpc;
  ISADecodeInfo isa;
  char logbuf[128];
} Decode;


__attribute__((always_inline))
static inline void pattern_decode(const char *str, int len,
    uint64_t *key, uint64_t *mask, uint64_t *shift) {
  uint64_t __key = 0, __mask = 0, __shift = 0;
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h"
  if ((0) >= len) goto finish; else { char c = str[0]; if (c != ' ') { do { if (!(c == '0' || c == '1' || c == '?')) { (fflush(
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h" 3 4
 stdout
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h"
 ), fprintf(
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h" 3 4
 stderr
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h"
 , "\33[1;31m" "invalid character '%c' in pattern string" "\33[0m" "\n", c)); extern FILE* log_fp; fflush(log_fp); extern void assert_fail_msg(); assert_fail_msg(); 
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h" 3 4
 ((void) sizeof ((
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h"
 c == '0' || c == '1' || c == '?'
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h" 3 4
 ) ? 1 : 0), __extension__ ({ if (
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h"
 c == '0' || c == '1' || c == '?'
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h" 3 4
 ) ; else __assert_fail (
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h"
 "c == '0' || c == '1' || c == '?'"
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h" 3 4
 , "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h", 53, __extension__ __PRETTY_FUNCTION__); }))
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h"
 ; } } while (0); __key = (__key << 1) | (c == '1' ? 1 : 0); __mask = (__mask << 1) | (c == '?' ? 0 : 1); __shift = (c == '?' ? __shift + 1 : 0); } }; if (((0) + 1) >= len) goto finish; else { char c = str[(0) + 1]; if (c != ' ') { do { if (!(c == '0' || c == '1' || c == '?')) { (fflush(
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h" 3 4
 stdout
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h"
 ), fprintf(
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h" 3 4
 stderr
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h"
 , "\33[1;31m" "invalid character '%c' in pattern string" "\33[0m" "\n", c)); extern FILE* log_fp; fflush(log_fp); extern void assert_fail_msg(); assert_fail_msg(); 
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h" 3 4
 ((void) sizeof ((
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h"
 c == '0' || c == '1' || c == '?'
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h" 3 4
 ) ? 1 : 0), __extension__ ({ if (
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h"
 c == '0' || c == '1' || c == '?'
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h" 3 4
 ) ; else __assert_fail (
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h"
 "c == '0' || c == '1' || c == '?'"
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h" 3 4
 , "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h", 53, __extension__ __PRETTY_FUNCTION__); }))
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h"
 ; } } while (0); __key = (__key << 1) | (c == '1' ? 1 : 0); __mask = (__mask << 1) | (c == '?' ? 0 : 1); __shift = (c == '?' ? __shift + 1 : 0); } }; if (((0) + 2) >= len) goto finish; else { char c = str[(0) + 2]; if (c != ' ') { do { if (!(c == '0' || c == '1' || c == '?')) { (fflush(
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h" 3 4
 stdout
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h"
 ), fprintf(
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h" 3 4
 stderr
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h"
 , "\33[1;31m" "invalid character '%c' in pattern string" "\33[0m" "\n", c)); extern FILE* log_fp; fflush(log_fp); extern void assert_fail_msg(); assert_fail_msg(); 
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h" 3 4
 ((void) sizeof ((
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h"
 c == '0' || c == '1' || c == '?'
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h" 3 4
 ) ? 1 : 0), __extension__ ({ if (
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h"
 c == '0' || c == '1' || c == '?'
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h" 3 4
 ) ; else __assert_fail (
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h"
 "c == '0' || c == '1' || c == '?'"
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h" 3 4
 , "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h", 53, __extension__ __PRETTY_FUNCTION__); }))
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h"
 ; } } while (0); __key = (__key << 1) | (c == '1' ? 1 : 0); __mask = (__mask << 1) | (c == '?' ? 0 : 1); __shift = (c == '?' ? __shift + 1 : 0); } }; if ((((0) + 2) + 1) >= len) goto finish; else { char c = str[((0) + 2) + 1]; if (c != ' ') { do { if (!(c == '0' || c == '1' || c == '?')) { (fflush(
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h" 3 4
 stdout
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h"
 ), fprintf(
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h" 3 4
 stderr
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h"
 , "\33[1;31m" "invalid character '%c' in pattern string" "\33[0m" "\n", c)); extern FILE* log_fp; fflush(log_fp); extern void assert_fail_msg(); assert_fail_msg(); 
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h" 3 4
 ((void) sizeof ((
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h"
 c == '0' || c == '1' || c == '?'
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h" 3 4
 ) ? 1 : 0), __extension__ ({ if (
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h"
 c == '0' || c == '1' || c == '?'
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h" 3 4
 ) ; else __assert_fail (
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h"
 "c == '0' || c == '1' || c == '?'"
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h" 3 4
 , "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h", 53, __extension__ __PRETTY_FUNCTION__); }))
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h"
 ; } } while (0); __key = (__key << 1) | (c == '1' ? 1 : 0); __mask = (__mask << 1) | (c == '?' ? 0 : 1); __shift = (c == '?' ? __shift + 1 : 0); } }; if (((0) + 4) >= len) goto finish; else { char c = str[(0) + 4]; if (c != ' ') { do { if (!(c == '0' || c == '1' || c == '?')) { (fflush(
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h" 3 4
 stdout
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h"
 ), fprintf(
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h" 3 4
 stderr
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h"
 , "\33[1;31m" "invalid character '%c' in pattern string" "\33[0m" "\n", c)); extern FILE* log_fp; fflush(log_fp); extern void assert_fail_msg(); assert_fail_msg(); 
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h" 3 4
 ((void) sizeof ((
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h"
 c == '0' || c == '1' || c == '?'
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h" 3 4
 ) ? 1 : 0), __extension__ ({ if (
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h"
 c == '0' || c == '1' || c == '?'
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h" 3 4
 ) ; else __assert_fail (
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h"
 "c == '0' || c == '1' || c == '?'"
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h" 3 4
 , "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h", 53, __extension__ __PRETTY_FUNCTION__); }))
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h"
 ; } } while (0); __key = (__key << 1) | (c == '1' ? 1 : 0); __mask = (__mask << 1) | (c == '?' ? 0 : 1); __shift = (c == '?' ? __shift + 1 : 0); } }; if ((((0) + 4) + 1) >= len) goto finish; else { char c = str[((0) + 4) + 1]; if (c != ' ') { do { if (!(c == '0' || c == '1' || c == '?')) { (fflush(
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h" 3 4
 stdout
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h"
 ), fprintf(
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h" 3 4
 stderr
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h"
 , "\33[1;31m" "invalid character '%c' in pattern string" "\33[0m" "\n", c)); extern FILE* log_fp; fflush(log_fp); extern void assert_fail_msg(); assert_fail_msg(); 
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h" 3 4
 ((void) sizeof ((
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h"
 c == '0' || c == '1' || c == '?'
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h" 3 4
 ) ? 1 : 0), __extension__ ({ if (
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h"
 c == '0' || c == '1' || c == '?'
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h" 3 4
 ) ; else __assert_fail (
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h"
 "c == '0' || c == '1' || c == '?'"
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h" 3 4
 , "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h", 53, __extension__ __PRETTY_FUNCTION__); }))
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h"
 ; } } while (0); __key = (__key << 1) | (c == '1' ? 1 : 0); __mask = (__mask << 1) | (c == '?' ? 0 : 1); __shift = (c == '?' ? __shift + 1 : 0); } }; if ((((0) + 4) + 2) >= len) goto finish; else { char c = str[((0) + 4) + 2]; if (c != ' ') { do { if (!(c == '0' || c == '1' || c == '?')) { (fflush(
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h" 3 4
 stdout
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h"
 ), fprintf(
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h" 3 4
 stderr
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h"
 , "\33[1;31m" "invalid character '%c' in pattern string" "\33[0m" "\n", c)); extern FILE* log_fp; fflush(log_fp); extern void assert_fail_msg(); assert_fail_msg(); 
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h" 3 4
 ((void) sizeof ((
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h"
 c == '0' || c == '1' || c == '?'
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h" 3 4
 ) ? 1 : 0), __extension__ ({ if (
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h"
 c == '0' || c == '1' || c == '?'
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h" 3 4
 ) ; else __assert_fail (
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h"
 "c == '0' || c == '1' || c == '?'"
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h" 3 4
 , "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h", 53, __extension__ __PRETTY_FUNCTION__); }))
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h"
 ; } } while (0); __key = (__key << 1) | (c == '1' ? 1 : 0); __mask = (__mask << 1) | (c == '?' ? 0 : 1); __shift = (c == '?' ? __shift + 1 : 0); } }; if (((((0) + 4) + 2) + 1) >= len) goto finish; else { char c = str[(((0) + 4) + 2) + 1]; if (c != ' ') { do { if (!(c == '0' || c == '1' || c == '?')) { (fflush(
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h" 3 4
 stdout
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h"
 ), fprintf(
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h" 3 4
 stderr
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h"
 , "\33[1;31m" "invalid character '%c' in pattern string" "\33[0m" "\n", c)); extern FILE* log_fp; fflush(log_fp); extern void assert_fail_msg(); assert_fail_msg(); 
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h" 3 4
 ((void) sizeof ((
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h"
 c == '0' || c == '1' || c == '?'
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h" 3 4
 ) ? 1 : 0), __extension__ ({ if (
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h"
 c == '0' || c == '1' || c == '?'
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h" 3 4
 ) ; else __assert_fail (
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h"
 "c == '0' || c == '1' || c == '?'"
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h" 3 4
 , "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h", 53, __extension__ __PRETTY_FUNCTION__); }))
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h"
 ; } } while (0); __key = (__key << 1) | (c == '1' ? 1 : 0); __mask = (__mask << 1) | (c == '?' ? 0 : 1); __shift = (c == '?' ? __shift + 1 : 0); } }; if (((0) + 8) >= len) goto finish; else { char c = str[(0) + 8]; if (c != ' ') { do { if (!(c == '0' || c == '1' || c == '?')) { (fflush(
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h" 3 4
 stdout
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h"
 ), fprintf(
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h" 3 4
 stderr
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h"
 , "\33[1;31m" "invalid character '%c' in pattern string" "\33[0m" "\n", c)); extern FILE* log_fp; fflush(log_fp); extern void assert_fail_msg(); assert_fail_msg(); 
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h" 3 4
 ((void) sizeof ((
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h"
 c == '0' || c == '1' || c == '?'
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h" 3 4
 ) ? 1 : 0), __extension__ ({ if (
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h"
 c == '0' || c == '1' || c == '?'
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h" 3 4
 ) ; else __assert_fail (
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h"
 "c == '0' || c == '1' || c == '?'"
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h" 3 4
 , "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h", 53, __extension__ __PRETTY_FUNCTION__); }))
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h"
 ; } } while (0); __key = (__key << 1) | (c == '1' ? 1 : 0); __mask = (__mask << 1) | (c == '?' ? 0 : 1); __shift = (c == '?' ? __shift + 1 : 0); } }; if ((((0) + 8) + 1) >= len) goto finish; else { char c = str[((0) + 8) + 1]; if (c != ' ') { do { if (!(c == '0' || c == '1' || c == '?')) { (fflush(
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h" 3 4
 stdout
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h"
 ), fprintf(
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h" 3 4
 stderr
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h"
 , "\33[1;31m" "invalid character '%c' in pattern string" "\33[0m" "\n", c)); extern FILE* log_fp; fflush(log_fp); extern void assert_fail_msg(); assert_fail_msg(); 
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h" 3 4
 ((void) sizeof ((
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h"
 c == '0' || c == '1' || c == '?'
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h" 3 4
 ) ? 1 : 0), __extension__ ({ if (
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h"
 c == '0' || c == '1' || c == '?'
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h" 3 4
 ) ; else __assert_fail (
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h"
 "c == '0' || c == '1' || c == '?'"
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h" 3 4
 , "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h", 53, __extension__ __PRETTY_FUNCTION__); }))
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h"
 ; } } while (0); __key = (__key << 1) | (c == '1' ? 1 : 0); __mask = (__mask << 1) | (c == '?' ? 0 : 1); __shift = (c == '?' ? __shift + 1 : 0); } }; if ((((0) + 8) + 2) >= len) goto finish; else { char c = str[((0) + 8) + 2]; if (c != ' ') { do { if (!(c == '0' || c == '1' || c == '?')) { (fflush(
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h" 3 4
 stdout
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h"
 ), fprintf(
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h" 3 4
 stderr
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h"
 , "\33[1;31m" "invalid character '%c' in pattern string" "\33[0m" "\n", c)); extern FILE* log_fp; fflush(log_fp); extern void assert_fail_msg(); assert_fail_msg(); 
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h" 3 4
 ((void) sizeof ((
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h"
 c == '0' || c == '1' || c == '?'
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h" 3 4
 ) ? 1 : 0), __extension__ ({ if (
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h"
 c == '0' || c == '1' || c == '?'
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h" 3 4
 ) ; else __assert_fail (
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h"
 "c == '0' || c == '1' || c == '?'"
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h" 3 4
 , "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h", 53, __extension__ __PRETTY_FUNCTION__); }))
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h"
 ; } } while (0); __key = (__key << 1) | (c == '1' ? 1 : 0); __mask = (__mask << 1) | (c == '?' ? 0 : 1); __shift = (c == '?' ? __shift + 1 : 0); } }; if (((((0) + 8) + 2) + 1) >= len) goto finish; else { char c = str[(((0) + 8) + 2) + 1]; if (c != ' ') { do { if (!(c == '0' || c == '1' || c == '?')) { (fflush(
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h" 3 4
 stdout
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h"
 ), fprintf(
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h" 3 4
 stderr
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h"
 , "\33[1;31m" "invalid character '%c' in pattern string" "\33[0m" "\n", c)); extern FILE* log_fp; fflush(log_fp); extern void assert_fail_msg(); assert_fail_msg(); 
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h" 3 4
 ((void) sizeof ((
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h"
 c == '0' || c == '1' || c == '?'
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h" 3 4
 ) ? 1 : 0), __extension__ ({ if (
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h"
 c == '0' || c == '1' || c == '?'
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h" 3 4
 ) ; else __assert_fail (
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h"
 "c == '0' || c == '1' || c == '?'"
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h" 3 4
 , "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h", 53, __extension__ __PRETTY_FUNCTION__); }))
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h"
 ; } } while (0); __key = (__key << 1) | (c == '1' ? 1 : 0); __mask = (__mask << 1) | (c == '?' ? 0 : 1); __shift = (c == '?' ? __shift + 1 : 0); } }; if ((((0) + 8) + 4) >= len) goto finish; else { char c = str[((0) + 8) + 4]; if (c != ' ') { do { if (!(c == '0' || c == '1' || c == '?')) { (fflush(
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h" 3 4
 stdout
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h"
 ), fprintf(
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h" 3 4
 stderr
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h"
 , "\33[1;31m" "invalid character '%c' in pattern string" "\33[0m" "\n", c)); extern FILE* log_fp; fflush(log_fp); extern void assert_fail_msg(); assert_fail_msg(); 
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h" 3 4
 ((void) sizeof ((
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h"
 c == '0' || c == '1' || c == '?'
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h" 3 4
 ) ? 1 : 0), __extension__ ({ if (
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h"
 c == '0' || c == '1' || c == '?'
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h" 3 4
 ) ; else __assert_fail (
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h"
 "c == '0' || c == '1' || c == '?'"
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h" 3 4
 , "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h", 53, __extension__ __PRETTY_FUNCTION__); }))
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h"
 ; } } while (0); __key = (__key << 1) | (c == '1' ? 1 : 0); __mask = (__mask << 1) | (c == '?' ? 0 : 1); __shift = (c == '?' ? __shift + 1 : 0); } }; if (((((0) + 8) + 4) + 1) >= len) goto finish; else { char c = str[(((0) + 8) + 4) + 1]; if (c != ' ') { do { if (!(c == '0' || c == '1' || c == '?')) { (fflush(
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h" 3 4
 stdout
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h"
 ), fprintf(
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h" 3 4
 stderr
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h"
 , "\33[1;31m" "invalid character '%c' in pattern string" "\33[0m" "\n", c)); extern FILE* log_fp; fflush(log_fp); extern void assert_fail_msg(); assert_fail_msg(); 
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h" 3 4
 ((void) sizeof ((
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h"
 c == '0' || c == '1' || c == '?'
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h" 3 4
 ) ? 1 : 0), __extension__ ({ if (
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h"
 c == '0' || c == '1' || c == '?'
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h" 3 4
 ) ; else __assert_fail (
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h"
 "c == '0' || c == '1' || c == '?'"
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h" 3 4
 , "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h", 53, __extension__ __PRETTY_FUNCTION__); }))
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h"
 ; } } while (0); __key = (__key << 1) | (c == '1' ? 1 : 0); __mask = (__mask << 1) | (c == '?' ? 0 : 1); __shift = (c == '?' ? __shift + 1 : 0); } }; if (((((0) + 8) + 4) + 2) >= len) goto finish; else { char c = str[(((0) + 8) + 4) + 2]; if (c != ' ') { do { if (!(c == '0' || c == '1' || c == '?')) { (fflush(
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h" 3 4
 stdout
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h"
 ), fprintf(
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h" 3 4
 stderr
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h"
 , "\33[1;31m" "invalid character '%c' in pattern string" "\33[0m" "\n", c)); extern FILE* log_fp; fflush(log_fp); extern void assert_fail_msg(); assert_fail_msg(); 
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h" 3 4
 ((void) sizeof ((
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h"
 c == '0' || c == '1' || c == '?'
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h" 3 4
 ) ? 1 : 0), __extension__ ({ if (
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h"
 c == '0' || c == '1' || c == '?'
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h" 3 4
 ) ; else __assert_fail (
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h"
 "c == '0' || c == '1' || c == '?'"
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h" 3 4
 , "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h", 53, __extension__ __PRETTY_FUNCTION__); }))
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h"
 ; } } while (0); __key = (__key << 1) | (c == '1' ? 1 : 0); __mask = (__mask << 1) | (c == '?' ? 0 : 1); __shift = (c == '?' ? __shift + 1 : 0); } }; if ((((((0) + 8) + 4) + 2) + 1) >= len) goto finish; else { char c = str[((((0) + 8) + 4) + 2) + 1]; if (c != ' ') { do { if (!(c == '0' || c == '1' || c == '?')) { (fflush(
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h" 3 4
 stdout
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h"
 ), fprintf(
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h" 3 4
 stderr
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h"
 , "\33[1;31m" "invalid character '%c' in pattern string" "\33[0m" "\n", c)); extern FILE* log_fp; fflush(log_fp); extern void assert_fail_msg(); assert_fail_msg(); 
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h" 3 4
 ((void) sizeof ((
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h"
 c == '0' || c == '1' || c == '?'
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h" 3 4
 ) ? 1 : 0), __extension__ ({ if (
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h"
 c == '0' || c == '1' || c == '?'
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h" 3 4
 ) ; else __assert_fail (
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h"
 "c == '0' || c == '1' || c == '?'"
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h" 3 4
 , "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h", 53, __extension__ __PRETTY_FUNCTION__); }))
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h"
 ; } } while (0); __key = (__key << 1) | (c == '1' ? 1 : 0); __mask = (__mask << 1) | (c == '?' ? 0 : 1); __shift = (c == '?' ? __shift + 1 : 0); } }; if (((0) + 16) >= len) goto finish; else { char c = str[(0) + 16]; if (c != ' ') { do { if (!(c == '0' || c == '1' || c == '?')) { (fflush(
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h" 3 4
 stdout
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h"
 ), fprintf(
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h" 3 4
 stderr
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h"
 , "\33[1;31m" "invalid character '%c' in pattern string" "\33[0m" "\n", c)); extern FILE* log_fp; fflush(log_fp); extern void assert_fail_msg(); assert_fail_msg(); 
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h" 3 4
 ((void) sizeof ((
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h"
 c == '0' || c == '1' || c == '?'
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h" 3 4
 ) ? 1 : 0), __extension__ ({ if (
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h"
 c == '0' || c == '1' || c == '?'
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h" 3 4
 ) ; else __assert_fail (
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h"
 "c == '0' || c == '1' || c == '?'"
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h" 3 4
 , "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h", 53, __extension__ __PRETTY_FUNCTION__); }))
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h"
 ; } } while (0); __key = (__key << 1) | (c == '1' ? 1 : 0); __mask = (__mask << 1) | (c == '?' ? 0 : 1); __shift = (c == '?' ? __shift + 1 : 0); } }; if ((((0) + 16) + 1) >= len) goto finish; else { char c = str[((0) + 16) + 1]; if (c != ' ') { do { if (!(c == '0' || c == '1' || c == '?')) { (fflush(
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h" 3 4
 stdout
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h"
 ), fprintf(
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h" 3 4
 stderr
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h"
 , "\33[1;31m" "invalid character '%c' in pattern string" "\33[0m" "\n", c)); extern FILE* log_fp; fflush(log_fp); extern void assert_fail_msg(); assert_fail_msg(); 
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h" 3 4
 ((void) sizeof ((
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h"
 c == '0' || c == '1' || c == '?'
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h" 3 4
 ) ? 1 : 0), __extension__ ({ if (
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h"
 c == '0' || c == '1' || c == '?'
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h" 3 4
 ) ; else __assert_fail (
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h"
 "c == '0' || c == '1' || c == '?'"
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h" 3 4
 , "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h", 53, __extension__ __PRETTY_FUNCTION__); }))
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h"
 ; } } while (0); __key = (__key << 1) | (c == '1' ? 1 : 0); __mask = (__mask << 1) | (c == '?' ? 0 : 1); __shift = (c == '?' ? __shift + 1 : 0); } }; if ((((0) + 16) + 2) >= len) goto finish; else { char c = str[((0) + 16) + 2]; if (c != ' ') { do { if (!(c == '0' || c == '1' || c == '?')) { (fflush(
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h" 3 4
 stdout
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h"
 ), fprintf(
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h" 3 4
 stderr
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h"
 , "\33[1;31m" "invalid character '%c' in pattern string" "\33[0m" "\n", c)); extern FILE* log_fp; fflush(log_fp); extern void assert_fail_msg(); assert_fail_msg(); 
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h" 3 4
 ((void) sizeof ((
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h"
 c == '0' || c == '1' || c == '?'
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h" 3 4
 ) ? 1 : 0), __extension__ ({ if (
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h"
 c == '0' || c == '1' || c == '?'
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h" 3 4
 ) ; else __assert_fail (
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h"
 "c == '0' || c == '1' || c == '?'"
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h" 3 4
 , "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h", 53, __extension__ __PRETTY_FUNCTION__); }))
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h"
 ; } } while (0); __key = (__key << 1) | (c == '1' ? 1 : 0); __mask = (__mask << 1) | (c == '?' ? 0 : 1); __shift = (c == '?' ? __shift + 1 : 0); } }; if (((((0) + 16) + 2) + 1) >= len) goto finish; else { char c = str[(((0) + 16) + 2) + 1]; if (c != ' ') { do { if (!(c == '0' || c == '1' || c == '?')) { (fflush(
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h" 3 4
 stdout
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h"
 ), fprintf(
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h" 3 4
 stderr
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h"
 , "\33[1;31m" "invalid character '%c' in pattern string" "\33[0m" "\n", c)); extern FILE* log_fp; fflush(log_fp); extern void assert_fail_msg(); assert_fail_msg(); 
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h" 3 4
 ((void) sizeof ((
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h"
 c == '0' || c == '1' || c == '?'
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h" 3 4
 ) ? 1 : 0), __extension__ ({ if (
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h"
 c == '0' || c == '1' || c == '?'
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h" 3 4
 ) ; else __assert_fail (
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h"
 "c == '0' || c == '1' || c == '?'"
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h" 3 4
 , "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h", 53, __extension__ __PRETTY_FUNCTION__); }))
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h"
 ; } } while (0); __key = (__key << 1) | (c == '1' ? 1 : 0); __mask = (__mask << 1) | (c == '?' ? 0 : 1); __shift = (c == '?' ? __shift + 1 : 0); } }; if ((((0) + 16) + 4) >= len) goto finish; else { char c = str[((0) + 16) + 4]; if (c != ' ') { do { if (!(c == '0' || c == '1' || c == '?')) { (fflush(
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h" 3 4
 stdout
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h"
 ), fprintf(
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h" 3 4
 stderr
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h"
 , "\33[1;31m" "invalid character '%c' in pattern string" "\33[0m" "\n", c)); extern FILE* log_fp; fflush(log_fp); extern void assert_fail_msg(); assert_fail_msg(); 
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h" 3 4
 ((void) sizeof ((
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h"
 c == '0' || c == '1' || c == '?'
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h" 3 4
 ) ? 1 : 0), __extension__ ({ if (
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h"
 c == '0' || c == '1' || c == '?'
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h" 3 4
 ) ; else __assert_fail (
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h"
 "c == '0' || c == '1' || c == '?'"
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h" 3 4
 , "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h", 53, __extension__ __PRETTY_FUNCTION__); }))
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h"
 ; } } while (0); __key = (__key << 1) | (c == '1' ? 1 : 0); __mask = (__mask << 1) | (c == '?' ? 0 : 1); __shift = (c == '?' ? __shift + 1 : 0); } }; if (((((0) + 16) + 4) + 1) >= len) goto finish; else { char c = str[(((0) + 16) + 4) + 1]; if (c != ' ') { do { if (!(c == '0' || c == '1' || c == '?')) { (fflush(
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h" 3 4
 stdout
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h"
 ), fprintf(
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h" 3 4
 stderr
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h"
 , "\33[1;31m" "invalid character '%c' in pattern string" "\33[0m" "\n", c)); extern FILE* log_fp; fflush(log_fp); extern void assert_fail_msg(); assert_fail_msg(); 
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h" 3 4
 ((void) sizeof ((
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h"
 c == '0' || c == '1' || c == '?'
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h" 3 4
 ) ? 1 : 0), __extension__ ({ if (
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h"
 c == '0' || c == '1' || c == '?'
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h" 3 4
 ) ; else __assert_fail (
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h"
 "c == '0' || c == '1' || c == '?'"
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h" 3 4
 , "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h", 53, __extension__ __PRETTY_FUNCTION__); }))
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h"
 ; } } while (0); __key = (__key << 1) | (c == '1' ? 1 : 0); __mask = (__mask << 1) | (c == '?' ? 0 : 1); __shift = (c == '?' ? __shift + 1 : 0); } }; if (((((0) + 16) + 4) + 2) >= len) goto finish; else { char c = str[(((0) + 16) + 4) + 2]; if (c != ' ') { do { if (!(c == '0' || c == '1' || c == '?')) { (fflush(
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h" 3 4
 stdout
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h"
 ), fprintf(
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h" 3 4
 stderr
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h"
 , "\33[1;31m" "invalid character '%c' in pattern string" "\33[0m" "\n", c)); extern FILE* log_fp; fflush(log_fp); extern void assert_fail_msg(); assert_fail_msg(); 
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h" 3 4
 ((void) sizeof ((
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h"
 c == '0' || c == '1' || c == '?'
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h" 3 4
 ) ? 1 : 0), __extension__ ({ if (
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h"
 c == '0' || c == '1' || c == '?'
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h" 3 4
 ) ; else __assert_fail (
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h"
 "c == '0' || c == '1' || c == '?'"
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h" 3 4
 , "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h", 53, __extension__ __PRETTY_FUNCTION__); }))
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h"
 ; } } while (0); __key = (__key << 1) | (c == '1' ? 1 : 0); __mask = (__mask << 1) | (c == '?' ? 0 : 1); __shift = (c == '?' ? __shift + 1 : 0); } }; if ((((((0) + 16) + 4) + 2) + 1) >= len) goto finish; else { char c = str[((((0) + 16) + 4) + 2) + 1]; if (c != ' ') { do { if (!(c == '0' || c == '1' || c == '?')) { (fflush(
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h" 3 4
 stdout
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h"
 ), fprintf(
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h" 3 4
 stderr
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h"
 , "\33[1;31m" "invalid character '%c' in pattern string" "\33[0m" "\n", c)); extern FILE* log_fp; fflush(log_fp); extern void assert_fail_msg(); assert_fail_msg(); 
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h" 3 4
 ((void) sizeof ((
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h"
 c == '0' || c == '1' || c == '?'
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h" 3 4
 ) ? 1 : 0), __extension__ ({ if (
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h"
 c == '0' || c == '1' || c == '?'
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h" 3 4
 ) ; else __assert_fail (
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h"
 "c == '0' || c == '1' || c == '?'"
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h" 3 4
 , "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h", 53, __extension__ __PRETTY_FUNCTION__); }))
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h"
 ; } } while (0); __key = (__key << 1) | (c == '1' ? 1 : 0); __mask = (__mask << 1) | (c == '?' ? 0 : 1); __shift = (c == '?' ? __shift + 1 : 0); } }; if ((((0) + 16) + 8) >= len) goto finish; else { char c = str[((0) + 16) + 8]; if (c != ' ') { do { if (!(c == '0' || c == '1' || c == '?')) { (fflush(
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h" 3 4
 stdout
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h"
 ), fprintf(
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h" 3 4
 stderr
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h"
 , "\33[1;31m" "invalid character '%c' in pattern string" "\33[0m" "\n", c)); extern FILE* log_fp; fflush(log_fp); extern void assert_fail_msg(); assert_fail_msg(); 
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h" 3 4
 ((void) sizeof ((
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h"
 c == '0' || c == '1' || c == '?'
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h" 3 4
 ) ? 1 : 0), __extension__ ({ if (
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h"
 c == '0' || c == '1' || c == '?'
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h" 3 4
 ) ; else __assert_fail (
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h"
 "c == '0' || c == '1' || c == '?'"
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h" 3 4
 , "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h", 53, __extension__ __PRETTY_FUNCTION__); }))
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h"
 ; } } while (0); __key = (__key << 1) | (c == '1' ? 1 : 0); __mask = (__mask << 1) | (c == '?' ? 0 : 1); __shift = (c == '?' ? __shift + 1 : 0); } }; if (((((0) + 16) + 8) + 1) >= len) goto finish; else { char c = str[(((0) + 16) + 8) + 1]; if (c != ' ') { do { if (!(c == '0' || c == '1' || c == '?')) { (fflush(
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h" 3 4
 stdout
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h"
 ), fprintf(
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h" 3 4
 stderr
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h"
 , "\33[1;31m" "invalid character '%c' in pattern string" "\33[0m" "\n", c)); extern FILE* log_fp; fflush(log_fp); extern void assert_fail_msg(); assert_fail_msg(); 
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h" 3 4
 ((void) sizeof ((
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h"
 c == '0' || c == '1' || c == '?'
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h" 3 4
 ) ? 1 : 0), __extension__ ({ if (
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h"
 c == '0' || c == '1' || c == '?'
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h" 3 4
 ) ; else __assert_fail (
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h"
 "c == '0' || c == '1' || c == '?'"
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h" 3 4
 , "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h", 53, __extension__ __PRETTY_FUNCTION__); }))
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h"
 ; } } while (0); __key = (__key << 1) | (c == '1' ? 1 : 0); __mask = (__mask << 1) | (c == '?' ? 0 : 1); __shift = (c == '?' ? __shift + 1 : 0); } }; if (((((0) + 16) + 8) + 2) >= len) goto finish; else { char c = str[(((0) + 16) + 8) + 2]; if (c != ' ') { do { if (!(c == '0' || c == '1' || c == '?')) { (fflush(
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h" 3 4
 stdout
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h"
 ), fprintf(
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h" 3 4
 stderr
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h"
 , "\33[1;31m" "invalid character '%c' in pattern string" "\33[0m" "\n", c)); extern FILE* log_fp; fflush(log_fp); extern void assert_fail_msg(); assert_fail_msg(); 
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h" 3 4
 ((void) sizeof ((
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h"
 c == '0' || c == '1' || c == '?'
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h" 3 4
 ) ? 1 : 0), __extension__ ({ if (
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h"
 c == '0' || c == '1' || c == '?'
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h" 3 4
 ) ; else __assert_fail (
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h"
 "c == '0' || c == '1' || c == '?'"
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h" 3 4
 , "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h", 53, __extension__ __PRETTY_FUNCTION__); }))
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h"
 ; } } while (0); __key = (__key << 1) | (c == '1' ? 1 : 0); __mask = (__mask << 1) | (c == '?' ? 0 : 1); __shift = (c == '?' ? __shift + 1 : 0); } }; if ((((((0) + 16) + 8) + 2) + 1) >= len) goto finish; else { char c = str[((((0) + 16) + 8) + 2) + 1]; if (c != ' ') { do { if (!(c == '0' || c == '1' || c == '?')) { (fflush(
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h" 3 4
 stdout
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h"
 ), fprintf(
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h" 3 4
 stderr
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h"
 , "\33[1;31m" "invalid character '%c' in pattern string" "\33[0m" "\n", c)); extern FILE* log_fp; fflush(log_fp); extern void assert_fail_msg(); assert_fail_msg(); 
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h" 3 4
 ((void) sizeof ((
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h"
 c == '0' || c == '1' || c == '?'
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h" 3 4
 ) ? 1 : 0), __extension__ ({ if (
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h"
 c == '0' || c == '1' || c == '?'
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h" 3 4
 ) ; else __assert_fail (
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h"
 "c == '0' || c == '1' || c == '?'"
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h" 3 4
 , "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h", 53, __extension__ __PRETTY_FUNCTION__); }))
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h"
 ; } } while (0); __key = (__key << 1) | (c == '1' ? 1 : 0); __mask = (__mask << 1) | (c == '?' ? 0 : 1); __shift = (c == '?' ? __shift + 1 : 0); } }; if (((((0) + 16) + 8) + 4) >= len) goto finish; else { char c = str[(((0) + 16) + 8) + 4]; if (c != ' ') { do { if (!(c == '0' || c == '1' || c == '?')) { (fflush(
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h" 3 4
 stdout
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h"
 ), fprintf(
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h" 3 4
 stderr
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h"
 , "\33[1;31m" "invalid character '%c' in pattern string" "\33[0m" "\n", c)); extern FILE* log_fp; fflush(log_fp); extern void assert_fail_msg(); assert_fail_msg(); 
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h" 3 4
 ((void) sizeof ((
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h"
 c == '0' || c == '1' || c == '?'
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h" 3 4
 ) ? 1 : 0), __extension__ ({ if (
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h"
 c == '0' || c == '1' || c == '?'
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h" 3 4
 ) ; else __assert_fail (
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h"
 "c == '0' || c == '1' || c == '?'"
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h" 3 4
 , "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h", 53, __extension__ __PRETTY_FUNCTION__); }))
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h"
 ; } } while (0); __key = (__key << 1) | (c == '1' ? 1 : 0); __mask = (__mask << 1) | (c == '?' ? 0 : 1); __shift = (c == '?' ? __shift + 1 : 0); } }; if ((((((0) + 16) + 8) + 4) + 1) >= len) goto finish; else { char c = str[((((0) + 16) + 8) + 4) + 1]; if (c != ' ') { do { if (!(c == '0' || c == '1' || c == '?')) { (fflush(
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h" 3 4
 stdout
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h"
 ), fprintf(
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h" 3 4
 stderr
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h"
 , "\33[1;31m" "invalid character '%c' in pattern string" "\33[0m" "\n", c)); extern FILE* log_fp; fflush(log_fp); extern void assert_fail_msg(); assert_fail_msg(); 
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h" 3 4
 ((void) sizeof ((
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h"
 c == '0' || c == '1' || c == '?'
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h" 3 4
 ) ? 1 : 0), __extension__ ({ if (
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h"
 c == '0' || c == '1' || c == '?'
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h" 3 4
 ) ; else __assert_fail (
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h"
 "c == '0' || c == '1' || c == '?'"
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h" 3 4
 , "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h", 53, __extension__ __PRETTY_FUNCTION__); }))
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h"
 ; } } while (0); __key = (__key << 1) | (c == '1' ? 1 : 0); __mask = (__mask << 1) | (c == '?' ? 0 : 1); __shift = (c == '?' ? __shift + 1 : 0); } }; if ((((((0) + 16) + 8) + 4) + 2) >= len) goto finish; else { char c = str[((((0) + 16) + 8) + 4) + 2]; if (c != ' ') { do { if (!(c == '0' || c == '1' || c == '?')) { (fflush(
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h" 3 4
 stdout
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h"
 ), fprintf(
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h" 3 4
 stderr
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h"
 , "\33[1;31m" "invalid character '%c' in pattern string" "\33[0m" "\n", c)); extern FILE* log_fp; fflush(log_fp); extern void assert_fail_msg(); assert_fail_msg(); 
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h" 3 4
 ((void) sizeof ((
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h"
 c == '0' || c == '1' || c == '?'
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h" 3 4
 ) ? 1 : 0), __extension__ ({ if (
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h"
 c == '0' || c == '1' || c == '?'
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h" 3 4
 ) ; else __assert_fail (
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h"
 "c == '0' || c == '1' || c == '?'"
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h" 3 4
 , "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h", 53, __extension__ __PRETTY_FUNCTION__); }))
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h"
 ; } } while (0); __key = (__key << 1) | (c == '1' ? 1 : 0); __mask = (__mask << 1) | (c == '?' ? 0 : 1); __shift = (c == '?' ? __shift + 1 : 0); } }; if (((((((0) + 16) + 8) + 4) + 2) + 1) >= len) goto finish; else { char c = str[(((((0) + 16) + 8) + 4) + 2) + 1]; if (c != ' ') { do { if (!(c == '0' || c == '1' || c == '?')) { (fflush(
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h" 3 4
 stdout
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h"
 ), fprintf(
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h" 3 4
 stderr
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h"
 , "\33[1;31m" "invalid character '%c' in pattern string" "\33[0m" "\n", c)); extern FILE* log_fp; fflush(log_fp); extern void assert_fail_msg(); assert_fail_msg(); 
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h" 3 4
 ((void) sizeof ((
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h"
 c == '0' || c == '1' || c == '?'
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h" 3 4
 ) ? 1 : 0), __extension__ ({ if (
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h"
 c == '0' || c == '1' || c == '?'
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h" 3 4
 ) ; else __assert_fail (
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h"
 "c == '0' || c == '1' || c == '?'"
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h" 3 4
 , "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h", 53, __extension__ __PRETTY_FUNCTION__); }))
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h"
 ; } } while (0); __key = (__key << 1) | (c == '1' ? 1 : 0); __mask = (__mask << 1) | (c == '?' ? 0 : 1); __shift = (c == '?' ? __shift + 1 : 0); } }; if (((0) + 32) >= len) goto finish; else { char c = str[(0) + 32]; if (c != ' ') { do { if (!(c == '0' || c == '1' || c == '?')) { (fflush(
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h" 3 4
 stdout
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h"
 ), fprintf(
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h" 3 4
 stderr
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h"
 , "\33[1;31m" "invalid character '%c' in pattern string" "\33[0m" "\n", c)); extern FILE* log_fp; fflush(log_fp); extern void assert_fail_msg(); assert_fail_msg(); 
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h" 3 4
 ((void) sizeof ((
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h"
 c == '0' || c == '1' || c == '?'
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h" 3 4
 ) ? 1 : 0), __extension__ ({ if (
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h"
 c == '0' || c == '1' || c == '?'
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h" 3 4
 ) ; else __assert_fail (
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h"
 "c == '0' || c == '1' || c == '?'"
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h" 3 4
 , "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h", 53, __extension__ __PRETTY_FUNCTION__); }))
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h"
 ; } } while (0); __key = (__key << 1) | (c == '1' ? 1 : 0); __mask = (__mask << 1) | (c == '?' ? 0 : 1); __shift = (c == '?' ? __shift + 1 : 0); } }; if ((((0) + 32) + 1) >= len) goto finish; else { char c = str[((0) + 32) + 1]; if (c != ' ') { do { if (!(c == '0' || c == '1' || c == '?')) { (fflush(
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h" 3 4
 stdout
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h"
 ), fprintf(
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h" 3 4
 stderr
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h"
 , "\33[1;31m" "invalid character '%c' in pattern string" "\33[0m" "\n", c)); extern FILE* log_fp; fflush(log_fp); extern void assert_fail_msg(); assert_fail_msg(); 
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h" 3 4
 ((void) sizeof ((
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h"
 c == '0' || c == '1' || c == '?'
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h" 3 4
 ) ? 1 : 0), __extension__ ({ if (
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h"
 c == '0' || c == '1' || c == '?'
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h" 3 4
 ) ; else __assert_fail (
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h"
 "c == '0' || c == '1' || c == '?'"
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h" 3 4
 , "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h", 53, __extension__ __PRETTY_FUNCTION__); }))
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h"
 ; } } while (0); __key = (__key << 1) | (c == '1' ? 1 : 0); __mask = (__mask << 1) | (c == '?' ? 0 : 1); __shift = (c == '?' ? __shift + 1 : 0); } }; if ((((0) + 32) + 2) >= len) goto finish; else { char c = str[((0) + 32) + 2]; if (c != ' ') { do { if (!(c == '0' || c == '1' || c == '?')) { (fflush(
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h" 3 4
 stdout
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h"
 ), fprintf(
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h" 3 4
 stderr
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h"
 , "\33[1;31m" "invalid character '%c' in pattern string" "\33[0m" "\n", c)); extern FILE* log_fp; fflush(log_fp); extern void assert_fail_msg(); assert_fail_msg(); 
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h" 3 4
 ((void) sizeof ((
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h"
 c == '0' || c == '1' || c == '?'
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h" 3 4
 ) ? 1 : 0), __extension__ ({ if (
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h"
 c == '0' || c == '1' || c == '?'
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h" 3 4
 ) ; else __assert_fail (
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h"
 "c == '0' || c == '1' || c == '?'"
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h" 3 4
 , "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h", 53, __extension__ __PRETTY_FUNCTION__); }))
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h"
 ; } } while (0); __key = (__key << 1) | (c == '1' ? 1 : 0); __mask = (__mask << 1) | (c == '?' ? 0 : 1); __shift = (c == '?' ? __shift + 1 : 0); } }; if (((((0) + 32) + 2) + 1) >= len) goto finish; else { char c = str[(((0) + 32) + 2) + 1]; if (c != ' ') { do { if (!(c == '0' || c == '1' || c == '?')) { (fflush(
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h" 3 4
 stdout
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h"
 ), fprintf(
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h" 3 4
 stderr
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h"
 , "\33[1;31m" "invalid character '%c' in pattern string" "\33[0m" "\n", c)); extern FILE* log_fp; fflush(log_fp); extern void assert_fail_msg(); assert_fail_msg(); 
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h" 3 4
 ((void) sizeof ((
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h"
 c == '0' || c == '1' || c == '?'
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h" 3 4
 ) ? 1 : 0), __extension__ ({ if (
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h"
 c == '0' || c == '1' || c == '?'
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h" 3 4
 ) ; else __assert_fail (
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h"
 "c == '0' || c == '1' || c == '?'"
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h" 3 4
 , "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h", 53, __extension__ __PRETTY_FUNCTION__); }))
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h"
 ; } } while (0); __key = (__key << 1) | (c == '1' ? 1 : 0); __mask = (__mask << 1) | (c == '?' ? 0 : 1); __shift = (c == '?' ? __shift + 1 : 0); } }; if ((((0) + 32) + 4) >= len) goto finish; else { char c = str[((0) + 32) + 4]; if (c != ' ') { do { if (!(c == '0' || c == '1' || c == '?')) { (fflush(
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h" 3 4
 stdout
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h"
 ), fprintf(
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h" 3 4
 stderr
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h"
 , "\33[1;31m" "invalid character '%c' in pattern string" "\33[0m" "\n", c)); extern FILE* log_fp; fflush(log_fp); extern void assert_fail_msg(); assert_fail_msg(); 
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h" 3 4
 ((void) sizeof ((
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h"
 c == '0' || c == '1' || c == '?'
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h" 3 4
 ) ? 1 : 0), __extension__ ({ if (
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h"
 c == '0' || c == '1' || c == '?'
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h" 3 4
 ) ; else __assert_fail (
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h"
 "c == '0' || c == '1' || c == '?'"
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h" 3 4
 , "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h", 53, __extension__ __PRETTY_FUNCTION__); }))
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h"
 ; } } while (0); __key = (__key << 1) | (c == '1' ? 1 : 0); __mask = (__mask << 1) | (c == '?' ? 0 : 1); __shift = (c == '?' ? __shift + 1 : 0); } }; if (((((0) + 32) + 4) + 1) >= len) goto finish; else { char c = str[(((0) + 32) + 4) + 1]; if (c != ' ') { do { if (!(c == '0' || c == '1' || c == '?')) { (fflush(
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h" 3 4
 stdout
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h"
 ), fprintf(
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h" 3 4
 stderr
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h"
 , "\33[1;31m" "invalid character '%c' in pattern string" "\33[0m" "\n", c)); extern FILE* log_fp; fflush(log_fp); extern void assert_fail_msg(); assert_fail_msg(); 
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h" 3 4
 ((void) sizeof ((
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h"
 c == '0' || c == '1' || c == '?'
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h" 3 4
 ) ? 1 : 0), __extension__ ({ if (
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h"
 c == '0' || c == '1' || c == '?'
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h" 3 4
 ) ; else __assert_fail (
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h"
 "c == '0' || c == '1' || c == '?'"
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h" 3 4
 , "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h", 53, __extension__ __PRETTY_FUNCTION__); }))
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h"
 ; } } while (0); __key = (__key << 1) | (c == '1' ? 1 : 0); __mask = (__mask << 1) | (c == '?' ? 0 : 1); __shift = (c == '?' ? __shift + 1 : 0); } }; if (((((0) + 32) + 4) + 2) >= len) goto finish; else { char c = str[(((0) + 32) + 4) + 2]; if (c != ' ') { do { if (!(c == '0' || c == '1' || c == '?')) { (fflush(
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h" 3 4
 stdout
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h"
 ), fprintf(
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h" 3 4
 stderr
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h"
 , "\33[1;31m" "invalid character '%c' in pattern string" "\33[0m" "\n", c)); extern FILE* log_fp; fflush(log_fp); extern void assert_fail_msg(); assert_fail_msg(); 
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h" 3 4
 ((void) sizeof ((
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h"
 c == '0' || c == '1' || c == '?'
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h" 3 4
 ) ? 1 : 0), __extension__ ({ if (
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h"
 c == '0' || c == '1' || c == '?'
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h" 3 4
 ) ; else __assert_fail (
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h"
 "c == '0' || c == '1' || c == '?'"
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h" 3 4
 , "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h", 53, __extension__ __PRETTY_FUNCTION__); }))
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h"
 ; } } while (0); __key = (__key << 1) | (c == '1' ? 1 : 0); __mask = (__mask << 1) | (c == '?' ? 0 : 1); __shift = (c == '?' ? __shift + 1 : 0); } }; if ((((((0) + 32) + 4) + 2) + 1) >= len) goto finish; else { char c = str[((((0) + 32) + 4) + 2) + 1]; if (c != ' ') { do { if (!(c == '0' || c == '1' || c == '?')) { (fflush(
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h" 3 4
 stdout
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h"
 ), fprintf(
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h" 3 4
 stderr
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h"
 , "\33[1;31m" "invalid character '%c' in pattern string" "\33[0m" "\n", c)); extern FILE* log_fp; fflush(log_fp); extern void assert_fail_msg(); assert_fail_msg(); 
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h" 3 4
 ((void) sizeof ((
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h"
 c == '0' || c == '1' || c == '?'
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h" 3 4
 ) ? 1 : 0), __extension__ ({ if (
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h"
 c == '0' || c == '1' || c == '?'
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h" 3 4
 ) ; else __assert_fail (
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h"
 "c == '0' || c == '1' || c == '?'"
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h" 3 4
 , "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h", 53, __extension__ __PRETTY_FUNCTION__); }))
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h"
 ; } } while (0); __key = (__key << 1) | (c == '1' ? 1 : 0); __mask = (__mask << 1) | (c == '?' ? 0 : 1); __shift = (c == '?' ? __shift + 1 : 0); } }; if ((((0) + 32) + 8) >= len) goto finish; else { char c = str[((0) + 32) + 8]; if (c != ' ') { do { if (!(c == '0' || c == '1' || c == '?')) { (fflush(
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h" 3 4
 stdout
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h"
 ), fprintf(
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h" 3 4
 stderr
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h"
 , "\33[1;31m" "invalid character '%c' in pattern string" "\33[0m" "\n", c)); extern FILE* log_fp; fflush(log_fp); extern void assert_fail_msg(); assert_fail_msg(); 
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h" 3 4
 ((void) sizeof ((
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h"
 c == '0' || c == '1' || c == '?'
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h" 3 4
 ) ? 1 : 0), __extension__ ({ if (
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h"
 c == '0' || c == '1' || c == '?'
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h" 3 4
 ) ; else __assert_fail (
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h"
 "c == '0' || c == '1' || c == '?'"
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h" 3 4
 , "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h", 53, __extension__ __PRETTY_FUNCTION__); }))
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h"
 ; } } while (0); __key = (__key << 1) | (c == '1' ? 1 : 0); __mask = (__mask << 1) | (c == '?' ? 0 : 1); __shift = (c == '?' ? __shift + 1 : 0); } }; if (((((0) + 32) + 8) + 1) >= len) goto finish; else { char c = str[(((0) + 32) + 8) + 1]; if (c != ' ') { do { if (!(c == '0' || c == '1' || c == '?')) { (fflush(
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h" 3 4
 stdout
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h"
 ), fprintf(
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h" 3 4
 stderr
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h"
 , "\33[1;31m" "invalid character '%c' in pattern string" "\33[0m" "\n", c)); extern FILE* log_fp; fflush(log_fp); extern void assert_fail_msg(); assert_fail_msg(); 
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h" 3 4
 ((void) sizeof ((
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h"
 c == '0' || c == '1' || c == '?'
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h" 3 4
 ) ? 1 : 0), __extension__ ({ if (
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h"
 c == '0' || c == '1' || c == '?'
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h" 3 4
 ) ; else __assert_fail (
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h"
 "c == '0' || c == '1' || c == '?'"
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h" 3 4
 , "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h", 53, __extension__ __PRETTY_FUNCTION__); }))
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h"
 ; } } while (0); __key = (__key << 1) | (c == '1' ? 1 : 0); __mask = (__mask << 1) | (c == '?' ? 0 : 1); __shift = (c == '?' ? __shift + 1 : 0); } }; if (((((0) + 32) + 8) + 2) >= len) goto finish; else { char c = str[(((0) + 32) + 8) + 2]; if (c != ' ') { do { if (!(c == '0' || c == '1' || c == '?')) { (fflush(
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h" 3 4
 stdout
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h"
 ), fprintf(
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h" 3 4
 stderr
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h"
 , "\33[1;31m" "invalid character '%c' in pattern string" "\33[0m" "\n", c)); extern FILE* log_fp; fflush(log_fp); extern void assert_fail_msg(); assert_fail_msg(); 
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h" 3 4
 ((void) sizeof ((
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h"
 c == '0' || c == '1' || c == '?'
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h" 3 4
 ) ? 1 : 0), __extension__ ({ if (
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h"
 c == '0' || c == '1' || c == '?'
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h" 3 4
 ) ; else __assert_fail (
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h"
 "c == '0' || c == '1' || c == '?'"
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h" 3 4
 , "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h", 53, __extension__ __PRETTY_FUNCTION__); }))
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h"
 ; } } while (0); __key = (__key << 1) | (c == '1' ? 1 : 0); __mask = (__mask << 1) | (c == '?' ? 0 : 1); __shift = (c == '?' ? __shift + 1 : 0); } }; if ((((((0) + 32) + 8) + 2) + 1) >= len) goto finish; else { char c = str[((((0) + 32) + 8) + 2) + 1]; if (c != ' ') { do { if (!(c == '0' || c == '1' || c == '?')) { (fflush(
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h" 3 4
 stdout
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h"
 ), fprintf(
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h" 3 4
 stderr
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h"
 , "\33[1;31m" "invalid character '%c' in pattern string" "\33[0m" "\n", c)); extern FILE* log_fp; fflush(log_fp); extern void assert_fail_msg(); assert_fail_msg(); 
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h" 3 4
 ((void) sizeof ((
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h"
 c == '0' || c == '1' || c == '?'
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h" 3 4
 ) ? 1 : 0), __extension__ ({ if (
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h"
 c == '0' || c == '1' || c == '?'
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h" 3 4
 ) ; else __assert_fail (
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h"
 "c == '0' || c == '1' || c == '?'"
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h" 3 4
 , "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h", 53, __extension__ __PRETTY_FUNCTION__); }))
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h"
 ; } } while (0); __key = (__key << 1) | (c == '1' ? 1 : 0); __mask = (__mask << 1) | (c == '?' ? 0 : 1); __shift = (c == '?' ? __shift + 1 : 0); } }; if (((((0) + 32) + 8) + 4) >= len) goto finish; else { char c = str[(((0) + 32) + 8) + 4]; if (c != ' ') { do { if (!(c == '0' || c == '1' || c == '?')) { (fflush(
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h" 3 4
 stdout
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h"
 ), fprintf(
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h" 3 4
 stderr
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h"
 , "\33[1;31m" "invalid character '%c' in pattern string" "\33[0m" "\n", c)); extern FILE* log_fp; fflush(log_fp); extern void assert_fail_msg(); assert_fail_msg(); 
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h" 3 4
 ((void) sizeof ((
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h"
 c == '0' || c == '1' || c == '?'
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h" 3 4
 ) ? 1 : 0), __extension__ ({ if (
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h"
 c == '0' || c == '1' || c == '?'
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h" 3 4
 ) ; else __assert_fail (
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h"
 "c == '0' || c == '1' || c == '?'"
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h" 3 4
 , "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h", 53, __extension__ __PRETTY_FUNCTION__); }))
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h"
 ; } } while (0); __key = (__key << 1) | (c == '1' ? 1 : 0); __mask = (__mask << 1) | (c == '?' ? 0 : 1); __shift = (c == '?' ? __shift + 1 : 0); } }; if ((((((0) + 32) + 8) + 4) + 1) >= len) goto finish; else { char c = str[((((0) + 32) + 8) + 4) + 1]; if (c != ' ') { do { if (!(c == '0' || c == '1' || c == '?')) { (fflush(
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h" 3 4
 stdout
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h"
 ), fprintf(
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h" 3 4
 stderr
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h"
 , "\33[1;31m" "invalid character '%c' in pattern string" "\33[0m" "\n", c)); extern FILE* log_fp; fflush(log_fp); extern void assert_fail_msg(); assert_fail_msg(); 
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h" 3 4
 ((void) sizeof ((
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h"
 c == '0' || c == '1' || c == '?'
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h" 3 4
 ) ? 1 : 0), __extension__ ({ if (
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h"
 c == '0' || c == '1' || c == '?'
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h" 3 4
 ) ; else __assert_fail (
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h"
 "c == '0' || c == '1' || c == '?'"
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h" 3 4
 , "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h", 53, __extension__ __PRETTY_FUNCTION__); }))
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h"
 ; } } while (0); __key = (__key << 1) | (c == '1' ? 1 : 0); __mask = (__mask << 1) | (c == '?' ? 0 : 1); __shift = (c == '?' ? __shift + 1 : 0); } }; if ((((((0) + 32) + 8) + 4) + 2) >= len) goto finish; else { char c = str[((((0) + 32) + 8) + 4) + 2]; if (c != ' ') { do { if (!(c == '0' || c == '1' || c == '?')) { (fflush(
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h" 3 4
 stdout
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h"
 ), fprintf(
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h" 3 4
 stderr
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h"
 , "\33[1;31m" "invalid character '%c' in pattern string" "\33[0m" "\n", c)); extern FILE* log_fp; fflush(log_fp); extern void assert_fail_msg(); assert_fail_msg(); 
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h" 3 4
 ((void) sizeof ((
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h"
 c == '0' || c == '1' || c == '?'
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h" 3 4
 ) ? 1 : 0), __extension__ ({ if (
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h"
 c == '0' || c == '1' || c == '?'
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h" 3 4
 ) ; else __assert_fail (
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h"
 "c == '0' || c == '1' || c == '?'"
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h" 3 4
 , "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h", 53, __extension__ __PRETTY_FUNCTION__); }))
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h"
 ; } } while (0); __key = (__key << 1) | (c == '1' ? 1 : 0); __mask = (__mask << 1) | (c == '?' ? 0 : 1); __shift = (c == '?' ? __shift + 1 : 0); } }; if (((((((0) + 32) + 8) + 4) + 2) + 1) >= len) goto finish; else { char c = str[(((((0) + 32) + 8) + 4) + 2) + 1]; if (c != ' ') { do { if (!(c == '0' || c == '1' || c == '?')) { (fflush(
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h" 3 4
 stdout
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h"
 ), fprintf(
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h" 3 4
 stderr
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h"
 , "\33[1;31m" "invalid character '%c' in pattern string" "\33[0m" "\n", c)); extern FILE* log_fp; fflush(log_fp); extern void assert_fail_msg(); assert_fail_msg(); 
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h" 3 4
 ((void) sizeof ((
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h"
 c == '0' || c == '1' || c == '?'
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h" 3 4
 ) ? 1 : 0), __extension__ ({ if (
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h"
 c == '0' || c == '1' || c == '?'
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h" 3 4
 ) ; else __assert_fail (
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h"
 "c == '0' || c == '1' || c == '?'"
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h" 3 4
 , "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h", 53, __extension__ __PRETTY_FUNCTION__); }))
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h"
 ; } } while (0); __key = (__key << 1) | (c == '1' ? 1 : 0); __mask = (__mask << 1) | (c == '?' ? 0 : 1); __shift = (c == '?' ? __shift + 1 : 0); } }; if ((((0) + 32) + 16) >= len) goto finish; else { char c = str[((0) + 32) + 16]; if (c != ' ') { do { if (!(c == '0' || c == '1' || c == '?')) { (fflush(
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h" 3 4
 stdout
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h"
 ), fprintf(
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h" 3 4
 stderr
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h"
 , "\33[1;31m" "invalid character '%c' in pattern string" "\33[0m" "\n", c)); extern FILE* log_fp; fflush(log_fp); extern void assert_fail_msg(); assert_fail_msg(); 
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h" 3 4
 ((void) sizeof ((
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h"
 c == '0' || c == '1' || c == '?'
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h" 3 4
 ) ? 1 : 0), __extension__ ({ if (
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h"
 c == '0' || c == '1' || c == '?'
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h" 3 4
 ) ; else __assert_fail (
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h"
 "c == '0' || c == '1' || c == '?'"
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h" 3 4
 , "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h", 53, __extension__ __PRETTY_FUNCTION__); }))
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h"
 ; } } while (0); __key = (__key << 1) | (c == '1' ? 1 : 0); __mask = (__mask << 1) | (c == '?' ? 0 : 1); __shift = (c == '?' ? __shift + 1 : 0); } }; if (((((0) + 32) + 16) + 1) >= len) goto finish; else { char c = str[(((0) + 32) + 16) + 1]; if (c != ' ') { do { if (!(c == '0' || c == '1' || c == '?')) { (fflush(
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h" 3 4
 stdout
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h"
 ), fprintf(
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h" 3 4
 stderr
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h"
 , "\33[1;31m" "invalid character '%c' in pattern string" "\33[0m" "\n", c)); extern FILE* log_fp; fflush(log_fp); extern void assert_fail_msg(); assert_fail_msg(); 
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h" 3 4
 ((void) sizeof ((
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h"
 c == '0' || c == '1' || c == '?'
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h" 3 4
 ) ? 1 : 0), __extension__ ({ if (
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h"
 c == '0' || c == '1' || c == '?'
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h" 3 4
 ) ; else __assert_fail (
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h"
 "c == '0' || c == '1' || c == '?'"
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h" 3 4
 , "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h", 53, __extension__ __PRETTY_FUNCTION__); }))
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h"
 ; } } while (0); __key = (__key << 1) | (c == '1' ? 1 : 0); __mask = (__mask << 1) | (c == '?' ? 0 : 1); __shift = (c == '?' ? __shift + 1 : 0); } }; if (((((0) + 32) + 16) + 2) >= len) goto finish; else { char c = str[(((0) + 32) + 16) + 2]; if (c != ' ') { do { if (!(c == '0' || c == '1' || c == '?')) { (fflush(
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h" 3 4
 stdout
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h"
 ), fprintf(
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h" 3 4
 stderr
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h"
 , "\33[1;31m" "invalid character '%c' in pattern string" "\33[0m" "\n", c)); extern FILE* log_fp; fflush(log_fp); extern void assert_fail_msg(); assert_fail_msg(); 
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h" 3 4
 ((void) sizeof ((
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h"
 c == '0' || c == '1' || c == '?'
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h" 3 4
 ) ? 1 : 0), __extension__ ({ if (
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h"
 c == '0' || c == '1' || c == '?'
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h" 3 4
 ) ; else __assert_fail (
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h"
 "c == '0' || c == '1' || c == '?'"
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h" 3 4
 , "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h", 53, __extension__ __PRETTY_FUNCTION__); }))
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h"
 ; } } while (0); __key = (__key << 1) | (c == '1' ? 1 : 0); __mask = (__mask << 1) | (c == '?' ? 0 : 1); __shift = (c == '?' ? __shift + 1 : 0); } }; if ((((((0) + 32) + 16) + 2) + 1) >= len) goto finish; else { char c = str[((((0) + 32) + 16) + 2) + 1]; if (c != ' ') { do { if (!(c == '0' || c == '1' || c == '?')) { (fflush(
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h" 3 4
 stdout
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h"
 ), fprintf(
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h" 3 4
 stderr
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h"
 , "\33[1;31m" "invalid character '%c' in pattern string" "\33[0m" "\n", c)); extern FILE* log_fp; fflush(log_fp); extern void assert_fail_msg(); assert_fail_msg(); 
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h" 3 4
 ((void) sizeof ((
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h"
 c == '0' || c == '1' || c == '?'
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h" 3 4
 ) ? 1 : 0), __extension__ ({ if (
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h"
 c == '0' || c == '1' || c == '?'
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h" 3 4
 ) ; else __assert_fail (
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h"
 "c == '0' || c == '1' || c == '?'"
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h" 3 4
 , "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h", 53, __extension__ __PRETTY_FUNCTION__); }))
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h"
 ; } } while (0); __key = (__key << 1) | (c == '1' ? 1 : 0); __mask = (__mask << 1) | (c == '?' ? 0 : 1); __shift = (c == '?' ? __shift + 1 : 0); } }; if (((((0) + 32) + 16) + 4) >= len) goto finish; else { char c = str[(((0) + 32) + 16) + 4]; if (c != ' ') { do { if (!(c == '0' || c == '1' || c == '?')) { (fflush(
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h" 3 4
 stdout
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h"
 ), fprintf(
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h" 3 4
 stderr
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h"
 , "\33[1;31m" "invalid character '%c' in pattern string" "\33[0m" "\n", c)); extern FILE* log_fp; fflush(log_fp); extern void assert_fail_msg(); assert_fail_msg(); 
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h" 3 4
 ((void) sizeof ((
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h"
 c == '0' || c == '1' || c == '?'
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h" 3 4
 ) ? 1 : 0), __extension__ ({ if (
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h"
 c == '0' || c == '1' || c == '?'
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h" 3 4
 ) ; else __assert_fail (
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h"
 "c == '0' || c == '1' || c == '?'"
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h" 3 4
 , "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h", 53, __extension__ __PRETTY_FUNCTION__); }))
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h"
 ; } } while (0); __key = (__key << 1) | (c == '1' ? 1 : 0); __mask = (__mask << 1) | (c == '?' ? 0 : 1); __shift = (c == '?' ? __shift + 1 : 0); } }; if ((((((0) + 32) + 16) + 4) + 1) >= len) goto finish; else { char c = str[((((0) + 32) + 16) + 4) + 1]; if (c != ' ') { do { if (!(c == '0' || c == '1' || c == '?')) { (fflush(
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h" 3 4
 stdout
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h"
 ), fprintf(
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h" 3 4
 stderr
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h"
 , "\33[1;31m" "invalid character '%c' in pattern string" "\33[0m" "\n", c)); extern FILE* log_fp; fflush(log_fp); extern void assert_fail_msg(); assert_fail_msg(); 
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h" 3 4
 ((void) sizeof ((
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h"
 c == '0' || c == '1' || c == '?'
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h" 3 4
 ) ? 1 : 0), __extension__ ({ if (
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h"
 c == '0' || c == '1' || c == '?'
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h" 3 4
 ) ; else __assert_fail (
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h"
 "c == '0' || c == '1' || c == '?'"
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h" 3 4
 , "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h", 53, __extension__ __PRETTY_FUNCTION__); }))
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h"
 ; } } while (0); __key = (__key << 1) | (c == '1' ? 1 : 0); __mask = (__mask << 1) | (c == '?' ? 0 : 1); __shift = (c == '?' ? __shift + 1 : 0); } }; if ((((((0) + 32) + 16) + 4) + 2) >= len) goto finish; else { char c = str[((((0) + 32) + 16) + 4) + 2]; if (c != ' ') { do { if (!(c == '0' || c == '1' || c == '?')) { (fflush(
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h" 3 4
 stdout
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h"
 ), fprintf(
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h" 3 4
 stderr
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h"
 , "\33[1;31m" "invalid character '%c' in pattern string" "\33[0m" "\n", c)); extern FILE* log_fp; fflush(log_fp); extern void assert_fail_msg(); assert_fail_msg(); 
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h" 3 4
 ((void) sizeof ((
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h"
 c == '0' || c == '1' || c == '?'
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h" 3 4
 ) ? 1 : 0), __extension__ ({ if (
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h"
 c == '0' || c == '1' || c == '?'
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h" 3 4
 ) ; else __assert_fail (
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h"
 "c == '0' || c == '1' || c == '?'"
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h" 3 4
 , "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h", 53, __extension__ __PRETTY_FUNCTION__); }))
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h"
 ; } } while (0); __key = (__key << 1) | (c == '1' ? 1 : 0); __mask = (__mask << 1) | (c == '?' ? 0 : 1); __shift = (c == '?' ? __shift + 1 : 0); } }; if (((((((0) + 32) + 16) + 4) + 2) + 1) >= len) goto finish; else { char c = str[(((((0) + 32) + 16) + 4) + 2) + 1]; if (c != ' ') { do { if (!(c == '0' || c == '1' || c == '?')) { (fflush(
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h" 3 4
 stdout
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h"
 ), fprintf(
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h" 3 4
 stderr
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h"
 , "\33[1;31m" "invalid character '%c' in pattern string" "\33[0m" "\n", c)); extern FILE* log_fp; fflush(log_fp); extern void assert_fail_msg(); assert_fail_msg(); 
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h" 3 4
 ((void) sizeof ((
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h"
 c == '0' || c == '1' || c == '?'
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h" 3 4
 ) ? 1 : 0), __extension__ ({ if (
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h"
 c == '0' || c == '1' || c == '?'
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h" 3 4
 ) ; else __assert_fail (
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h"
 "c == '0' || c == '1' || c == '?'"
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h" 3 4
 , "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h", 53, __extension__ __PRETTY_FUNCTION__); }))
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h"
 ; } } while (0); __key = (__key << 1) | (c == '1' ? 1 : 0); __mask = (__mask << 1) | (c == '?' ? 0 : 1); __shift = (c == '?' ? __shift + 1 : 0); } }; if (((((0) + 32) + 16) + 8) >= len) goto finish; else { char c = str[(((0) + 32) + 16) + 8]; if (c != ' ') { do { if (!(c == '0' || c == '1' || c == '?')) { (fflush(
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h" 3 4
 stdout
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h"
 ), fprintf(
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h" 3 4
 stderr
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h"
 , "\33[1;31m" "invalid character '%c' in pattern string" "\33[0m" "\n", c)); extern FILE* log_fp; fflush(log_fp); extern void assert_fail_msg(); assert_fail_msg(); 
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h" 3 4
 ((void) sizeof ((
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h"
 c == '0' || c == '1' || c == '?'
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h" 3 4
 ) ? 1 : 0), __extension__ ({ if (
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h"
 c == '0' || c == '1' || c == '?'
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h" 3 4
 ) ; else __assert_fail (
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h"
 "c == '0' || c == '1' || c == '?'"
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h" 3 4
 , "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h", 53, __extension__ __PRETTY_FUNCTION__); }))
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h"
 ; } } while (0); __key = (__key << 1) | (c == '1' ? 1 : 0); __mask = (__mask << 1) | (c == '?' ? 0 : 1); __shift = (c == '?' ? __shift + 1 : 0); } }; if ((((((0) + 32) + 16) + 8) + 1) >= len) goto finish; else { char c = str[((((0) + 32) + 16) + 8) + 1]; if (c != ' ') { do { if (!(c == '0' || c == '1' || c == '?')) { (fflush(
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h" 3 4
 stdout
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h"
 ), fprintf(
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h" 3 4
 stderr
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h"
 , "\33[1;31m" "invalid character '%c' in pattern string" "\33[0m" "\n", c)); extern FILE* log_fp; fflush(log_fp); extern void assert_fail_msg(); assert_fail_msg(); 
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h" 3 4
 ((void) sizeof ((
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h"
 c == '0' || c == '1' || c == '?'
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h" 3 4
 ) ? 1 : 0), __extension__ ({ if (
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h"
 c == '0' || c == '1' || c == '?'
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h" 3 4
 ) ; else __assert_fail (
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h"
 "c == '0' || c == '1' || c == '?'"
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h" 3 4
 , "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h", 53, __extension__ __PRETTY_FUNCTION__); }))
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h"
 ; } } while (0); __key = (__key << 1) | (c == '1' ? 1 : 0); __mask = (__mask << 1) | (c == '?' ? 0 : 1); __shift = (c == '?' ? __shift + 1 : 0); } }; if ((((((0) + 32) + 16) + 8) + 2) >= len) goto finish; else { char c = str[((((0) + 32) + 16) + 8) + 2]; if (c != ' ') { do { if (!(c == '0' || c == '1' || c == '?')) { (fflush(
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h" 3 4
 stdout
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h"
 ), fprintf(
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h" 3 4
 stderr
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h"
 , "\33[1;31m" "invalid character '%c' in pattern string" "\33[0m" "\n", c)); extern FILE* log_fp; fflush(log_fp); extern void assert_fail_msg(); assert_fail_msg(); 
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h" 3 4
 ((void) sizeof ((
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h"
 c == '0' || c == '1' || c == '?'
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h" 3 4
 ) ? 1 : 0), __extension__ ({ if (
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h"
 c == '0' || c == '1' || c == '?'
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h" 3 4
 ) ; else __assert_fail (
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h"
 "c == '0' || c == '1' || c == '?'"
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h" 3 4
 , "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h", 53, __extension__ __PRETTY_FUNCTION__); }))
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h"
 ; } } while (0); __key = (__key << 1) | (c == '1' ? 1 : 0); __mask = (__mask << 1) | (c == '?' ? 0 : 1); __shift = (c == '?' ? __shift + 1 : 0); } }; if (((((((0) + 32) + 16) + 8) + 2) + 1) >= len) goto finish; else { char c = str[(((((0) + 32) + 16) + 8) + 2) + 1]; if (c != ' ') { do { if (!(c == '0' || c == '1' || c == '?')) { (fflush(
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h" 3 4
 stdout
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h"
 ), fprintf(
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h" 3 4
 stderr
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h"
 , "\33[1;31m" "invalid character '%c' in pattern string" "\33[0m" "\n", c)); extern FILE* log_fp; fflush(log_fp); extern void assert_fail_msg(); assert_fail_msg(); 
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h" 3 4
 ((void) sizeof ((
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h"
 c == '0' || c == '1' || c == '?'
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h" 3 4
 ) ? 1 : 0), __extension__ ({ if (
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h"
 c == '0' || c == '1' || c == '?'
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h" 3 4
 ) ; else __assert_fail (
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h"
 "c == '0' || c == '1' || c == '?'"
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h" 3 4
 , "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h", 53, __extension__ __PRETTY_FUNCTION__); }))
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h"
 ; } } while (0); __key = (__key << 1) | (c == '1' ? 1 : 0); __mask = (__mask << 1) | (c == '?' ? 0 : 1); __shift = (c == '?' ? __shift + 1 : 0); } }; if ((((((0) + 32) + 16) + 8) + 4) >= len) goto finish; else { char c = str[((((0) + 32) + 16) + 8) + 4]; if (c != ' ') { do { if (!(c == '0' || c == '1' || c == '?')) { (fflush(
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h" 3 4
 stdout
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h"
 ), fprintf(
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h" 3 4
 stderr
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h"
 , "\33[1;31m" "invalid character '%c' in pattern string" "\33[0m" "\n", c)); extern FILE* log_fp; fflush(log_fp); extern void assert_fail_msg(); assert_fail_msg(); 
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h" 3 4
 ((void) sizeof ((
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h"
 c == '0' || c == '1' || c == '?'
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h" 3 4
 ) ? 1 : 0), __extension__ ({ if (
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h"
 c == '0' || c == '1' || c == '?'
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h" 3 4
 ) ; else __assert_fail (
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h"
 "c == '0' || c == '1' || c == '?'"
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h" 3 4
 , "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h", 53, __extension__ __PRETTY_FUNCTION__); }))
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h"
 ; } } while (0); __key = (__key << 1) | (c == '1' ? 1 : 0); __mask = (__mask << 1) | (c == '?' ? 0 : 1); __shift = (c == '?' ? __shift + 1 : 0); } }; if (((((((0) + 32) + 16) + 8) + 4) + 1) >= len) goto finish; else { char c = str[(((((0) + 32) + 16) + 8) + 4) + 1]; if (c != ' ') { do { if (!(c == '0' || c == '1' || c == '?')) { (fflush(
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h" 3 4
 stdout
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h"
 ), fprintf(
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h" 3 4
 stderr
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h"
 , "\33[1;31m" "invalid character '%c' in pattern string" "\33[0m" "\n", c)); extern FILE* log_fp; fflush(log_fp); extern void assert_fail_msg(); assert_fail_msg(); 
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h" 3 4
 ((void) sizeof ((
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h"
 c == '0' || c == '1' || c == '?'
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h" 3 4
 ) ? 1 : 0), __extension__ ({ if (
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h"
 c == '0' || c == '1' || c == '?'
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h" 3 4
 ) ; else __assert_fail (
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h"
 "c == '0' || c == '1' || c == '?'"
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h" 3 4
 , "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h", 53, __extension__ __PRETTY_FUNCTION__); }))
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h"
 ; } } while (0); __key = (__key << 1) | (c == '1' ? 1 : 0); __mask = (__mask << 1) | (c == '?' ? 0 : 1); __shift = (c == '?' ? __shift + 1 : 0); } }; if (((((((0) + 32) + 16) + 8) + 4) + 2) >= len) goto finish; else { char c = str[(((((0) + 32) + 16) + 8) + 4) + 2]; if (c != ' ') { do { if (!(c == '0' || c == '1' || c == '?')) { (fflush(
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h" 3 4
 stdout
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h"
 ), fprintf(
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h" 3 4
 stderr
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h"
 , "\33[1;31m" "invalid character '%c' in pattern string" "\33[0m" "\n", c)); extern FILE* log_fp; fflush(log_fp); extern void assert_fail_msg(); assert_fail_msg(); 
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h" 3 4
 ((void) sizeof ((
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h"
 c == '0' || c == '1' || c == '?'
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h" 3 4
 ) ? 1 : 0), __extension__ ({ if (
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h"
 c == '0' || c == '1' || c == '?'
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h" 3 4
 ) ; else __assert_fail (
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h"
 "c == '0' || c == '1' || c == '?'"
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h" 3 4
 , "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h", 53, __extension__ __PRETTY_FUNCTION__); }))
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h"
 ; } } while (0); __key = (__key << 1) | (c == '1' ? 1 : 0); __mask = (__mask << 1) | (c == '?' ? 0 : 1); __shift = (c == '?' ? __shift + 1 : 0); } }; if ((((((((0) + 32) + 16) + 8) + 4) + 2) + 1) >= len) goto finish; else { char c = str[((((((0) + 32) + 16) + 8) + 4) + 2) + 1]; if (c != ' ') { do { if (!(c == '0' || c == '1' || c == '?')) { (fflush(
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h" 3 4
 stdout
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h"
 ), fprintf(
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h" 3 4
 stderr
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h"
 , "\33[1;31m" "invalid character '%c' in pattern string" "\33[0m" "\n", c)); extern FILE* log_fp; fflush(log_fp); extern void assert_fail_msg(); assert_fail_msg(); 
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h" 3 4
 ((void) sizeof ((
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h"
 c == '0' || c == '1' || c == '?'
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h" 3 4
 ) ? 1 : 0), __extension__ ({ if (
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h"
 c == '0' || c == '1' || c == '?'
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h" 3 4
 ) ; else __assert_fail (
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h"
 "c == '0' || c == '1' || c == '?'"
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h" 3 4
 , "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h", 53, __extension__ __PRETTY_FUNCTION__); }))
# 53 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h"
 ; } } while (0); __key = (__key << 1) | (c == '1' ? 1 : 0); __mask = (__mask << 1) | (c == '?' ? 0 : 1); __shift = (c == '?' ? __shift + 1 : 0); } };
  do { if (!(0)) { (fflush(
# 54 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h" 3 4
 stdout
# 54 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h"
 ), fprintf(
# 54 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h" 3 4
 stderr
# 54 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h"
 , "\33[1;31m" "pattern too long" "\33[0m" "\n")); extern FILE* log_fp; fflush(log_fp); extern void assert_fail_msg(); assert_fail_msg(); 
# 54 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h" 3 4
 ((void) sizeof ((
# 54 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h"
 0
# 54 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h" 3 4
 ) ? 1 : 0), __extension__ ({ if (
# 54 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h"
 0
# 54 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h" 3 4
 ) ; else __assert_fail (
# 54 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h"
 "0"
# 54 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h" 3 4
 , "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h", 54, __extension__ __PRETTY_FUNCTION__); }))
# 54 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h"
 ; } } while (0);

finish:
  *key = __key >> __shift;
  *mask = __mask >> __shift;
  *shift = __shift;
}

__attribute__((always_inline))
static inline void pattern_decode_hex(const char *str, int len,
    uint64_t *key, uint64_t *mask, uint64_t *shift) {
  uint64_t __key = 0, __mask = 0, __shift = 0;
# 79 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h"
  if ((0) >= len) goto finish; else { char c = str[0]; if (c != ' ') { do { if (!((c >= '0' && c <= '9') || (c >= 'a' && c <= 'f') || c == '?')) { (fflush(
# 79 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h" 3 4
 stdout
# 79 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h"
 ), fprintf(
# 79 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h" 3 4
 stderr
# 79 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h"
 , "\33[1;31m" "invalid character '%c' in pattern string" "\33[0m" "\n", c)); extern FILE* log_fp; fflush(log_fp); extern void assert_fail_msg(); assert_fail_msg(); 
# 79 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h" 3 4
 ((void) sizeof ((
# 79 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h"
 (c >= '0' && c <= '9') || (c >= 'a' && c <= 'f') || c == '?'
# 79 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h" 3 4
 ) ? 1 : 0), __extension__ ({ if (
# 79 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h"
 (c >= '0' && c <= '9') || (c >= 'a' && c <= 'f') || c == '?'
# 79 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h" 3 4
 ) ; else __assert_fail (
# 79 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h"
 "(c >= '0' && c <= '9') || (c >= 'a' && c <= 'f') || c == '?'"
# 79 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h" 3 4
 , "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h", 79, __extension__ __PRETTY_FUNCTION__); }))
# 79 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h"
 ; } } while (0); __key = (__key << 4) | (c == '?' ? 0 : (c >= '0' && c <= '9') ? c - '0' : c - 'a' + 10); __mask = (__mask << 4) | (c == '?' ? 0 : 0xf); __shift = (c == '?' ? __shift + 4 : 0); } }; if (((0) + 1) >= len) goto finish; else { char c = str[(0) + 1]; if (c != ' ') { do { if (!((c >= '0' && c <= '9') || (c >= 'a' && c <= 'f') || c == '?')) { (fflush(
# 79 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h" 3 4
 stdout
# 79 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h"
 ), fprintf(
# 79 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h" 3 4
 stderr
# 79 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h"
 , "\33[1;31m" "invalid character '%c' in pattern string" "\33[0m" "\n", c)); extern FILE* log_fp; fflush(log_fp); extern void assert_fail_msg(); assert_fail_msg(); 
# 79 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h" 3 4
 ((void) sizeof ((
# 79 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h"
 (c >= '0' && c <= '9') || (c >= 'a' && c <= 'f') || c == '?'
# 79 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h" 3 4
 ) ? 1 : 0), __extension__ ({ if (
# 79 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h"
 (c >= '0' && c <= '9') || (c >= 'a' && c <= 'f') || c == '?'
# 79 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h" 3 4
 ) ; else __assert_fail (
# 79 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h"
 "(c >= '0' && c <= '9') || (c >= 'a' && c <= 'f') || c == '?'"
# 79 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h" 3 4
 , "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h", 79, __extension__ __PRETTY_FUNCTION__); }))
# 79 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h"
 ; } } while (0); __key = (__key << 4) | (c == '?' ? 0 : (c >= '0' && c <= '9') ? c - '0' : c - 'a' + 10); __mask = (__mask << 4) | (c == '?' ? 0 : 0xf); __shift = (c == '?' ? __shift + 4 : 0); } }; if (((0) + 2) >= len) goto finish; else { char c = str[(0) + 2]; if (c != ' ') { do { if (!((c >= '0' && c <= '9') || (c >= 'a' && c <= 'f') || c == '?')) { (fflush(
# 79 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h" 3 4
 stdout
# 79 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h"
 ), fprintf(
# 79 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h" 3 4
 stderr
# 79 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h"
 , "\33[1;31m" "invalid character '%c' in pattern string" "\33[0m" "\n", c)); extern FILE* log_fp; fflush(log_fp); extern void assert_fail_msg(); assert_fail_msg(); 
# 79 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h" 3 4
 ((void) sizeof ((
# 79 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h"
 (c >= '0' && c <= '9') || (c >= 'a' && c <= 'f') || c == '?'
# 79 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h" 3 4
 ) ? 1 : 0), __extension__ ({ if (
# 79 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h"
 (c >= '0' && c <= '9') || (c >= 'a' && c <= 'f') || c == '?'
# 79 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h" 3 4
 ) ; else __assert_fail (
# 79 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h"
 "(c >= '0' && c <= '9') || (c >= 'a' && c <= 'f') || c == '?'"
# 79 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h" 3 4
 , "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h", 79, __extension__ __PRETTY_FUNCTION__); }))
# 79 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h"
 ; } } while (0); __key = (__key << 4) | (c == '?' ? 0 : (c >= '0' && c <= '9') ? c - '0' : c - 'a' + 10); __mask = (__mask << 4) | (c == '?' ? 0 : 0xf); __shift = (c == '?' ? __shift + 4 : 0); } }; if ((((0) + 2) + 1) >= len) goto finish; else { char c = str[((0) + 2) + 1]; if (c != ' ') { do { if (!((c >= '0' && c <= '9') || (c >= 'a' && c <= 'f') || c == '?')) { (fflush(
# 79 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h" 3 4
 stdout
# 79 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h"
 ), fprintf(
# 79 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h" 3 4
 stderr
# 79 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h"
 , "\33[1;31m" "invalid character '%c' in pattern string" "\33[0m" "\n", c)); extern FILE* log_fp; fflush(log_fp); extern void assert_fail_msg(); assert_fail_msg(); 
# 79 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h" 3 4
 ((void) sizeof ((
# 79 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h"
 (c >= '0' && c <= '9') || (c >= 'a' && c <= 'f') || c == '?'
# 79 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h" 3 4
 ) ? 1 : 0), __extension__ ({ if (
# 79 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h"
 (c >= '0' && c <= '9') || (c >= 'a' && c <= 'f') || c == '?'
# 79 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h" 3 4
 ) ; else __assert_fail (
# 79 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h"
 "(c >= '0' && c <= '9') || (c >= 'a' && c <= 'f') || c == '?'"
# 79 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h" 3 4
 , "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h", 79, __extension__ __PRETTY_FUNCTION__); }))
# 79 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h"
 ; } } while (0); __key = (__key << 4) | (c == '?' ? 0 : (c >= '0' && c <= '9') ? c - '0' : c - 'a' + 10); __mask = (__mask << 4) | (c == '?' ? 0 : 0xf); __shift = (c == '?' ? __shift + 4 : 0); } }; if (((0) + 4) >= len) goto finish; else { char c = str[(0) + 4]; if (c != ' ') { do { if (!((c >= '0' && c <= '9') || (c >= 'a' && c <= 'f') || c == '?')) { (fflush(
# 79 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h" 3 4
 stdout
# 79 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h"
 ), fprintf(
# 79 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h" 3 4
 stderr
# 79 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h"
 , "\33[1;31m" "invalid character '%c' in pattern string" "\33[0m" "\n", c)); extern FILE* log_fp; fflush(log_fp); extern void assert_fail_msg(); assert_fail_msg(); 
# 79 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h" 3 4
 ((void) sizeof ((
# 79 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h"
 (c >= '0' && c <= '9') || (c >= 'a' && c <= 'f') || c == '?'
# 79 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h" 3 4
 ) ? 1 : 0), __extension__ ({ if (
# 79 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h"
 (c >= '0' && c <= '9') || (c >= 'a' && c <= 'f') || c == '?'
# 79 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h" 3 4
 ) ; else __assert_fail (
# 79 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h"
 "(c >= '0' && c <= '9') || (c >= 'a' && c <= 'f') || c == '?'"
# 79 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h" 3 4
 , "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h", 79, __extension__ __PRETTY_FUNCTION__); }))
# 79 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h"
 ; } } while (0); __key = (__key << 4) | (c == '?' ? 0 : (c >= '0' && c <= '9') ? c - '0' : c - 'a' + 10); __mask = (__mask << 4) | (c == '?' ? 0 : 0xf); __shift = (c == '?' ? __shift + 4 : 0); } }; if ((((0) + 4) + 1) >= len) goto finish; else { char c = str[((0) + 4) + 1]; if (c != ' ') { do { if (!((c >= '0' && c <= '9') || (c >= 'a' && c <= 'f') || c == '?')) { (fflush(
# 79 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h" 3 4
 stdout
# 79 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h"
 ), fprintf(
# 79 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h" 3 4
 stderr
# 79 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h"
 , "\33[1;31m" "invalid character '%c' in pattern string" "\33[0m" "\n", c)); extern FILE* log_fp; fflush(log_fp); extern void assert_fail_msg(); assert_fail_msg(); 
# 79 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h" 3 4
 ((void) sizeof ((
# 79 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h"
 (c >= '0' && c <= '9') || (c >= 'a' && c <= 'f') || c == '?'
# 79 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h" 3 4
 ) ? 1 : 0), __extension__ ({ if (
# 79 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h"
 (c >= '0' && c <= '9') || (c >= 'a' && c <= 'f') || c == '?'
# 79 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h" 3 4
 ) ; else __assert_fail (
# 79 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h"
 "(c >= '0' && c <= '9') || (c >= 'a' && c <= 'f') || c == '?'"
# 79 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h" 3 4
 , "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h", 79, __extension__ __PRETTY_FUNCTION__); }))
# 79 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h"
 ; } } while (0); __key = (__key << 4) | (c == '?' ? 0 : (c >= '0' && c <= '9') ? c - '0' : c - 'a' + 10); __mask = (__mask << 4) | (c == '?' ? 0 : 0xf); __shift = (c == '?' ? __shift + 4 : 0); } }; if ((((0) + 4) + 2) >= len) goto finish; else { char c = str[((0) + 4) + 2]; if (c != ' ') { do { if (!((c >= '0' && c <= '9') || (c >= 'a' && c <= 'f') || c == '?')) { (fflush(
# 79 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h" 3 4
 stdout
# 79 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h"
 ), fprintf(
# 79 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h" 3 4
 stderr
# 79 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h"
 , "\33[1;31m" "invalid character '%c' in pattern string" "\33[0m" "\n", c)); extern FILE* log_fp; fflush(log_fp); extern void assert_fail_msg(); assert_fail_msg(); 
# 79 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h" 3 4
 ((void) sizeof ((
# 79 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h"
 (c >= '0' && c <= '9') || (c >= 'a' && c <= 'f') || c == '?'
# 79 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h" 3 4
 ) ? 1 : 0), __extension__ ({ if (
# 79 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h"
 (c >= '0' && c <= '9') || (c >= 'a' && c <= 'f') || c == '?'
# 79 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h" 3 4
 ) ; else __assert_fail (
# 79 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h"
 "(c >= '0' && c <= '9') || (c >= 'a' && c <= 'f') || c == '?'"
# 79 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h" 3 4
 , "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h", 79, __extension__ __PRETTY_FUNCTION__); }))
# 79 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h"
 ; } } while (0); __key = (__key << 4) | (c == '?' ? 0 : (c >= '0' && c <= '9') ? c - '0' : c - 'a' + 10); __mask = (__mask << 4) | (c == '?' ? 0 : 0xf); __shift = (c == '?' ? __shift + 4 : 0); } }; if (((((0) + 4) + 2) + 1) >= len) goto finish; else { char c = str[(((0) + 4) + 2) + 1]; if (c != ' ') { do { if (!((c >= '0' && c <= '9') || (c >= 'a' && c <= 'f') || c == '?')) { (fflush(
# 79 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h" 3 4
 stdout
# 79 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h"
 ), fprintf(
# 79 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h" 3 4
 stderr
# 79 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h"
 , "\33[1;31m" "invalid character '%c' in pattern string" "\33[0m" "\n", c)); extern FILE* log_fp; fflush(log_fp); extern void assert_fail_msg(); assert_fail_msg(); 
# 79 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h" 3 4
 ((void) sizeof ((
# 79 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h"
 (c >= '0' && c <= '9') || (c >= 'a' && c <= 'f') || c == '?'
# 79 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h" 3 4
 ) ? 1 : 0), __extension__ ({ if (
# 79 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h"
 (c >= '0' && c <= '9') || (c >= 'a' && c <= 'f') || c == '?'
# 79 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h" 3 4
 ) ; else __assert_fail (
# 79 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h"
 "(c >= '0' && c <= '9') || (c >= 'a' && c <= 'f') || c == '?'"
# 79 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h" 3 4
 , "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h", 79, __extension__ __PRETTY_FUNCTION__); }))
# 79 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h"
 ; } } while (0); __key = (__key << 4) | (c == '?' ? 0 : (c >= '0' && c <= '9') ? c - '0' : c - 'a' + 10); __mask = (__mask << 4) | (c == '?' ? 0 : 0xf); __shift = (c == '?' ? __shift + 4 : 0); } }; if (((0) + 8) >= len) goto finish; else { char c = str[(0) + 8]; if (c != ' ') { do { if (!((c >= '0' && c <= '9') || (c >= 'a' && c <= 'f') || c == '?')) { (fflush(
# 79 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h" 3 4
 stdout
# 79 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h"
 ), fprintf(
# 79 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h" 3 4
 stderr
# 79 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h"
 , "\33[1;31m" "invalid character '%c' in pattern string" "\33[0m" "\n", c)); extern FILE* log_fp; fflush(log_fp); extern void assert_fail_msg(); assert_fail_msg(); 
# 79 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h" 3 4
 ((void) sizeof ((
# 79 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h"
 (c >= '0' && c <= '9') || (c >= 'a' && c <= 'f') || c == '?'
# 79 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h" 3 4
 ) ? 1 : 0), __extension__ ({ if (
# 79 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h"
 (c >= '0' && c <= '9') || (c >= 'a' && c <= 'f') || c == '?'
# 79 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h" 3 4
 ) ; else __assert_fail (
# 79 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h"
 "(c >= '0' && c <= '9') || (c >= 'a' && c <= 'f') || c == '?'"
# 79 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h" 3 4
 , "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h", 79, __extension__ __PRETTY_FUNCTION__); }))
# 79 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h"
 ; } } while (0); __key = (__key << 4) | (c == '?' ? 0 : (c >= '0' && c <= '9') ? c - '0' : c - 'a' + 10); __mask = (__mask << 4) | (c == '?' ? 0 : 0xf); __shift = (c == '?' ? __shift + 4 : 0); } }; if ((((0) + 8) + 1) >= len) goto finish; else { char c = str[((0) + 8) + 1]; if (c != ' ') { do { if (!((c >= '0' && c <= '9') || (c >= 'a' && c <= 'f') || c == '?')) { (fflush(
# 79 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h" 3 4
 stdout
# 79 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h"
 ), fprintf(
# 79 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h" 3 4
 stderr
# 79 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h"
 , "\33[1;31m" "invalid character '%c' in pattern string" "\33[0m" "\n", c)); extern FILE* log_fp; fflush(log_fp); extern void assert_fail_msg(); assert_fail_msg(); 
# 79 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h" 3 4
 ((void) sizeof ((
# 79 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h"
 (c >= '0' && c <= '9') || (c >= 'a' && c <= 'f') || c == '?'
# 79 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h" 3 4
 ) ? 1 : 0), __extension__ ({ if (
# 79 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h"
 (c >= '0' && c <= '9') || (c >= 'a' && c <= 'f') || c == '?'
# 79 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h" 3 4
 ) ; else __assert_fail (
# 79 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h"
 "(c >= '0' && c <= '9') || (c >= 'a' && c <= 'f') || c == '?'"
# 79 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h" 3 4
 , "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h", 79, __extension__ __PRETTY_FUNCTION__); }))
# 79 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h"
 ; } } while (0); __key = (__key << 4) | (c == '?' ? 0 : (c >= '0' && c <= '9') ? c - '0' : c - 'a' + 10); __mask = (__mask << 4) | (c == '?' ? 0 : 0xf); __shift = (c == '?' ? __shift + 4 : 0); } }; if ((((0) + 8) + 2) >= len) goto finish; else { char c = str[((0) + 8) + 2]; if (c != ' ') { do { if (!((c >= '0' && c <= '9') || (c >= 'a' && c <= 'f') || c == '?')) { (fflush(
# 79 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h" 3 4
 stdout
# 79 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h"
 ), fprintf(
# 79 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h" 3 4
 stderr
# 79 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h"
 , "\33[1;31m" "invalid character '%c' in pattern string" "\33[0m" "\n", c)); extern FILE* log_fp; fflush(log_fp); extern void assert_fail_msg(); assert_fail_msg(); 
# 79 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h" 3 4
 ((void) sizeof ((
# 79 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h"
 (c >= '0' && c <= '9') || (c >= 'a' && c <= 'f') || c == '?'
# 79 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h" 3 4
 ) ? 1 : 0), __extension__ ({ if (
# 79 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h"
 (c >= '0' && c <= '9') || (c >= 'a' && c <= 'f') || c == '?'
# 79 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h" 3 4
 ) ; else __assert_fail (
# 79 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h"
 "(c >= '0' && c <= '9') || (c >= 'a' && c <= 'f') || c == '?'"
# 79 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h" 3 4
 , "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h", 79, __extension__ __PRETTY_FUNCTION__); }))
# 79 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h"
 ; } } while (0); __key = (__key << 4) | (c == '?' ? 0 : (c >= '0' && c <= '9') ? c - '0' : c - 'a' + 10); __mask = (__mask << 4) | (c == '?' ? 0 : 0xf); __shift = (c == '?' ? __shift + 4 : 0); } }; if (((((0) + 8) + 2) + 1) >= len) goto finish; else { char c = str[(((0) + 8) + 2) + 1]; if (c != ' ') { do { if (!((c >= '0' && c <= '9') || (c >= 'a' && c <= 'f') || c == '?')) { (fflush(
# 79 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h" 3 4
 stdout
# 79 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h"
 ), fprintf(
# 79 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h" 3 4
 stderr
# 79 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h"
 , "\33[1;31m" "invalid character '%c' in pattern string" "\33[0m" "\n", c)); extern FILE* log_fp; fflush(log_fp); extern void assert_fail_msg(); assert_fail_msg(); 
# 79 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h" 3 4
 ((void) sizeof ((
# 79 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h"
 (c >= '0' && c <= '9') || (c >= 'a' && c <= 'f') || c == '?'
# 79 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h" 3 4
 ) ? 1 : 0), __extension__ ({ if (
# 79 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h"
 (c >= '0' && c <= '9') || (c >= 'a' && c <= 'f') || c == '?'
# 79 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h" 3 4
 ) ; else __assert_fail (
# 79 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h"
 "(c >= '0' && c <= '9') || (c >= 'a' && c <= 'f') || c == '?'"
# 79 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h" 3 4
 , "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h", 79, __extension__ __PRETTY_FUNCTION__); }))
# 79 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h"
 ; } } while (0); __key = (__key << 4) | (c == '?' ? 0 : (c >= '0' && c <= '9') ? c - '0' : c - 'a' + 10); __mask = (__mask << 4) | (c == '?' ? 0 : 0xf); __shift = (c == '?' ? __shift + 4 : 0); } }; if ((((0) + 8) + 4) >= len) goto finish; else { char c = str[((0) + 8) + 4]; if (c != ' ') { do { if (!((c >= '0' && c <= '9') || (c >= 'a' && c <= 'f') || c == '?')) { (fflush(
# 79 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h" 3 4
 stdout
# 79 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h"
 ), fprintf(
# 79 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h" 3 4
 stderr
# 79 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h"
 , "\33[1;31m" "invalid character '%c' in pattern string" "\33[0m" "\n", c)); extern FILE* log_fp; fflush(log_fp); extern void assert_fail_msg(); assert_fail_msg(); 
# 79 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h" 3 4
 ((void) sizeof ((
# 79 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h"
 (c >= '0' && c <= '9') || (c >= 'a' && c <= 'f') || c == '?'
# 79 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h" 3 4
 ) ? 1 : 0), __extension__ ({ if (
# 79 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h"
 (c >= '0' && c <= '9') || (c >= 'a' && c <= 'f') || c == '?'
# 79 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h" 3 4
 ) ; else __assert_fail (
# 79 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h"
 "(c >= '0' && c <= '9') || (c >= 'a' && c <= 'f') || c == '?'"
# 79 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h" 3 4
 , "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h", 79, __extension__ __PRETTY_FUNCTION__); }))
# 79 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h"
 ; } } while (0); __key = (__key << 4) | (c == '?' ? 0 : (c >= '0' && c <= '9') ? c - '0' : c - 'a' + 10); __mask = (__mask << 4) | (c == '?' ? 0 : 0xf); __shift = (c == '?' ? __shift + 4 : 0); } }; if (((((0) + 8) + 4) + 1) >= len) goto finish; else { char c = str[(((0) + 8) + 4) + 1]; if (c != ' ') { do { if (!((c >= '0' && c <= '9') || (c >= 'a' && c <= 'f') || c == '?')) { (fflush(
# 79 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h" 3 4
 stdout
# 79 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h"
 ), fprintf(
# 79 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h" 3 4
 stderr
# 79 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h"
 , "\33[1;31m" "invalid character '%c' in pattern string" "\33[0m" "\n", c)); extern FILE* log_fp; fflush(log_fp); extern void assert_fail_msg(); assert_fail_msg(); 
# 79 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h" 3 4
 ((void) sizeof ((
# 79 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h"
 (c >= '0' && c <= '9') || (c >= 'a' && c <= 'f') || c == '?'
# 79 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h" 3 4
 ) ? 1 : 0), __extension__ ({ if (
# 79 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h"
 (c >= '0' && c <= '9') || (c >= 'a' && c <= 'f') || c == '?'
# 79 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h" 3 4
 ) ; else __assert_fail (
# 79 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h"
 "(c >= '0' && c <= '9') || (c >= 'a' && c <= 'f') || c == '?'"
# 79 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h" 3 4
 , "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h", 79, __extension__ __PRETTY_FUNCTION__); }))
# 79 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h"
 ; } } while (0); __key = (__key << 4) | (c == '?' ? 0 : (c >= '0' && c <= '9') ? c - '0' : c - 'a' + 10); __mask = (__mask << 4) | (c == '?' ? 0 : 0xf); __shift = (c == '?' ? __shift + 4 : 0); } }; if (((((0) + 8) + 4) + 2) >= len) goto finish; else { char c = str[(((0) + 8) + 4) + 2]; if (c != ' ') { do { if (!((c >= '0' && c <= '9') || (c >= 'a' && c <= 'f') || c == '?')) { (fflush(
# 79 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h" 3 4
 stdout
# 79 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h"
 ), fprintf(
# 79 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h" 3 4
 stderr
# 79 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h"
 , "\33[1;31m" "invalid character '%c' in pattern string" "\33[0m" "\n", c)); extern FILE* log_fp; fflush(log_fp); extern void assert_fail_msg(); assert_fail_msg(); 
# 79 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h" 3 4
 ((void) sizeof ((
# 79 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h"
 (c >= '0' && c <= '9') || (c >= 'a' && c <= 'f') || c == '?'
# 79 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h" 3 4
 ) ? 1 : 0), __extension__ ({ if (
# 79 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h"
 (c >= '0' && c <= '9') || (c >= 'a' && c <= 'f') || c == '?'
# 79 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h" 3 4
 ) ; else __assert_fail (
# 79 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h"
 "(c >= '0' && c <= '9') || (c >= 'a' && c <= 'f') || c == '?'"
# 79 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h" 3 4
 , "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h", 79, __extension__ __PRETTY_FUNCTION__); }))
# 79 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h"
 ; } } while (0); __key = (__key << 4) | (c == '?' ? 0 : (c >= '0' && c <= '9') ? c - '0' : c - 'a' + 10); __mask = (__mask << 4) | (c == '?' ? 0 : 0xf); __shift = (c == '?' ? __shift + 4 : 0); } }; if ((((((0) + 8) + 4) + 2) + 1) >= len) goto finish; else { char c = str[((((0) + 8) + 4) + 2) + 1]; if (c != ' ') { do { if (!((c >= '0' && c <= '9') || (c >= 'a' && c <= 'f') || c == '?')) { (fflush(
# 79 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h" 3 4
 stdout
# 79 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h"
 ), fprintf(
# 79 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h" 3 4
 stderr
# 79 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h"
 , "\33[1;31m" "invalid character '%c' in pattern string" "\33[0m" "\n", c)); extern FILE* log_fp; fflush(log_fp); extern void assert_fail_msg(); assert_fail_msg(); 
# 79 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h" 3 4
 ((void) sizeof ((
# 79 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h"
 (c >= '0' && c <= '9') || (c >= 'a' && c <= 'f') || c == '?'
# 79 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h" 3 4
 ) ? 1 : 0), __extension__ ({ if (
# 79 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h"
 (c >= '0' && c <= '9') || (c >= 'a' && c <= 'f') || c == '?'
# 79 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h" 3 4
 ) ; else __assert_fail (
# 79 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h"
 "(c >= '0' && c <= '9') || (c >= 'a' && c <= 'f') || c == '?'"
# 79 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h" 3 4
 , "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h", 79, __extension__ __PRETTY_FUNCTION__); }))
# 79 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h"
 ; } } while (0); __key = (__key << 4) | (c == '?' ? 0 : (c >= '0' && c <= '9') ? c - '0' : c - 'a' + 10); __mask = (__mask << 4) | (c == '?' ? 0 : 0xf); __shift = (c == '?' ? __shift + 4 : 0); } };
  do { if (!(0)) { (fflush(
# 80 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h" 3 4
 stdout
# 80 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h"
 ), fprintf(
# 80 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h" 3 4
 stderr
# 80 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h"
 , "\33[1;31m" "pattern too long" "\33[0m" "\n")); extern FILE* log_fp; fflush(log_fp); extern void assert_fail_msg(); assert_fail_msg(); 
# 80 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h" 3 4
 ((void) sizeof ((
# 80 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h"
 0
# 80 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h" 3 4
 ) ? 1 : 0), __extension__ ({ if (
# 80 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h"
 0
# 80 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h" 3 4
 ) ; else __assert_fail (
# 80 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h"
 "0"
# 80 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h" 3 4
 , "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h", 80, __extension__ __PRETTY_FUNCTION__); }))
# 80 "/home/yangli/ysyx-workbench/nemu/include/cpu/decode.h"
 ; } } while (0);

finish:
  *key = __key >> __shift;
  *mask = __mask >> __shift;
  *shift = __shift;
}
# 20 "src/isa/riscv64/inst.c" 2





enum {
  TYPE_I, TYPE_U, TYPE_S,
  TYPE_N,
  TYPE_J,
  TYPE_RI,
  TYPE_B,
};
# 47 "src/isa/riscv64/inst.c"
void log_ftrace(paddr_t addr,
# 47 "src/isa/riscv64/inst.c" 3 4
                            _Bool 
# 47 "src/isa/riscv64/inst.c"
                                 jarlflag, int rd ,word_t imm, int rs1,word_t src1);
static void decode_operand(Decode *s, int *dest, word_t *src1, word_t *src2, word_t *imm, int type) {
  uint32_t i = s->isa.inst.val;
  int rd = (((i) >> (7)) & ((1ull << ((11) - (7) + 1)) - 1));
  int rs1 = (((i) >> (15)) & ((1ull << ((19) - (15) + 1)) - 1));
  int rs2 = (((i) >> (20)) & ((1ull << ((24) - (20) + 1)) - 1));

  *dest = rd;

  switch (type) {
    case TYPE_I: do { *src1 = (cpu.gpr[check_reg_idx(rs1)]); } while (0); do { *imm = ({ struct { int64_t n : 12; } __x = { .n = (((i) >> (20)) & ((1ull << ((31) - (20) + 1)) - 1)) }; (uint64_t)__x.n; }); } while(0); break;
    case TYPE_U: do { *imm = ({ struct { int64_t n : 20; } __x = { .n = (((i) >> (12)) & ((1ull << ((31) - (12) + 1)) - 1)) }; (uint64_t)__x.n; }) << 12; } while(0); break;
    case TYPE_S: do { *src1 = (cpu.gpr[check_reg_idx(rs1)]); } while (0); do { *src2 = (cpu.gpr[check_reg_idx(rs2)]); } while (0); do { *imm = (({ struct { int64_t n : 7; } __x = { .n = (((i) >> (25)) & ((1ull << ((31) - (25) + 1)) - 1)) }; (uint64_t)__x.n; }) << 5) | ({ struct { uint64_t n : 5; } __x = { .n = (((i) >> (7)) & ((1ull << ((11) - (7) + 1)) - 1)) }; (uint64_t)__x.n; }); } while(0); break;
    case TYPE_J: do { *imm = (({ struct { int64_t n : 1; } __x = { .n = (((i) >> (31)) & ((1ull << ((31) - (31) + 1)) - 1)) }; (uint64_t)__x.n; })<<19)|(({ struct { uint64_t n : 8; } __x = { .n = (((i) >> (12)) & ((1ull << ((19) - (12) + 1)) - 1)) }; (uint64_t)__x.n; })<<11)|(({ struct { uint64_t n : 1; } __x = { .n = (((i) >> (20)) & ((1ull << ((20) - (20) + 1)) - 1)) }; (uint64_t)__x.n; })<< 10)|({ struct { uint64_t n : 10; } __x = { .n = (((i) >> (21)) & ((1ull << ((30) - (21) + 1)) - 1)) }; (uint64_t)__x.n; }); *imm = *imm << 1;} while(0); break;
    case TYPE_RI: do { *src1 = (cpu.gpr[check_reg_idx(rs1)]); } while (0); do { *src2 = (cpu.gpr[check_reg_idx(rs2)]); } while (0); break;
    case TYPE_B: do { *src1 = (cpu.gpr[check_reg_idx(rs1)]); } while (0); do { *src2 = (cpu.gpr[check_reg_idx(rs2)]); } while (0); do { *imm = (({ struct { int64_t n : 1; } __x = { .n = (((i) >> (31)) & ((1ull << ((31) - (31) + 1)) - 1)) }; (uint64_t)__x.n; })<<11)|(({ struct { uint64_t n : 1; } __x = { .n = (((i) >> (7)) & ((1ull << ((7) - (7) + 1)) - 1)) }; (uint64_t)__x.n; })<<10)|(({ struct { uint64_t n : 6; } __x = { .n = (((i) >> (25)) & ((1ull << ((30) - (25) + 1)) - 1)) }; (uint64_t)__x.n; })<< 4)|({ struct { uint64_t n : 4; } __x = { .n = (((i) >> (8)) & ((1ull << ((11) - (8) + 1)) - 1)) }; (uint64_t)__x.n; }); *imm = *imm << 1; } while(0); break;
  }

}

static int decode_exec(Decode *s) {
  int dest = 0;
  word_t src1 = 0, src2 = 0, imm = 0;
  s->dnpc = s->snpc;







  { const void ** __instpat_end = &&__instpat_end_;;
  do { uint64_t key, mask, shift; pattern_decode("??????? ????? ????? ??? ????? 00101 11", (sizeof("??????? ????? ????? ??? ????? 00101 11") - 1), &key, &mask, &shift); if (((((s)->isa.inst.val) >> shift) & mask) == key) { { decode_operand(s, &dest, &src1, &src2, &imm, TYPE_U); (cpu.gpr[check_reg_idx(dest)]) = s->pc + imm ; }; goto *(__instpat_end); } } while (0);
  do { uint64_t key, mask, shift; pattern_decode("??????? ????? ????? 011 ????? 00000 11", (sizeof("??????? ????? ????? 011 ????? 00000 11") - 1), &key, &mask, &shift); if (((((s)->isa.inst.val) >> shift) & mask) == key) { { decode_operand(s, &dest, &src1, &src2, &imm, TYPE_I); (cpu.gpr[check_reg_idx(dest)]) = vaddr_read(src1 + imm, 8) ; }; goto *(__instpat_end); } } while (0);
  do { uint64_t key, mask, shift; pattern_decode("??????? ????? ????? 011 ????? 01000 11", (sizeof("??????? ????? ????? 011 ????? 01000 11") - 1), &key, &mask, &shift); if (((((s)->isa.inst.val) >> shift) & mask) == key) { { decode_operand(s, &dest, &src1, &src2, &imm, TYPE_S); vaddr_write(src1 + imm, 8, src2) ; }; goto *(__instpat_end); } } while (0);

  do { uint64_t key, mask, shift; pattern_decode("??????? ????? ????? ??? ????? 01101 11", (sizeof("??????? ????? ????? ??? ????? 01101 11") - 1), &key, &mask, &shift); if (((((s)->isa.inst.val) >> shift) & mask) == key) { { decode_operand(s, &dest, &src1, &src2, &imm, TYPE_U); (cpu.gpr[check_reg_idx(dest)]) =imm ; }; goto *(__instpat_end); } } while (0);





  do { uint64_t key, mask, shift; pattern_decode("0000000 00000 ????? 000 ????? 00100 11", (sizeof("0000000 00000 ????? 000 ????? 00100 11") - 1), &key, &mask, &shift); if (((((s)->isa.inst.val) >> shift) & mask) == key) { { decode_operand(s, &dest, &src1, &src2, &imm, TYPE_I); (cpu.gpr[check_reg_idx(dest)]) = src1 ; }; goto *(__instpat_end); } } while (0);
  do { uint64_t key, mask, shift; pattern_decode("??????? ????? ????? 000 ????? 00100 11", (sizeof("??????? ????? ????? 000 ????? 00100 11") - 1), &key, &mask, &shift); if (((((s)->isa.inst.val) >> shift) & mask) == key) { { decode_operand(s, &dest, &src1, &src2, &imm, TYPE_I); (cpu.gpr[check_reg_idx(dest)]) = ({ struct { int64_t n : 12; } __x = { .n = imm }; (uint64_t)__x.n; })+src1 ; }; goto *(__instpat_end); } } while (0);
  do { uint64_t key, mask, shift; pattern_decode("??????? ????? ????? 000 ????? 00000 11", (sizeof("??????? ????? ????? 000 ????? 00000 11") - 1), &key, &mask, &shift); if (((((s)->isa.inst.val) >> shift) & mask) == key) { { decode_operand(s, &dest, &src1, &src2, &imm, TYPE_I); (cpu.gpr[check_reg_idx(dest)]) = ({ struct { int64_t n : 8; } __x = { .n = (vaddr_read(src1 + imm, 8)) }; (uint64_t)__x.n; }) ; }; goto *(__instpat_end); } } while (0);



  do { uint64_t key, mask, shift; pattern_decode("010000? ????? ????? 101 ????? 00110 11", (sizeof("010000? ????? ????? 101 ????? 00110 11") - 1), &key, &mask, &shift); if (((((s)->isa.inst.val) >> shift) & mask) == key) { { decode_operand(s, &dest, &src1, &src2, &imm, TYPE_I); int32_t rs1 = (src1&0x00000000FFFFFFFF);word_t shamt=({ struct { int64_t n : 6; } __x = { .n = imm }; (uint64_t)__x.n; });(cpu.gpr[check_reg_idx(dest)]) = ({ struct { int64_t n : 32; } __x = { .n = (rs1 >> shamt) }; (uint64_t)__x.n; }) ; }; goto *(__instpat_end); } } while (0);
  do { uint64_t key, mask, shift; pattern_decode("010000? ????? ????? 101 ????? 00100 11", (sizeof("010000? ????? ????? 101 ????? 00100 11") - 1), &key, &mask, &shift); if (((((s)->isa.inst.val) >> shift) & mask) == key) { { decode_operand(s, &dest, &src1, &src2, &imm, TYPE_I); int64_t rs1 = src1;word_t shamt=({ struct { int64_t n : 6; } __x = { .n = imm }; (uint64_t)__x.n; });(cpu.gpr[check_reg_idx(dest)]) = rs1 >> shamt ; }; goto *(__instpat_end); } } while (0);
  do { uint64_t key, mask, shift; pattern_decode("??????? ????? ????? 111 ????? 00100 11", (sizeof("??????? ????? ????? 111 ????? 00100 11") - 1), &key, &mask, &shift); if (((((s)->isa.inst.val) >> shift) & mask) == key) { { decode_operand(s, &dest, &src1, &src2, &imm, TYPE_I); (cpu.gpr[check_reg_idx(dest)]) = src1 & imm ; }; goto *(__instpat_end); } } while (0);
  do { uint64_t key, mask, shift; pattern_decode("??????? ????? ????? 110 ????? 00100 11", (sizeof("??????? ????? ????? 110 ????? 00100 11") - 1), &key, &mask, &shift); if (((((s)->isa.inst.val) >> shift) & mask) == key) { { decode_operand(s, &dest, &src1, &src2, &imm, TYPE_I); (cpu.gpr[check_reg_idx(dest)]) = src1|imm ; }; goto *(__instpat_end); } } while (0);


  do { uint64_t key, mask, shift; pattern_decode("??????? ????? ????? 010 ????? 00000 11", (sizeof("??????? ????? ????? 010 ????? 00000 11") - 1), &key, &mask, &shift); if (((((s)->isa.inst.val) >> shift) & mask) == key) { { decode_operand(s, &dest, &src1, &src2, &imm, TYPE_I); imm = ({ struct { int64_t n : 12; } __x = { .n = imm }; (uint64_t)__x.n; });word_t val = vaddr_read(src1+imm,4);val = ({ struct { int64_t n : 32; } __x = { .n = val }; (uint64_t)__x.n; });(cpu.gpr[check_reg_idx(dest)]) = val ; }; goto *(__instpat_end); } } while (0);

  do { uint64_t key, mask, shift; pattern_decode("000000? ????? ????? 001 ????? 00100 11", (sizeof("000000? ????? ????? 001 ????? 00100 11") - 1), &key, &mask, &shift); if (((((s)->isa.inst.val) >> shift) & mask) == key) { { decode_operand(s, &dest, &src1, &src2, &imm, TYPE_I); word_t shamt=({ struct { uint64_t n : 6; } __x = { .n = imm }; (uint64_t)__x.n; });(cpu.gpr[check_reg_idx(dest)]) = src1 << shamt ; }; goto *(__instpat_end); } } while (0);
  do { uint64_t key, mask, shift; pattern_decode("000000? ????? ????? 001 ????? 00110 11", (sizeof("000000? ????? ????? 001 ????? 00110 11") - 1), &key, &mask, &shift); if (((((s)->isa.inst.val) >> shift) & mask) == key) { { decode_operand(s, &dest, &src1, &src2, &imm, TYPE_I); word_t shamt=({ struct { uint64_t n : 6; } __x = { .n = imm }; (uint64_t)__x.n; });(cpu.gpr[check_reg_idx(dest)]) = ({ struct { int64_t n : 32; } __x = { .n = (src1 << shamt) }; (uint64_t)__x.n; }) ; }; goto *(__instpat_end); } } while (0);
  do { uint64_t key, mask, shift; pattern_decode("000000? ????? ????? 101 ????? 00100 11", (sizeof("000000? ????? ????? 101 ????? 00100 11") - 1), &key, &mask, &shift); if (((((s)->isa.inst.val) >> shift) & mask) == key) { { decode_operand(s, &dest, &src1, &src2, &imm, TYPE_I); word_t shamt=({ struct { int64_t n : 6; } __x = { .n = imm }; (uint64_t)__x.n; });(cpu.gpr[check_reg_idx(dest)]) = src1 >> shamt ; }; goto *(__instpat_end); } } while (0);
  do { uint64_t key, mask, shift; pattern_decode("000000? ????? ????? 101 ????? 00110 11", (sizeof("000000? ????? ????? 101 ????? 00110 11") - 1), &key, &mask, &shift); if (((((s)->isa.inst.val) >> shift) & mask) == key) { { decode_operand(s, &dest, &src1, &src2, &imm, TYPE_I); uint32_t rs1 = (src1&0x00000000FFFFFFFF);word_t shamt=({ struct { int64_t n : 6; } __x = { .n = imm }; (uint64_t)__x.n; });(cpu.gpr[check_reg_idx(dest)]) = ({ struct { int64_t n : 32; } __x = { .n = (rs1 >> shamt) }; (uint64_t)__x.n; }) ; }; goto *(__instpat_end); } } while (0);

  do { uint64_t key, mask, shift; pattern_decode("??????? ????? ????? 000 ????? 00110 11", (sizeof("??????? ????? ????? 000 ????? 00110 11") - 1), &key, &mask, &shift); if (((((s)->isa.inst.val) >> shift) & mask) == key) { { decode_operand(s, &dest, &src1, &src2, &imm, TYPE_I); word_t val = ({ struct { int64_t n : 64; } __x = { .n = (src1+({ struct { int64_t n : 12; } __x = { .n = imm }; (uint64_t)__x.n; })) }; (uint64_t)__x.n; });val = ({ struct { int64_t n : 32; } __x = { .n = val }; (uint64_t)__x.n; });(cpu.gpr[check_reg_idx(dest)]) = val ; }; goto *(__instpat_end); } } while (0);
  do { uint64_t key, mask, shift; pattern_decode("??????? ????? ????? 100 ????? 00000 11", (sizeof("??????? ????? ????? 100 ????? 00000 11") - 1), &key, &mask, &shift); if (((((s)->isa.inst.val) >> shift) & mask) == key) { { decode_operand(s, &dest, &src1, &src2, &imm, TYPE_I); word_t val = vaddr_read(src1 + imm, 1);val = ({ struct { uint64_t n : 8; } __x = { .n = val }; (uint64_t)__x.n; });(cpu.gpr[check_reg_idx(dest)])=val ; }; goto *(__instpat_end); } } while (0);
  do { uint64_t key, mask, shift; pattern_decode("??????? ????? ????? 100 ????? 00100 11", (sizeof("??????? ????? ????? 100 ????? 00100 11") - 1), &key, &mask, &shift); if (((((s)->isa.inst.val) >> shift) & mask) == key) { { decode_operand(s, &dest, &src1, &src2, &imm, TYPE_I); (cpu.gpr[check_reg_idx(dest)]) = src1^imm ; }; goto *(__instpat_end); } } while (0);
  do { uint64_t key, mask, shift; pattern_decode("??????? ????? ????? 001 ????? 00000 11", (sizeof("??????? ????? ????? 001 ????? 00000 11") - 1), &key, &mask, &shift); if (((((s)->isa.inst.val) >> shift) & mask) == key) { { decode_operand(s, &dest, &src1, &src2, &imm, TYPE_I); word_t temp = vaddr_read(src1+imm,2);(cpu.gpr[check_reg_idx(dest)]) =({ struct { int64_t n : 16; } __x = { .n = temp }; (uint64_t)__x.n; }) ; }; goto *(__instpat_end); } } while (0);
  do { uint64_t key, mask, shift; pattern_decode("??????? ????? ????? 101 ????? 00000 11", (sizeof("??????? ????? ????? 101 ????? 00000 11") - 1), &key, &mask, &shift); if (((((s)->isa.inst.val) >> shift) & mask) == key) { { decode_operand(s, &dest, &src1, &src2, &imm, TYPE_I); word_t temp = vaddr_read(src1+imm,2);(cpu.gpr[check_reg_idx(dest)]) =({ struct { uint64_t n : 16; } __x = { .n = temp }; (uint64_t)__x.n; }) ; }; goto *(__instpat_end); } } while (0);

  do { uint64_t key, mask, shift; pattern_decode("??????? ????? ????? 011 ????? 00001 11", (sizeof("??????? ????? ????? 011 ????? 00001 11") - 1), &key, &mask, &shift); if (((((s)->isa.inst.val) >> shift) & mask) == key) { { decode_operand(s, &dest, &src1, &src2, &imm, TYPE_I); double temp = vaddr_read(src1+imm,8);(cpu.gpr[check_reg_idx(dest)]) =temp ; }; goto *(__instpat_end); } } while (0);


  do { uint64_t key, mask, shift; pattern_decode("??????? ????? ????? 000 ????? 11001 11", (sizeof("??????? ????? ????? 000 ????? 11001 11") - 1), &key, &mask, &shift); if (((((s)->isa.inst.val) >> shift) & mask) == key) { { decode_operand(s, &dest, &src1, &src2, &imm, TYPE_I); (cpu.gpr[check_reg_idx(dest)]) = s->pc+0x4;imm=({ struct { int64_t n : 12; } __x = { .n = imm }; (uint64_t)__x.n; });s->dnpc = ((src1+imm)&~1); uint32_t i = s->isa.inst.val; int rs1 = (((i) >> (15)) & ((1ull << ((19) - (15) + 1)) - 1)); log_ftrace(s->dnpc,1,dest,imm,rs1,src1) ; }; goto *(__instpat_end); } } while (0)







   ;


  do { uint64_t key, mask, shift; pattern_decode("??????? ????? ????? 011 ????? 00100 11", (sizeof("??????? ????? ????? 011 ????? 00100 11") - 1), &key, &mask, &shift); if (((((s)->isa.inst.val) >> shift) & mask) == key) { { decode_operand(s, &dest, &src1, &src2, &imm, TYPE_I); imm = ({ struct { int64_t n : 12; } __x = { .n = imm }; (uint64_t)__x.n; }); (cpu.gpr[check_reg_idx(dest)]) = (src1<imm) ; }; goto *(__instpat_end); } } while (0);
# 137 "src/isa/riscv64/inst.c"
  do { uint64_t key, mask, shift; pattern_decode("??????? ????? ????? ??? ????? 11011 11", (sizeof("??????? ????? ????? ??? ????? 11011 11") - 1), &key, &mask, &shift); if (((((s)->isa.inst.val) >> shift) & mask) == key) { { decode_operand(s, &dest, &src1, &src2, &imm, TYPE_J); (cpu.gpr[check_reg_idx(dest)]) = s->pc+0x4;imm = ({ struct { int64_t n : 20; } __x = { .n = imm }; (uint64_t)__x.n; });s->dnpc =imm+s->pc; log_ftrace(s->dnpc,0,dest,imm,src1,src1) ; }; goto *(__instpat_end); } } while (0)



   ;


  do { uint64_t key, mask, shift; pattern_decode("0000000 ????? ????? 000 ????? 01110 11", (sizeof("0000000 ????? ????? 000 ????? 01110 11") - 1), &key, &mask, &shift); if (((((s)->isa.inst.val) >> shift) & mask) == key) { { decode_operand(s, &dest, &src1, &src2, &imm, TYPE_RI); word_t val = src1+src2;val = ({ struct { int64_t n : 32; } __x = { .n = val }; (uint64_t)__x.n; }); (cpu.gpr[check_reg_idx(dest)])=val ; }; goto *(__instpat_end); } } while (0);
  do { uint64_t key, mask, shift; pattern_decode("0100000 ????? ????? 000 ????? 01100 11", (sizeof("0100000 ????? ????? 000 ????? 01100 11") - 1), &key, &mask, &shift); if (((((s)->isa.inst.val) >> shift) & mask) == key) { { decode_operand(s, &dest, &src1, &src2, &imm, TYPE_RI); (cpu.gpr[check_reg_idx(dest)]) = src1-src2 ; }; goto *(__instpat_end); } } while (0);
  do { uint64_t key, mask, shift; pattern_decode("0100000 ????? ????? 000 ????? 01110 11", (sizeof("0100000 ????? ????? 000 ????? 01110 11") - 1), &key, &mask, &shift); if (((((s)->isa.inst.val) >> shift) & mask) == key) { { decode_operand(s, &dest, &src1, &src2, &imm, TYPE_RI); word_t val = src1-src2;val = ({ struct { int64_t n : 32; } __x = { .n = val }; (uint64_t)__x.n; });(cpu.gpr[check_reg_idx(dest)]) = val ; }; goto *(__instpat_end); } } while (0);
  do { uint64_t key, mask, shift; pattern_decode("0000000 ????? ????? 000 ????? 01100 11", (sizeof("0000000 ????? ????? 000 ????? 01100 11") - 1), &key, &mask, &shift); if (((((s)->isa.inst.val) >> shift) & mask) == key) { { decode_operand(s, &dest, &src1, &src2, &imm, TYPE_RI); (cpu.gpr[check_reg_idx(dest)]) = src1+src2 ; }; goto *(__instpat_end); } } while (0);

  do { uint64_t key, mask, shift; pattern_decode("0000000 ????? ????? 011 ????? 01100 11", (sizeof("0000000 ????? ????? 011 ????? 01100 11") - 1), &key, &mask, &shift); if (((((s)->isa.inst.val) >> shift) & mask) == key) { { decode_operand(s, &dest, &src1, &src2, &imm, TYPE_RI); (cpu.gpr[check_reg_idx(dest)]) = (src1<(src2)) ; }; goto *(__instpat_end); } } while (0);

  do { uint64_t key, mask, shift; pattern_decode("0000000 ????? ????? 001 ????? 01110 11", (sizeof("0000000 ????? ????? 001 ????? 01110 11") - 1), &key, &mask, &shift); if (((((s)->isa.inst.val) >> shift) & mask) == key) { { decode_operand(s, &dest, &src1, &src2, &imm, TYPE_RI); src2 = ({ struct { uint64_t n : 5; } __x = { .n = src2 }; (uint64_t)__x.n; });src1 =({ struct { int64_t n : 32; } __x = { .n = (src1<<src2) }; (uint64_t)__x.n; });(cpu.gpr[check_reg_idx(dest)]) = src1 ; }; goto *(__instpat_end); } } while (0);
  do { uint64_t key, mask, shift; pattern_decode("0000000 ????? ????? 001 ????? 01100 11", (sizeof("0000000 ????? ????? 001 ????? 01100 11") - 1), &key, &mask, &shift); if (((((s)->isa.inst.val) >> shift) & mask) == key) { { decode_operand(s, &dest, &src1, &src2, &imm, TYPE_RI); src2 = ({ struct { uint64_t n : 6; } __x = { .n = src2 }; (uint64_t)__x.n; });src1 =src1<<src2;(cpu.gpr[check_reg_idx(dest)]) = src1 ; }; goto *(__instpat_end); } } while (0);
  do { uint64_t key, mask, shift; pattern_decode("0100000 ????? ????? 101 ????? 01110 11", (sizeof("0100000 ????? ????? 101 ????? 01110 11") - 1), &key, &mask, &shift); if (((((s)->isa.inst.val) >> shift) & mask) == key) { { decode_operand(s, &dest, &src1, &src2, &imm, TYPE_RI); int32_t rs1 = (src1&0x00000000FFFFFFFF);src2 = ({ struct { uint64_t n : 5; } __x = { .n = src2 }; (uint64_t)__x.n; });(cpu.gpr[check_reg_idx(dest)]) = ({ struct { int64_t n : 32; } __x = { .n = (rs1>>src2) }; (uint64_t)__x.n; }) ; }; goto *(__instpat_end); } } while (0);
  do { uint64_t key, mask, shift; pattern_decode("0000000 ????? ????? 101 ????? 01110 11", (sizeof("0000000 ????? ????? 101 ????? 01110 11") - 1), &key, &mask, &shift); if (((((s)->isa.inst.val) >> shift) & mask) == key) { { decode_operand(s, &dest, &src1, &src2, &imm, TYPE_RI); uint32_t rs1 = (src1&0x00000000FFFFFFFF);src2 = ({ struct { uint64_t n : 5; } __x = { .n = src2 }; (uint64_t)__x.n; });(cpu.gpr[check_reg_idx(dest)]) = ({ struct { int64_t n : 32; } __x = { .n = (rs1>>src2) }; (uint64_t)__x.n; }) ; }; goto *(__instpat_end); } } while (0);
  do { uint64_t key, mask, shift; pattern_decode("0000000 ????? ????? 110 ????? 01100 11", (sizeof("0000000 ????? ????? 110 ????? 01100 11") - 1), &key, &mask, &shift); if (((((s)->isa.inst.val) >> shift) & mask) == key) { { decode_operand(s, &dest, &src1, &src2, &imm, TYPE_RI); (cpu.gpr[check_reg_idx(dest)]) = src1|src2 ; }; goto *(__instpat_end); } } while (0);
  do { uint64_t key, mask, shift; pattern_decode("0000000 ????? ????? 100 ????? 01100 11", (sizeof("0000000 ????? ????? 100 ????? 01100 11") - 1), &key, &mask, &shift); if (((((s)->isa.inst.val) >> shift) & mask) == key) { { decode_operand(s, &dest, &src1, &src2, &imm, TYPE_RI); (cpu.gpr[check_reg_idx(dest)]) = src1^src2 ; }; goto *(__instpat_end); } } while (0);
  do { uint64_t key, mask, shift; pattern_decode("0000000 ????? ????? 111 ????? 01100 11", (sizeof("0000000 ????? ????? 111 ????? 01100 11") - 1), &key, &mask, &shift); if (((((s)->isa.inst.val) >> shift) & mask) == key) { { decode_operand(s, &dest, &src1, &src2, &imm, TYPE_RI); (cpu.gpr[check_reg_idx(dest)]) = src1&src2 ; }; goto *(__instpat_end); } } while (0);

  do { uint64_t key, mask, shift; pattern_decode("0000000 ????? ????? 010 ????? 01100 11", (sizeof("0000000 ????? ????? 010 ????? 01100 11") - 1), &key, &mask, &shift); if (((((s)->isa.inst.val) >> shift) & mask) == key) { { decode_operand(s, &dest, &src1, &src2, &imm, TYPE_RI); int rs1= src1;int rs2 = src2 ;(cpu.gpr[check_reg_idx(dest)]) = rs1<rs2 ; }; goto *(__instpat_end); } } while (0);
  do { uint64_t key, mask, shift; pattern_decode("0000001 ????? ????? 000 ????? 01100 11", (sizeof("0000001 ????? ????? 000 ????? 01100 11") - 1), &key, &mask, &shift); if (((((s)->isa.inst.val) >> shift) & mask) == key) { { decode_operand(s, &dest, &src1, &src2, &imm, TYPE_RI); word_t val = src1*src2;(cpu.gpr[check_reg_idx(dest)])= val ; }; goto *(__instpat_end); } } while (0);
  do { uint64_t key, mask, shift; pattern_decode("0000001 ????? ????? 000 ????? 01110 11", (sizeof("0000001 ????? ????? 000 ????? 01110 11") - 1), &key, &mask, &shift); if (((((s)->isa.inst.val) >> shift) & mask) == key) { { decode_operand(s, &dest, &src1, &src2, &imm, TYPE_RI); word_t val = src1*src2;val = ({ struct { int64_t n : 32; } __x = { .n = val }; (uint64_t)__x.n; });(cpu.gpr[check_reg_idx(dest)])= val ; }; goto *(__instpat_end); } } while (0);
  do { uint64_t key, mask, shift; pattern_decode("0000001 ????? ????? 100 ????? 01110 11", (sizeof("0000001 ????? ????? 100 ????? 01110 11") - 1), &key, &mask, &shift); if (((((s)->isa.inst.val) >> shift) & mask) == key) { { decode_operand(s, &dest, &src1, &src2, &imm, TYPE_RI); src1 = ({ struct { int64_t n : 32; } __x = { .n = src1 }; (uint64_t)__x.n; });src2 = ({ struct { int64_t n : 32; } __x = { .n = src2 }; (uint64_t)__x.n; });int32_t rs1 = src1;int32_t rs2 = src2;int32_t val=rs1/rs2;(cpu.gpr[check_reg_idx(dest)]) = ({ struct { int64_t n : 32; } __x = { .n = val }; (uint64_t)__x.n; }) ; }; goto *(__instpat_end); } } while (0);
  do { uint64_t key, mask, shift; pattern_decode("0000001 ????? ????? 101 ????? 01100 11", (sizeof("0000001 ????? ????? 101 ????? 01100 11") - 1), &key, &mask, &shift); if (((((s)->isa.inst.val) >> shift) & mask) == key) { { decode_operand(s, &dest, &src1, &src2, &imm, TYPE_RI); src1 = ({ struct { int64_t n : 32; } __x = { .n = src1 }; (uint64_t)__x.n; });src2 = ({ struct { int64_t n : 32; } __x = { .n = src2 }; (uint64_t)__x.n; });word_t rs1 = src1;word_t rs2 = src2;word_t val=rs1/rs2;(cpu.gpr[check_reg_idx(dest)]) = val ; }; goto *(__instpat_end); } } while (0);
  do { uint64_t key, mask, shift; pattern_decode("0000001 ????? ????? 111 ????? 01100 11", (sizeof("0000001 ????? ????? 111 ????? 01100 11") - 1), &key, &mask, &shift); if (((((s)->isa.inst.val) >> shift) & mask) == key) { { decode_operand(s, &dest, &src1, &src2, &imm, TYPE_RI); src1 = ({ struct { int64_t n : 32; } __x = { .n = src1 }; (uint64_t)__x.n; });src2 = ({ struct { int64_t n : 32; } __x = { .n = src2 }; (uint64_t)__x.n; });word_t rs1 = src1;word_t rs2 = src2;word_t val=rs1%rs2;(cpu.gpr[check_reg_idx(dest)]) = val ; }; goto *(__instpat_end); } } while (0);
  do { uint64_t key, mask, shift; pattern_decode("0000001 ????? ????? 110 ????? 01110 11", (sizeof("0000001 ????? ????? 110 ????? 01110 11") - 1), &key, &mask, &shift); if (((((s)->isa.inst.val) >> shift) & mask) == key) { { decode_operand(s, &dest, &src1, &src2, &imm, TYPE_RI); src1 = ({ struct { int64_t n : 32; } __x = { .n = src1 }; (uint64_t)__x.n; });src2 = ({ struct { int64_t n : 32; } __x = { .n = src2 }; (uint64_t)__x.n; });int32_t rs1 = src1;int32_t rs2 = src2;int32_t val=rs1%rs2;(cpu.gpr[check_reg_idx(dest)]) = ({ struct { int64_t n : 32; } __x = { .n = val }; (uint64_t)__x.n; }) ; }; goto *(__instpat_end); } } while (0);
  do { uint64_t key, mask, shift; pattern_decode("0000001 ????? ????? 111 ????? 01110 11", (sizeof("0000001 ????? ????? 111 ????? 01110 11") - 1), &key, &mask, &shift); if (((((s)->isa.inst.val) >> shift) & mask) == key) { { decode_operand(s, &dest, &src1, &src2, &imm, TYPE_RI); src1 = ({ struct { int64_t n : 32; } __x = { .n = src1 }; (uint64_t)__x.n; });src2 = ({ struct { int64_t n : 32; } __x = { .n = src2 }; (uint64_t)__x.n; });word_t rs1 = src1;word_t rs2 = src2;int32_t val=rs1%rs2;(cpu.gpr[check_reg_idx(dest)]) = ({ struct { int64_t n : 32; } __x = { .n = val }; (uint64_t)__x.n; }) ; }; goto *(__instpat_end); } } while (0);
  do { uint64_t key, mask, shift; pattern_decode("1111001 00000 ????? 000 ????? 10100 11", (sizeof("1111001 00000 ????? 000 ????? 10100 11") - 1), &key, &mask, &shift); if (((((s)->isa.inst.val) >> shift) & mask) == key) { { decode_operand(s, &dest, &src1, &src2, &imm, TYPE_RI); src1 = ({ struct { int64_t n : 32; } __x = { .n = src1 }; (uint64_t)__x.n; });int rs1 = src1;(cpu.gpr[check_reg_idx(dest)]) = rs1 ; }; goto *(__instpat_end); } } while (0);


  do { uint64_t key, mask, shift; pattern_decode("??????? ????? ????? 000 ????? 11000 11", (sizeof("??????? ????? ????? 000 ????? 11000 11") - 1), &key, &mask, &shift); if (((((s)->isa.inst.val) >> shift) & mask) == key) { { decode_operand(s, &dest, &src1, &src2, &imm, TYPE_B); s->dnpc = (src1==src2)?s->pc+imm:s->pc+0x4 ; }; goto *(__instpat_end); } } while (0);
  do { uint64_t key, mask, shift; pattern_decode("??????? ????? ????? 001 ????? 11000 11", (sizeof("??????? ????? ????? 001 ????? 11000 11") - 1), &key, &mask, &shift); if (((((s)->isa.inst.val) >> shift) & mask) == key) { { decode_operand(s, &dest, &src1, &src2, &imm, TYPE_B); s->dnpc = (src1!=src2)?s->pc+imm:s->pc+0x4 ; }; goto *(__instpat_end); } } while (0);

  do { uint64_t key, mask, shift; pattern_decode("??????? ????? ????? 101 ????? 11000 11", (sizeof("??????? ????? ????? 101 ????? 11000 11") - 1), &key, &mask, &shift); if (((((s)->isa.inst.val) >> shift) & mask) == key) { { decode_operand(s, &dest, &src1, &src2, &imm, TYPE_B); int rs1 = src1;int rs2 = src2;imm = ({ struct { int64_t n : 12; } __x = { .n = imm }; (uint64_t)__x.n; });s->dnpc = (rs1>=rs2)?s->pc+imm:s->pc+0x4 ; }; goto *(__instpat_end); } } while (0);




  do { uint64_t key, mask, shift; pattern_decode("??????? ????? ????? 100 ????? 11000 11", (sizeof("??????? ????? ????? 100 ????? 11000 11") - 1), &key, &mask, &shift); if (((((s)->isa.inst.val) >> shift) & mask) == key) { { decode_operand(s, &dest, &src1, &src2, &imm, TYPE_B); int rs1 = src1;int rs2 = src2;imm = ({ struct { int64_t n : 12; } __x = { .n = imm }; (uint64_t)__x.n; });s->dnpc = ((rs1)<rs2)?s->pc+imm:s->pc+0x4 ; }; goto *(__instpat_end); } } while (0);
  do { uint64_t key, mask, shift; pattern_decode("??????? ????? ????? 110 ????? 11000 11", (sizeof("??????? ????? ????? 110 ????? 11000 11") - 1), &key, &mask, &shift); if (((((s)->isa.inst.val) >> shift) & mask) == key) { { decode_operand(s, &dest, &src1, &src2, &imm, TYPE_B); s->dnpc = ((src1)<src2)?s->pc+imm:s->pc+0x4 ; }; goto *(__instpat_end); } } while (0);
  do { uint64_t key, mask, shift; pattern_decode("??????? ????? ????? 111 ????? 11000 11", (sizeof("??????? ????? ????? 111 ????? 11000 11") - 1), &key, &mask, &shift); if (((((s)->isa.inst.val) >> shift) & mask) == key) { { decode_operand(s, &dest, &src1, &src2, &imm, TYPE_B); s->dnpc = ((src1)>=src2)?s->pc+imm:s->pc+0x4 ; }; goto *(__instpat_end); } } while (0);


  do { uint64_t key, mask, shift; pattern_decode("??????? ????? ????? 001 ????? 01000 11", (sizeof("??????? ????? ????? 001 ????? 01000 11") - 1), &key, &mask, &shift); if (((((s)->isa.inst.val) >> shift) & mask) == key) { { decode_operand(s, &dest, &src1, &src2, &imm, TYPE_S); vaddr_write(src1 + imm, 2, src2) ; }; goto *(__instpat_end); } } while (0);
  do { uint64_t key, mask, shift; pattern_decode("??????? ????? ????? 000 ????? 01000 11", (sizeof("??????? ????? ????? 000 ????? 01000 11") - 1), &key, &mask, &shift); if (((((s)->isa.inst.val) >> shift) & mask) == key) { { decode_operand(s, &dest, &src1, &src2, &imm, TYPE_S); vaddr_write(src1 + imm, 1, src2) ; }; goto *(__instpat_end); } } while (0);
  do { uint64_t key, mask, shift; pattern_decode("??????? ????? ????? 010 ????? 01000 11", (sizeof("??????? ????? ????? 010 ????? 01000 11") - 1), &key, &mask, &shift); if (((((s)->isa.inst.val) >> shift) & mask) == key) { { decode_operand(s, &dest, &src1, &src2, &imm, TYPE_S); vaddr_write(src1 + imm, 4, src2) ; }; goto *(__instpat_end); } } while (0);
  do { uint64_t key, mask, shift; pattern_decode("??????? ????? ????? 011 ????? 01001 11", (sizeof("??????? ????? ????? 011 ????? 01001 11") - 1), &key, &mask, &shift); if (((((s)->isa.inst.val) >> shift) & mask) == key) { { decode_operand(s, &dest, &src1, &src2, &imm, TYPE_S); vaddr_write(src1 + imm, 8, src2) ; }; goto *(__instpat_end); } } while (0);

  do { uint64_t key, mask, shift; pattern_decode("0000000 00001 00000 000 00000 11100 11", (sizeof("0000000 00001 00000 000 00000 11100 11") - 1), &key, &mask, &shift); if (((((s)->isa.inst.val) >> shift) & mask) == key) { { decode_operand(s, &dest, &src1, &src2, &imm, TYPE_N); set_nemu_state(NEMU_END, s->pc, (cpu.gpr[check_reg_idx(10)])) ; }; goto *(__instpat_end); } } while (0);
  do { uint64_t key, mask, shift; pattern_decode("??????? ????? ????? ??? ????? ????? ??", (sizeof("??????? ????? ????? ??? ????? ????? ??") - 1), &key, &mask, &shift); if (((((s)->isa.inst.val) >> shift) & mask) == key) { { decode_operand(s, &dest, &src1, &src2, &imm, TYPE_N); invalid_inst(s->pc) ; }; goto *(__instpat_end); } } while (0);
  __instpat_end_: ; };

  (cpu.gpr[check_reg_idx(0)]) = 0;

  return 0;
}

int isa_exec_once(Decode *s) {
  s->isa.inst.val = inst_fetch(&s->snpc, 4);
  return decode_exec(s);
}
