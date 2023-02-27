#include "trap.h"
//#include "testfunc.h"

void test_strlen(){
    char str1[] = "aacdefaaa";
    char str2[] = "aavdef";
    int len1 = strlen(str1);
    int len2 = strlen(str2);
    //printf("%d\n",ret);
    //check_seq(0,l,1);
    assert(len1 == 9);
    assert(len2 == 6);
    //check_seq(r,N,r+1);
}
int main()
{
    test_strlen();
    return 0;
}