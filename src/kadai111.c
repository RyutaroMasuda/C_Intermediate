#include <stdio.h>
#include <stdlib.h>

int get_num_digit(int x);//桁数を求める関数を定義

int main(void){
    int num;
    int rev_num=0;
    int num_digit;
    printf("正の整数値を入力してください : ");
    scanf("%d",&num);

    num_digit = get_num_digit(num);
    #ifdef DBG
    printf("%dの桁数は%3dです\n",num,num_digit);
    #endif

    int a[num_digit];
    for(int i=0;i<num_digit;i++){
        int digit = num % 10;
        rev_num = rev_num * 10 + digit;
        num /= 10;
    }
    printf("反転した数値 : %d\n",rev_num);
}
int get_num_digit(int x){
    unsigned int abs_x = abs(x);
    unsigned int num_digit = 0;

    do{
        abs_x = abs_x /10;
        num_digit++;
    }while(abs_x > 0);

    return num_digit;
}