#include<stdio.h>

typedef struct{
    char a;
    char b;
    int c;
} ABC;

void size(void);

void endian(void);

void align(void);

int main(void){
    size();
    endian();
    align();
    return 0;
}

void size(void){
    printf("char = %2lu bits\n",8*sizeof(char));
    printf("short = %2lu bits\n",8*sizeof(short));
    printf("int = %2lu bits\n",8*sizeof(int));
    printf("long = %2lu bits\n",8*sizeof(long));
}

void endian(void){
    unsigned short x = 1;
    unsigned char *p;
    p = (unsigned char*)(&x);
    if(*p==0x00){printf("big endian\n\n");}
    if(*p==0x01){printf("little endian\n\n");}
}

void align(void){
    ABC x;
    printf("ABC=%lu\n",sizeof(x));
    printf("x.a=+%ld\n",(unsigned char*)&x.a-(unsigned char*)&x);
    printf("x.b=+%ld\n",(unsigned char*)&x.b-(unsigned char*)&x);
    printf("x.c=+%ld\n",(unsigned char*)&x.c-(unsigned char*)&x);
}