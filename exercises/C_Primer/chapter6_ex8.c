#include <stdio.h>
#include <ctype.h>
/*
Modify exercise 7 so that it uses a function to return the value of the calculation.
*/
float calc(float prod, float diff);

int main()
{
    float input[2];
    float num;
    int count = 0;

    printf("Enter two floating-point numbers:\n");
    while(scanf("%f", &num) ==1)
    {
        if(isalpha(num))
            break;

        input[count] = num;
        count++;

        if(count ==2)
        {
            float diff = input[0]>input[1]? input[0]-input[1]:input[1]-input[0];
            float prod = input[0] * input [1];
            printf("The difference is %1.2f\n", diff);
            printf("Their product is %1.2f\n", prod);
            printf("The difference divided by the product is %1.2f\n", calc(prod, diff));
            count = 0;
        }
    }


    return 0;
}

float calc(float prod, float diff)
{
    return diff/prod;
}