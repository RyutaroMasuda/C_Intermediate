#include <stdio.h>

void myReverse(char* x);

int main(){
    char a[] = {"waseda"};
    char b[] = {"tokyo"};
    printf("反転前 文字列a = %s\n", a);
    printf("反転前 文字列b = %s\n", b);
    myReverse(a);
    myReverse(b);
    printf("反転後 文字列a = %s\n", a);
    printf("反転後 文字列b = %s\n", b);
    return 0;
}

void myReverse(char* x){
    int line_length = 0;
    while(x[line_length]!= '\0'){
        line_length++;
    }
    
    for(int i=0;i<line_length/2;i++){
        char temp = x[i];
        x[i] = x[line_length-1-i];
        x[line_length-1-i] = temp;
    }
}