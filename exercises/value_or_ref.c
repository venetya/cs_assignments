#include <stdio.h>

void call_me(int input){
    input = 5;
    printf("the address of input(num) inside of the function is %p\n", &input);
}

int main(){
    int num = 1;
    printf("the address of num outside of the function is %p\n", &num);
    
    call_me (num);

    return 0;
}

