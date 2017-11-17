#include <stdio.h>
#include <math.h>

int main() {
/*
There are approximately 3.156 x 10^7 seconds in a year. Write a program that
requests your age in years and then displays the equivalent number of seconds.
*/
    double secyr = 3.156 * pow(10,7);
    int age;
    printf("How old are you?:\n");
    scanf("%d", &age);

    printf("You have lived for %f seconds!\n", age * secyr);
    return 0;
}