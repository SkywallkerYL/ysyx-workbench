#include "trap.h"
#include "testfunc.h"

void test_memcpy(){
    char src[] = "vvvvvvv";
    reset();
    memcpy(data,src,8);
    //check_seq(0,l,1);
    check_eq(0,6,'v');
    //check_seq(r,N,r+1);
}
int main()
{
    test_memcpy();
    return 0;
}