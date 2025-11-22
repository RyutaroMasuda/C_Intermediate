#include <stdio.h>

int main(void){
    float x;

    for(x=0.0;x<=1.0;x+=0.01){
        #ifdef DBG
        printf("x = %f\n",x);
        #endif
    }
    printf("xの最後の値は%fです．\n",x);

    return 0;
}