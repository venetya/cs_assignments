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
    float num = 1.0;
    int input;

    printf("How many terms?\n");
    scanf("%d", &input);
    printf("%1.1f + ", num);
    for(int i = 1; i<input;i++)
    {
        printf("%1.1f/%1.1f + ", num, num + i);
    }
    printf("\n");

    return 0;
}