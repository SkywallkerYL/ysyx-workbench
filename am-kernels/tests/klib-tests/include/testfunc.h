//#include <assert.h>
#define N 32
typedef unsigned char uint8_t ;

uint8_t data[N];

void reset()
{
    int i ;
    for (i = 0; i < N; i++)
    {
        data[i] = i + 1;
    }
}
//检验[l,r)区间内的值是否依次为val val+1 val+2
void check_seq(int l, int r,int val)
{
    int i;
    for ( i = l; i < r; i++)
    {
        assert(data[i]== val+i-l);
    }
    
}
//检验[l,r)区间内的值是否均为val 
void check_eq(int l, int r,int val)
{
    int i;
    for ( i = l; i < r; i++)
    {
        assert(data[i]== val);
    }
    
}