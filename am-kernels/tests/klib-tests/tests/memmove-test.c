#include "trap.h"
#include "testfunc.h"

void test_memmove(){
    char src[] = "vvvadw123vvvv";
    reset();
    memmove(data,src,13);
    //check_seq(0,l,1);
    check_eq(0,3,'v');
    check_eq(3,4,'a');
    check_eq(4,5,'d');
    check_eq(5,6,'w');
    check_eq(6,7,'1');
    check_eq(7,8,'2');
    check_eq(8,9,'3');
    check_eq(10,13,'v');
    //check_seq(r,N,r+1);
}
int main()
{
    test_memmove();
    return 0;
}