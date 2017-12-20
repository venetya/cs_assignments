#include <stdio.h>
#define REGULAR 40.0
#define BASIC 10.0 * REGULAR
#define PAYRATE 10.0
#define OVERTIME PAYRATE * 1.5
#define RATE1 0.15 
#define RATE2 0.20
#define RATE3 0.25
#define BREAK1 300.0
#define BREAK2 150.0
#define TAX1 (RATE1 * BREAK1)
#define TAX2 (RATE2 * BREAK2)

/*
Write a program that requests the hours worked in a week and then prints the gross pay,
the taxes, and the net pay. Assume the following:

a. Basic pay rate = $10.00/hr
b. Overtime (in excess of 40 hours) = time and a half
c. Tax rate: 
    15% of the first $300
    20% of the next $150
    25% of the rest

Use #define constants, and don’t worry if the example does not conform to current
tax law.
 TAX1 = 45
45 + (PAY-BREAK1) * RATE2
400 - 300 = 100 * RATE2
TAX1 + TAX2 (45 + 30)
(550 - 300) > BREAK2
PAY - (BREAK1 + BREAK2) * .25
700 - 450 = 250 * .25
*/

int main()
{
    double hours, pay, taxes, netpay, remainder;

    printf("Enter your hours for the week:\n");
    scanf("%lf", &hours);

    if(hours <= REGULAR)
        pay = hours * PAYRATE;
    else if(hours > REGULAR)
        pay = BASIC + ((hours - REGULAR) * OVERTIME);

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
    return 0;
}