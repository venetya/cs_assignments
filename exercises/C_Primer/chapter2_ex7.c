#include <stdio.h>

void two(){
    /* 1. display the word two on one line */
    printf("two\n");
}

void one_three(){
  /* 1. display the word one on one line */
  printf("one\n");
  /* 2. call the function two */
  two();
  /* 3. display the word three on one line */
  printf("three\n");
}
/* */

int main(){

    printf("starting now:\n");
    one_three();
    printf("done!\n");
    return 0;
}