#include<stdio.h>

int main(void){
    char c;
    int count=0;
    while(1){
        c = getchar();
        if(c==EOF){break;}
        count++;
    }
    printf("文字数は%dです",count);
    return 0;
}