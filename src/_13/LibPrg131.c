#include <stdio.h>
#include "LibPrg131.h"

int aBinarySearch(int t[],int left,int right,int key){
    const int NOTFOUND = -1;
    int z;
    int c; //中点

    z=NOTFOUND;
    while(left<right){
        c=left+(right-left)/2;
        if(key<t[c]){
            right=c;
        }else if(key>t[c]){
            left=c+1;
        }else{
            z=c;
            break;
        }
    }

    return z;
}

void aOut(int t[],int left,int right){
    int i;

    printf("[");
    for(i=left;i<right;++i){
        if(i != left){
            printf(",");
        }
        printf("%d",t[i]);
    }
    printf("]\n");
}