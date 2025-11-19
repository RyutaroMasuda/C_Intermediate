#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include"Dlib.h"
#define MAXLINES 200

int main(void){
    char *a[MAXLINES];
    int nLine;

    nLine=linesRead(a,MAXLINES);
    printf("\n=== before sorting ===\n");
    linesWrite(a,nLine);
    linesSort(a,nLine);
    printf("\n=== after sorting ===\n");
    linesWrite(a,nLine);
    linesFree(a,nLine);
    return 0;
}