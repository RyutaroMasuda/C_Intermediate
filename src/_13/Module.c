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