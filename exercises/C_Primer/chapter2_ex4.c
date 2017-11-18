#include <stdio.h>

void sayJolly();
void sayNobody();

int main(){
    sayJolly();
    sayJolly();
    sayJolly();
    sayNobody();
    return 0;
}

void sayJolly(){
    printf("For he's a jolly good fellow!\n");
}

void sayNobody(){
    printf("Which nobody can deny!\n");
}