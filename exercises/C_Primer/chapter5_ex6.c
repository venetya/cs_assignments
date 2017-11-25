#include <stdio.h>

/*
 Now modify the program of Programming Exercise 5 so that it computes the sum of the
squares of the integers. (If you prefer, how much money you receive if you get $1 the
first day, $4 the second day, $9 the third day, and so on. This looks like a much better
deal!) C doesn’t have a squaring function, but you can use the fact that the square of n is
n * n.
*/

int main(){

    int count, sum, square;

    count = 0;
    sum = 0;
    square = 0;
    while(count++ < 20) 
        sum = sum + count;
        square = sum * sum;
    printf("sum squared = %d\n", square);

    return 0;
}