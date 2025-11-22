# 課題4_option
<div style="text-align:right;">
1X22B138 益田隆太郎

2025/11/21
</div>

### ソースコード
```c

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

```
### 結果  
```
masuda@kubo-ZA9C-R49:~/github/C_Intermediate/src/_04$ ./kadai041.exe 
反転前 文字列a = waseda
反転前 文字列b = tokyo
反転後 文字列a = adesaw
反転後 文字列b = oykot
```
### まとめ
- 配列a[0]はポインタ*aと同じ意味で、*(a+1)はa[1]を指す。
	- aはアドレスを表して、&a[0]と同じ意味