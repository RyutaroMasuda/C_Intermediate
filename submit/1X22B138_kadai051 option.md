# 課題5_option
<div style="text-align:right;">
1X22B138 益田隆太郎

2025/11/21
</div>

### ソースコード
```c
#include <stdio.h>
#define S_MAX 100

char *strmycat(char *s1,char*s2);
int count(char* c);
int main(){
    char s1[S_MAX];
    char s2[S_MAX];

    printf("文字列S1を入力してください: ");
    scanf("%s",s1);
    printf("文字列S2を入力してください: ");
    scanf("%s",s2);
    strmycat(s1,s2);

    printf("連結後の文字列a = \"%s\"\n",s1);

}

int count(char* c){
    int count=0;
    while(c[count]!='\0'){
        count++;
    }
    return count;
}

char *strmycat(char *s1,char *s2){
    int len1=count(s1);
    int len2=count(s2);
    int concat_length = count(s1)+count(s2);

    for(int i=0;i<len2;i++){
        s1[i+len1]=s2[i];
    }
    s1[concat_length]='\0';
    return s1;
}
```
### 結果  
```
masuda@kubo-ZA9C-R49:~/github/C_Intermediate/src/_05$ ./kadai051.exe 
文字列S1を入力してください: waseda
文字列S2を入力してください: university
連結後の文字列a = "wasedauniversity"
```