#include <stdio.h>
#define MINUTES 60
/*
Write a program that converts time in minutes to time in hours and minutes. Use
#define or const to create a symbolic constant for 60. Use a while loop to allow
the user to enter values repeatedly and terminate the loop if a value for the time
of 0 or less is entered.
*/
int main() {
    int min = 0;
    printf("Enter values in minutes: \n");
    while(scanf("%d", &min) == 1)
    {
        if(min <= 0)
            break;
        printf("%d minutes is %d:%02d\n", min, min / MINUTES, min % MINUTES);
    }
    return 0;
}