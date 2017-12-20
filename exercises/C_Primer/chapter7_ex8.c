#include <stdio.h>
#define REGULAR 40.0
#define PAYRATE 10.0 
#define RATE1 0.15 
#define RATE2 0.20
#define RATE3 0.25
#define BREAK1 300.0
#define BREAK2 150.0
#define TAX1 (RATE1 * BREAK1)
#define TAX2 (RATE2 * BREAK2)

void calcPay();
void showMenu();

/*
Modify assumption a. in exercise 7 so that the program presents a menu of pay rates
from which to choose. Use a switch to select the pay rate. The beginning of a run
should look something like this:
*****************************************************************
Enter the number corresponding to the desired pay rate or action:
1) $8.75/hr 
2) $9.33/hr
3) $10.00/hr 
4) $11.20/hr
5) quit
*****************************************************************
If choices 1 through 4 are selected, the program should request the hours worked. The
program should recycle until 5 is entered. If something other than choices 1 through 5 is
entered, the program should remind the user what the proper choices are and then recycle.
Use #defined constants for the various earning rates and tax rates.
*/

int main()
{
    int input;

    showMenu();
    while(scanf("%d", &input)==1)
    {
        if(input==5)
            break;
        
        if(input <= 4)
            calcPay(input);
        
        else
            printf("You entered an invalid selection.\n");
            showMenu();
    }

    return 0;
}

void showMenu()
{
    printf("Enter the number corresponding to the desired pay rate or action:\n");
    printf("\n");
    printf("1) $8.75/hr\n");
    printf("2) $9.33/hr\n");
    printf("3) $10.00/hr\n");
    printf("4) $11.20/hr\n");
    printf("5) quit\n");
}


void calcPay(int num)
{
    double hrly, hours, pay, taxes, netpay, remainder;
    switch(num)
    {
        case 1 : hrly = 8.75;
        break;
        case 2 : hrly = 9.33;
        break;
        case 3 : hrly = PAYRATE;
        break;
        case 4 : hrly = 11.20;
        break;
        default : break;
    }

    printf("Enter your hours for the week:\n");
    scanf("%lf", &hours);

    if(hours <= REGULAR)
        pay = hours * hrly;
    else if(hours > REGULAR)
        pay = (hrly * REGULAR) + ((hours - REGULAR) * (hrly * 1.5));

    // calculate taxes
    if(pay == BREAK1)
        taxes = TAX1;
    
    else if(pay < BREAK1)
        taxes = pay * RATE1;

    else if(pay > BREAK1 + BREAK2)
        taxes = TAX1 + TAX2 + (pay - (BREAK1 + BREAK2)) * RATE3;
    
    else if(pay > BREAK1)
        taxes = TAX1 + ((pay - BREAK1)) * RATE2;

    netpay = pay - taxes;

    printf("Total hours: %0.2lf\n", hours);
    printf("Gross pay: $%0.2lf\n", pay);
    printf("Taxes are $%0.2lf\n", taxes);
    printf("Net pay is $%0.2lf\n", netpay);
    printf("\n");
}