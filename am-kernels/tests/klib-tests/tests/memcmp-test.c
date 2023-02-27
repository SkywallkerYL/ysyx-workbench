#include "trap.h"
//#include "testfunc.h"

void test_memcmp(){
    char str1[] = "aacdef";
    char str2[] = "aavdef";
    int ret = memcmp(str1,str2,6);
    //printf("%d\n",ret);
    //check_seq(0,l,1);
    assert(ret < 0);
    //check_seq(r,N,r+1);
}
int main()
{
    uint32_t a = *(volatile uint32_t *)(0x800003fc);
    if(a == 0) return 0;
    //test_memcmp();
    return 0;
}