# 課題06_option
<div style="text-align:right;">
1X22B138 益田隆太郎

2025/11/21
</div>

### ソースコード
```c
#include <stdio.h>
#include <string.h>

int main(int argc,char* argv[]){
    char *find;

    find = strstr(argv[1],argv[2]);

    if(find != NULL){
        printf("パターンは%dに存在します\n",(int)(find-argv[1]));
    }else{
        printf("パターンは存在しません\n");
    }
    return 0;
}
```
### 結果  
```
masuda@kubo-ZA9C-R49:~/github/C_Intermediate/src/_06$ ./kadai061.exe asasasas as
パターンは0に存在します
masuda@kubo-ZA9C-R49:~/github/C_Intermediate/src/_06$ ./kadai061.exe abcdefg bc
パターンは1に存在します
```