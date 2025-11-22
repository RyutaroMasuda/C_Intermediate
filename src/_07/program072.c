#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void){
    FILE* in;
    char inFile[100];
    int n;
    int min, max;
    double sum;
    char name[100];
    int x;

    printf("inFile>");
    scanf("%s",inFile);
    in = fopen(inFile, "r");
    if(in==NULL){fprintf(stderr,"can't open for r@fopen\n");exit(1);}

    n=0;
    sum=0.0;

    while(1){
        if(fscanf(in,"%s %d",name,&x)==EOF){break;}
        if(n==0){min=max=x;}
        printf("%-20s %3d\n", name, x);
        ++n;
        sum=sum+x;
        if(x<min){min=x;}
        if(x>max){max=x;}
    }

    if(n==0){printf("データがありません\n");}
    else{printf("n=%d,min=%d,average=%.2f,max=%d\n",n,min,sum/n,max);}
    fclose(in);

    return 0;
}