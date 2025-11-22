#include<stdio.h>

void Cpy(char* r, char* s);
int count(char* s);

int main(void){
    char* a = "waseda";
    char* b = "takadanobaba";
    char x[15] = "0123456789";
    int count_output;

    count_output = count(a);
    Cpy(x,a);
    printf("%sの文字数は%dです\n",a,count_output);
    printf();
}

int count(char* s){
    char *p = s;
    while(1){
        if(*p=='\0'){
            break;
        }
        p++;
    }
    return p-s;
}

void Cpy(char* r, char* s){
    char* p = r;
    char* q = s;
    while(1){
        if(p=='\0'){break;}
        *p = *q;
        p++;
        q++;
    }
}