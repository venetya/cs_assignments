#include<stdio.h>

int main(){
    char x = 'x';
    short s = 5;
    int i = 7;
    long l = 10;

    printf("char %c has a size of %lu bytes\n", x, sizeof(x));
    printf("short %i has a size of %lu bytes\n", s, sizeof(s));
    printf("int %d has a size of %lu bytes\n", i, sizeof(i));
    printf("long %li has a size of %lu bytes\n", l, sizeof(l));

    return 0;
}