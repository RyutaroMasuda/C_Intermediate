#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#define BUF_SIZE 256

int main(int argc,char* argv[]){
    char buf[BUF_SIZE];
    char inFile[100];
    FILE* in;
    printf("inFile>");
    scanf("%s",inFile);
    in = fopen(inFile, "r");
    if(in==NULL){fprintf(stderr, "can't open for r @ fopen\n");exit(1);}
    int i =1;
    while(fgets(buf,BUF_SIZE,in)!=NULL){
        printf(">>%2d",i);
        printf("%s",buf);
        i++;
    }
    fclose(in);
    return 0;
}