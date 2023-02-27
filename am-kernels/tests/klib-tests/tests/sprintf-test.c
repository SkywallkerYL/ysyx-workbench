#include "trap.h"
#include <limits.h>

void test_sprintf(){

    int data[] = {0,INT_MAX/17,INT_MAX,INT_MIN,INT_MIN+1,UINT_MAX/17,INT_MAX/17,UINT_MAX};

    //for (int i = 0; i < 8; i++)
    //{
      //  printf("%d ",data[i]);
    //}
    char str[12];
    for (int i = 0; i < 8; i++)
    {
        sprintf(str,"%d",data[i]);
        //printf("%d",data[i]);
        printf("aaaaa");
    }
    //0 126322567 2147483647 -7562067968 -2147483647 252645135 126322567
}
int main()
{
    test_sprintf();
    return 0;
}