#include "../include/fixedptc.h"
#include <stdio.h>
#include <math.h>

void fixedptc0() {
    fixedpt a = fixedpt_rconst(1.2);
    fixedpt b = fixedpt_fromint(10);
    int c = 0;
    if (b > fixedpt_rconst(7.9)) {
      c = fixedpt_toint(fixedpt_div(fixedpt_mul(a + FIXEDPT_ONE, b), fixedpt_rconst(2.3)));
    }
    printf("c: %d\n", c);
    //0x11a&(~0xff)+FIXEDPT_ONE
   // printf("%x\n",FIXEDPT_ONE+FIXEDPT_ONE);
    //int a1 = FIXEDPT_ONE;
    //int b1 = 0x11a&((uint32_t)~0xff);
    //printf("%x\n",a1+b1);
    //printf("%x\n",0x11a&((uint32_t)~0xff)+(uint32_t)FIXEDPT_ONE);
   // printf("%x\n",fixedpt_rconst((1.1)));
   // printf("%d\n",fixedpt_ceil(fixedpt_rconst((1.1))));
    printf("ceil: -1.5:%f 1.5:%f\n",(float)fixedpt_ceil(fixedpt_rconst(-1.5))/(1<<8),(float)fixedpt_ceil(fixedpt_rconst((1.1)))/(1<<8));
    printf("floor: -1.5:%f 1.5:%f\n",(float)fixedpt_floor(fixedpt_rconst(-1.5))/(1<<8),(float)fixedpt_floor(fixedpt_rconst(1.5))/(1<<8));
}

void refine() {
    float a = 1.2;
    float b = 10;
    int c = 0;
    if (b > 7.9) {
      c = (a + 1) * b / 2.3;
    }
    printf("c: %d\n", c);
    printf("ceil: -1.5:%f 1.5:%f\n",ceil(-1.5),ceil(1.5));
    printf("floor: -1.5:%f 1.5:%f\n",floor(-1.5),floor(1.5));
}

int main() {
    printf("-------- DUT --------\n");
    fixedptc0();
    printf("---------REF ---------\n");
    refine();
}
