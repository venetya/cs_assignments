#include <stdio.h>

/*
Write a program that asks the user to enter the number of days and then converts that
value to weeks and days. For example, it would convert 18 days to 2 weeks, 4 days.
Display results in the following format:
18 days are 2 weeks, 4 days.
Use a while loop to allow the user to repeatedly enter day values; terminate the loop
when the user enters a nonpositive value, such as 0 or -20.
*/

int main(){
    
    int numdays = 0;
    printf("Enter the number of days (nonpositive value to quit): \n");
    while(scanf("%d", &numdays)==1 && numdays > 0)
    {
        printf("%d days are %d weeks, %d days.\n", numdays, numdays/7, numdays % 7);
    }
    return 0;
}