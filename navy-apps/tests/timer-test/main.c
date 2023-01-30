#include <stdio.h>
//#include <assert.h>
#include <sys/time.h>

//
//uint32_t NDL_GetTicks();
//#define TESTMODE 1
//make file 里需要链接到ndllib
#ifndef TESTMODE
#include <NDL.h>
#endif
int main(){
    //get time by gettimeofday
#ifdef TESTMODE
    struct timeval init_time;
    struct timeval now;
// init
    gettimeofday(&init_time,NULL);
    time_t old_sec = init_time.tv_sec;
    suseconds_t old_usec = init_time.tv_sec;
//
    int multy = 2;
    int time = 0;

    while (1)
    {
        gettimeofday(&now,NULL);
        time_t now_sec = now.tv_sec;
        suseconds_t now_usec = now.tv_usec;
        __uint64_t gap_us =  (now_sec-old_sec)* 1000000 + (now_usec-old_usec);
        if (gap_us>500000*multy)
        {
            old_sec = now_sec;
            old_usec = now_usec;
            printf("time:%d %d*0.5s passed\n",time,multy);
            time++;
        }
        
    }
#else
    __uint32_t old_ms = NDL_GetTicks();
    __uint32_t now_ms;
    int multy = 2;
    int time = 0;
    while (1)
    {
        now_ms = NDL_GetTicks();
        __uint32_t gap_ms = now_ms-old_ms;
        if (gap_ms>500*multy)
        {
            old_ms = now_ms;
            printf("time:%d %d*0.5s passed\n",time,multy);
            time++;
        }
        
    }
#endif
    return 0;
}
