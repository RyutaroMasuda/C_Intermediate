#include <stdio.h>

int main(void){
    int begin = 'a';
    int end = 'g';

    for(int i=begin;i<end;i++){printf("%c",i);}
    putchar('\n');
    for(int i=begin;i<end;i++){printf(" 0x%3x",i);}
    putchar('\n');
    for(int i=begin;i<end;i++){printf(" %3d",i);}
    putchar('\n');
    return(0);
}