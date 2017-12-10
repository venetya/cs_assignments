#include <stdio.h>
int const SIZE = 8;
void displayContents(double arr1[SIZE], double arr2[SIZE]);
/*
Write a program that creates two eight-element arrays of doubles and uses a loop to let
the user enter values for the eight elements of the first array. Have the program set the
elements of the second array to the cumulative totals of the elements of the first array.
For example, the fourth element of the second array should equal the sum of the first
four elements of the first array, and the fifth element of the second array should equal
the sum of the first five elements of the first array. (It’s possible to do this with nested
loops, but by using the fact that the fifth element of the second array equals the fourth
element of the second array plus the fifth element of the first array, you can avoid nesting
and just use a single loop for this task.) Finally, use loops to display the contents of the
two arrays, with the first array displayed on one line and with each element of the second
array displayed below the corresponding element of the first array

arr2[0] = arr1[0]
arr2[1] = arr2[0] + arr1[1]
arr2[2] = arr2[1] + arr1[2]
arr2[3] = arr2[2] + arr1[3]
arr2[4] = arr2[3] + arr1[4]
*/

int main()
{
    double input[SIZE];
    double sum[SIZE];
    int index;

    printf("Enter eight values for the the first array: \n");
    int count = 0;
   
    for(index = 0; index < SIZE; index++)
        {
            scanf("%lf", &input[index]);
            if(index==0)
                sum[index] = input[index];
            sum[index] = sum[index - 1] + input[index];
        }

        displayContents(input, sum);
       
    return 0;
}

void displayContents(double arr1[SIZE], double arr2[SIZE])
{
    int index;
    for(index = 0; index < SIZE; index++)
    {
        printf("First array[%d]: %1.1lf\n", index,arr1[index]);
        printf("Second array[%d]: %1.1lf\n\n", index,arr2[index]);
    }

}