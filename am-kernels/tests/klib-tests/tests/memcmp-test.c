#include "trap.h"
//#include "testfunc.h"

void test_memcmp(){
    char str1[] = "aacdef";
    char str2[] = "aavdef";
    int ret = memcmp(str1,str2,6);
    //printf("%d\n",ret);
    //check_seq(0,l,1);
    assert(ret < 0);
    char str3[] = "acwcdef";
    char str4[] = "aavdef";
    int ret1 = memcmp(str3,str4,6);
    assert(ret1 > 0);
}
int main()
{
    //uint32_t a = *(volatile uint32_t *)(0x800003fc);
    //if(a == 0) return 0;
    test_memcmp();
    return 0;
}