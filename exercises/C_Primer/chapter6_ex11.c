#include <stdio.h>

/*
Consider these two infinite series:
1.0 + 1.0/2.0 + 1.0/3.0 + 1.0/4.0 + ...
1.0 - 1.0/2.0 + 1.0/3.0 - 1.0/4.0 + ...
Write a program that evaluates running totals of these two series up to some limit of
number of terms. Have the user enter the limit interactively. Look at the running totals
after 20 terms, 100 terms, 500 terms. Does either series appear to be converging to some
value? Hint: –1 times itself an odd number of times is –1, and –1 times itself an even
number of times is 1
*/

int main()
{
    double num1, num2, x;
    int t_ct;   // term count for each series
    int limit;

    printf("How many terms? ");
    scanf("%d", &limit);
    for(num1=0, num2=0, x=1, t_ct=1;t_ct <= limit; t_ct++,x *=2.0)
    {
        num1 += 1.0/x;
        num2 -= 1.0/x;
        printf("series 1 value = %f when terms = %d.\n", num1, t_ct);
        printf("series 2 value = %f when terms = %d.\n", num2, t_ct);
    }
    return 0;
}
