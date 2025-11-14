#include<stdio.h>
#include<time.h>

int main(void){
    clock_t start, end;
    unsigned int port;
    volatile long long i;

    start = clock();
    printf("開始時間:%d\n",start);

    port = 1U;
    for(i=0;i<500000000;i++){;}
    port = 0U;

    end = clock();
    printf("終了時間:%ld\n\n",end);
    printf("処理時間=%ld[cpu時間],%3lf[s]\n",end-start,(double)(end-start)/CLOCKS_PER_SEC);
    return 0;
}