#include <stdio.h>

int main() {
    /*
    Write a program that asks you to enter an ASCII code value, such as 66, and then
prints the character having that ASCII code.
    */
    char input;
    printf("Enter an ASCII code value:\n");
    scanf("%d", &input);
    printf("The ASCII value %d is translated as the character %c\n", input, input);

    return 0;
}