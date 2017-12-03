#include <stdio.h>
#include <ctype.h>

/*
Write a program that requests two floating-point numbers and prints the value of their
difference divided by their product. Have the program loop through pairs of input values
until the user enters nonnumeric input.
*/

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
            printf("The difference divided by the product is %1.2f\n", diff/prod);
            count = 0;
        }
    }


    return 0;
}