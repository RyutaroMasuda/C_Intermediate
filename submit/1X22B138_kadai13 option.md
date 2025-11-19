# kadai13_option
<div style="text-align:right;">
1X22B138 益田隆太郎

2025/11/19
</div>

### ソースコード
kadai131.c
```c
#include <stdio.h>
#include "Module.h"

int main(void){
    set_a(10);
    set_b(20);
    set_c(100);

    printf("a=%d, b=%d\n",get_a(),get_b());
    swap_ab();
    printf("a=%d, b=%d\n",get_a(),get_b());
    printf("c:%d\n",get_c());
    return 0;
}
```

Module.c
```c
static int a;
static int b;
static int c;

int get_a(void){
    return a;
}

int get_b(void){
    return b;
}

void set_a(int x){
    a=x;
}

void set_b(int x){
    b=x;
}

void swap_ab(void){
    int w;
    w = a;
    a = b;
    b = w;
}

void set_c(int x){
    c = x;
}
int get_c(void){
    return c;
}
```

Module.h
```c
int get_a(void);

int get_b(void);

int get_c(void);

void set_a(int x);

void set_b(int x);

void set_c(int x);

void swap_ab(void);
```
### 結果  
```
masuda@DESKTOP-JOV4TPA:~/work/C_intermediate/src/_13$ ./kadai131.exe 
a=10, b=20
a=20, b=10
c:100
```