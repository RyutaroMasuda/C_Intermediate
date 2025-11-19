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