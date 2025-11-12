//#include <stdio.h>
#define JANUARY 1
#define DECEMBER 12

int main(void){
    int i;

    puts("1年間");
    for (i=JANUARY;i<=DECEMBER;++i){
        printf("%3d月\n",i);
    }

    return 0;
}