#include "trap.h"
//#include "testfunc.h"

void test_memcmp(){
    char str1[] = "aacdef";
    char str2[] = "aavdef";
    int ret = memcmp(str1,str2,6);
    int rett = strcmp(str1,str2);
    int rettt = strncmp(str1,str2,6);
    //printf("%d\n",ret);
    //check_seq(0,l,1);
    assert(ret < 0);
    assert(rett < 0);
    assert(rettt < 0);
    char str3[] = "acwcdef";
    char str4[] = "aavdef";
    int ret1 = memcmp(str3,str4,6);
    int rett1    = strcmp(str3,str4);
    int rettt1   = strncmp(str3,str4,6);
    assert(ret1 > 0);
        assert(rett1 >0);
    assert(rettt1 > 0);
    char str5[] = "1234abc";
    char str6[] = "1234abc";
    int ret2 = memcmp(str5,str6,7);
    int rett2 = strcmp(str5,str6);
    int rettt2 = strncmp(str5,str6,7);
    assert(ret2 == 0);
        assert(rett2 ==0);
    assert(rettt2 ==0);
}
int main()
{
    //uint32_t a = *(volatile uint32_t *)(0x800003fc);
    //if(a == 0) return 0;
    test_memcmp();
    return 0;
}