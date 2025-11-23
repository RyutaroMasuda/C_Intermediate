#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct TagTeacher{
    char c;
    char name[20];
    char gakka[20];
    char kamoku[100];
} Teacher;

typedef struct TagStdnt{
    char c;
    char name[20];
    char bu[20];
} Stdnt;

typedef union{
    char c;
    Teacher t;
    Stdnt s;
} Member;

Teacher newTeacher(const char*n, const char *g, const char *k);

Stdnt newStdnt(const char *n, const char *b);

char* mString(Member m);

int main(void){
    Member m[100];
    int nM;
    char *t;
    int i;

    m[0].t = newTeacher("小田井圭","情報学科","情報数学");
    m[1].s = newStdnt("高田馬場於","教育学部");
    m[2].t = newTeacher("小野梓","情報学科","プログラミング初級");
    m[3].s = newStdnt("大久保利通","商学部");
    m[4].s = newStdnt("目白秋子","法学部");
    m[5].s = newStdnt("代々木和夫","第一文学部");
    m[6].s = newStdnt("秋葉原春子","政治経済学部");

    nM=7;

    for(i=0;i<nM;++i){
        t = mString(m[i]);
        printf("%s\n",t);
        free(t);
    }

    return 0;
}

Teacher newTeacher(const char*n, const char* g,const char* k){
    Teacher z;
    z.c = 'T';
    strcpy(z.name,n);
    strcpy(z.gakka,g);
    strcpy(z.kamoku,k);
    return z;
}

Stdnt newStdnt(const char* n,const char* b){
    Stdnt z;
    z.c = 'S';
    strcpy(z.name, n);
    strcpy(z.bu,b);
    return z;
}

char* mString(Member m){
    char* z;
    z = (char *)malloc(200);
    if(z==NULL){printf("malloc error!");exit(1);}
    if(m.c=='T'){
        sprintf(z,"教員[%s,%s,%s]",m.t.name,m.t.gakka,m.t.kamoku);
    }else if(m.c=='S'){
        sprintf(z,"学生[%s,%s]",m.s.name,m.s.bu);
    }else{sprintf(z,"ありえないデータ");}
    return z;
}