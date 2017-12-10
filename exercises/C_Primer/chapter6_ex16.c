#include <stdio.h>
const double BALANCE = 1000000;
const double WITHDRAW = 100000;
/*
Chuckie Lucky won a million dollars, which he places in an account that earns 8% a
year. On the last day of each year, Chuckie withdraws $100,000. Write a program that
finds out how many years it takes for Chuckie to empty his account.
*/
int main()
{
    double current = BALANCE;
    double addedint;
    double interest = 0.08;
    int year = 1;
    printf("Starting balance: %7.2lf\n", BALANCE);
    while(current > 0.00)
    {   
        printf("Year: %d\n", year);
        addedint = current * interest;
        current += addedint;
        printf("After interest:\t\t$%7.2lf\n", current);
        if(current >= WITHDRAW)
        {
            current -= WITHDRAW;
        }
        else
        {
            current -= current;
        }
        year++;
        printf("After withdrawal:\t$%7.2lf\n", current);
    }

    printf("It takes %d years for Lucky Chuckie to empty his account.\n", year-1);
    return 0;
}
