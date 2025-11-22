#include<stdio.h>
#define SIZE 10

int linear_search(int target, int *arr, int size);

int main(){
    int arr[SIZE] = {34, 7, 23, 32, 5, 62, 32, 7, 78, 90};
    int target;
    printf("入力された値を10個のデータの中から線形探索法で探します。\n");
    printf("探したい値を入力してください:"); scanf("%d", &target);

    int idx = linear_search(target, arr, SIZE);

    if(idx==-1){
        printf("その数はありません\n");
    }else{
        printf("%dは%d番目にあります。\n",target,idx);
    }
    printf("データの中身は");
    for(int i=0;i<SIZE;i++){
        printf("%d, ",arr[i]);
    }
}

int linear_search(int target, int* arr, int size){
    int *a = arr;
    for(int i=0;i<size;i++){
        if(target==*(a+i)){
            return i;
        }
    }
    return -1;
}