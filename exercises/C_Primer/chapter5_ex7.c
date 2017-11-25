#include <stdio.h>

/*
Write a program that requests a type float number and prints the value of the number
cubed. Use a function of your own design to cube the value and print it. The main()
program should pass the entered value to this function.
*/

int main() {
    float cubed(float input);
    float input = 0.0;

    printf("Enter a number: \n");

    while(scanf("%f", &input) ==1)
        printf("%1.2f\n", cubed(input));
    
    return 0;
}

float cubed(float input)
{
    if(input > 0)
        return input * input * input;
    
    return 0.0;
}