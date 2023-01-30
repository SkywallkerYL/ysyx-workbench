#include <stdio.h>
//#include <assert.h>
#include <sys/time.h>

int main(){
    struct timeval init_time;
    struct timeval now;
// init
    gettimeofday(&init_time,NULL);
    time_t old_sec = init_time.tv_sec;
    suseconds_t old_usec = init_time.tv_sec;
//
    int time = 0;

    while (1)
    {
        gettimeofday(&now,NULL);
        time_t now_sec = now.tv_sec;
        suseconds_t now_usec = now.tv_usec;
        __uint64_t gap_us =  (now_sec-old_sec)* 1000000 + (now_usec-old_usec);
        if (gap_us>500000)
        {
            old_sec = now_sec;
            old_usec = now_usec;
            printf("time:%d 0.5s passed\n",time);
            time++;
        }
        
    }
    return 0;
}
