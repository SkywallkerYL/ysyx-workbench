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
void test_strcpy(){
    char src[20] = "vvvadw123vvvv";
    char srccp[20] = "vvvadw";
    char src1 [20] = "113";
    char src2 [20] = "113vvvadw123vvvv";
    char dest[128];
    strcpy(dest,src);
    printf("%s %s\n",dest,src);
    assert(strcmp(dest,src) == 0);
    strcat(src1,src);
    //printf("%s\n",src);
    assert(strcmp(src1,src2) == 0);
    char dest2[128];
    strncpy(dest2,src,6);
    //printf("%s\n",dest2);
    //printf("%s\n",src1);
    //printf("%s\n",src);
    //printf("%s\n",dest);

    assert(strcmp(dest2,srccp) == 0);

}
int main()
{
    test_memcpy();
    printf("hhh\n");
    test_strcpy();
    return 0;
}