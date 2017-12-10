#include <stdio.h>

/*
Daphne invests $100 at 10% simple interest. (That is, every year, the investment earns
an interest equal to 10% of the original investment.) Deirdre invests $100 at 5% interest
compounded annually. (That is, interest is 5% of the current balance, including previous
addition of interest.) Write a program that finds how many years it takes for the value of
Deirdre’s investment to exceed the value of Daphne’s investment. Also show the two values
at that time.

*/

int main()
{
    double invested = 100.00;
    int year = 1;
    float simple = invested * 0.10;
    float compound = 0.00;

    double daphne = invested;
    double deirdre = invested;
    
    printf("Starting value: Daphne: $%1.2lf, Deirdre: $%1.2lf\n", daphne, deirdre);
    while(daphne >= deirdre)
    {
        daphne += simple;
        compound = deirdre * 0.05;
        deirdre += compound;
        year++;
    }

    printf("It takes %d years for Deirdre's investment to exceed Daphne's.\n", year);
    printf("Deirdre's value: $%1.2lf\nDaphne's value: $%1.2lf\n", deirdre, daphne);

    return 0;
}