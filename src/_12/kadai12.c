#include <stdio.h>
#include <time.h>
int main(){
    clock_t start, end;
    unsigned int port;

    //volatile char stra[]="waseda";
    char stra[]="waseda";
    char strb[5];

    start = clock();
    printf("開始時間:%d\n",start);

    strb[0]='U';
    strb[1]='N';
    strb[2]='I';
    strb[3]='V';
    strb[4]='\n';
    
    printf("文字列straは%8sです\n",stra);
    printf("文字列strbは%8sです\n",strb);

    end = clock();
    printf("終了時間:%ld\n\n",end);
    printf("処理時間=%ld[cpu時間],%3lf[s]\n",end-start,(double)(end-start)/CLOCKS_PER_SEC);
    return 0;
}