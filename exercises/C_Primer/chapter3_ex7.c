#include <stdio.h>

int main(){
/*
There are 2.54 centimeters to the inch. Write a program that asks you to enter
your height in inches and then displays your height in centimeters. Or, if you
prefer, ask for the height in centimeters and convert that to inches.
*/

    float cent = 2.54;
    float height = 0.0;

    printf("Enter your height in inches: \n");
    scanf("%f", &height);

    printf("Your height in centimeters is %2.f\n", height * cent);
    return 0;
}