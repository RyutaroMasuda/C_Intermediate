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