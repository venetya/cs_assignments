#include <stdio.h>

int main(){

    /*
    Write a program that reads in a floating-point number and prints it first in
    decimal-point notation and then in exponential notation. Have the output use the
    following format (the actual number of digits displayed for the exponent depends
    on the system):
    The input is 21.290000 or 2.129000e+001.
    */
    float input;
    printf("Enter a floating-point number: \n");
    scanf("%f", &input);
    printf("The number in decimal-point notation is %f\n", input);
    printf("The number in exponential notation is %e\n", input);

    return 0;
}