# 課題7_option
<div style="text-align:right;">
1X22B138 益田隆太郎

2025/11/22
</div>

### ソースコード
program111.c
```c
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#define BUF_SIZE 256

int main(int argc,char* argv[]){
    char buf[BUF_SIZE];
    char inFile[100];
    FILE* in;
    printf("inFile>");
    scanf("%s",inFile);
    in = fopen(inFile, "r");
    if(in==NULL){fprintf(stderr, "can't open for r @ fopen\n");exit(1);}
    int i =1;
    while(fgets(buf,BUF_SIZE,in)!=NULL){
        printf(">>%2d",i);
        printf("%s",buf);
        i++;
    }
    fclose(in);
    return 0;
}
```
### 結果  
```
masuda@kubo-ZA9C-R49:~/github/C_Intermediate/src/_07$ ./a.out 
inFile>datafile.txt
>> 1このファイルはprogram071 用のデータファイルです。
>> 2リダイレクションの機能を見るためなので、中身は何を書いてもOKです。
>> 3このファイルの置き場所は、プログラムを作成したdocumentsフォルダの
>> 4中に置いてください。
>> 5
>> 6コマンドプロンプトを使って
>> 7■ program071  <  このファイル (ファイル名 datafile.txt )
>> 8で実行すると、このファイルの内容に行番号が付加されて表示されます。
>> 9確認できましたか？
>>10
>>11次に、
>>12■program071  <  このファイル  > outfile.txt
>>13で実行すると画面には何も現れません。
>>14出力結果が outfile.txt に出力されたからです。
>>15outfile.txt を、テキストエディタなどで開いてみると、
>>16先ほどの出力結果と同じ内容のものが表示されるはずです。
```
### まとめ
fgetsで行ごとに読み込み