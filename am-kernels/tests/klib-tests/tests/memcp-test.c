#include "trap.h"
#include "testfunc.h"

void test_memcpy(){
    char src[] = "vvvadw123vvvv";
    reset();
    memcpy(data,src,13);
    //check_seq(0,l,1);
    check_eq(0,3,'v');
    check_eq(3,4,'a');
    check_eq(4,5,'d');
    check_eq(5,6,'w');
    check_eq(6,7,'1');
    check_eq(7,8,'2');
    check_eq(8,9,'3');
    check_eq(10,13,'v');
}
int main()
{
    test_memcpy();
    return 0;
}