#include "trap.h"
#include "testfunc.h"

void test_memset(){
    int l,r;
    for (l = 0; l< N; l++)
    {
        for (r = l; r <=N; r++)
        {
            reset();
            uint8_t val = (l+r)/2;
            memset(data+l,val,r-l);
            check_seq(0,l,1);
            check_eq(l,r,val);
            check_seq(r,N,r+1);
        }
        
    }
}
int main()
{
    test_memset();
    return 0;
}