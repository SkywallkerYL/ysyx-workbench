#include "trap.h"
#include <limits.h>

void test_sprintf(){

    int data[] = {0,INT_MAX/17,INT_MAX,INT_MIN,INT_MIN+1,UINT_MAX/17,INT_MAX/17,UINT_MAX};
    char* str11[] = {"0", "126322567", "2147483647" ,"-2147483648", "-2147483647", "252645135", "126322567","-1"};
    //for (int i = 0; i < 8; i++)
    //{
      //  printf("%d ",data[i]);
    //}
    
    for (int i = 0; i < 8; i++)
    {   
        char str[12];
        sprintf(str,"%d",data[i]);
        //printf("%d",data[i]);
        printf("%s %d\n",str,data[i]);
        printf("%s %s\n",str,str11[i]);
        assert(strcmp(str,str11[i])==0);
        char str1[12];
        snprintf(str1,5,"%d",data[i]);
        printf("%s %d\n",str1,data[i]);
    }
    //0 126322567 2147483647 -2147483648 -2147483647 252645135 126322567
}
int main()
{
    test_sprintf();
    return 0;
}