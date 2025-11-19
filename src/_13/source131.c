#include <stdio.h>
#include "LibPrg131.h"

#define cA 200
const int NOTFOUND = -1;

int main(void){
    int a[cA] = {0,2,3,4,8,10,12,14,16,18,20,22,24,26,28,30,32,34,36,38};
    int nA = 20; //データ数
    int key; //探索データ
    int p; //発見位置

    aOut(a,0,nA);
    printf("key>");
    scanf("%d",&key);
    p = aBinarySearch(a, 0, nA, key);
    if(p==NOTFOUND){
        printf("%d: not found\n",key);
    }else{
        printf("%d: found at %d\n",key,p);
    }
    
    return 0;
}