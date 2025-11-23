#include<stdio.h>

int a[2] = {1000,2000};

int main(){
    printf("%p\n",a);
    printf("%p\n",a+1);
    return 0;
}