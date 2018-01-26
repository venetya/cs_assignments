#include <stdio.h>
#define MAX 8
int main(void) 
{
    int arr[MAX] = {7,5,4,6,0,2,3,1};
    printf("Original array: \n");
    for(int num = 0; num < MAX; num++) 
    {
        printf("%d ", arr[num]);      
    }
    printf("\n");
    /* Place the algorithm here */
    for(int i = 0; i < MAX; i++) {
        for(int j = 0; j < MAX-i-1; j++) 
        {
            int temp;
            if(arr[j] > arr[j+1])
            {
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            } 
        }
    }
    printf("Sorted array: \n");
    for(int i = 0; i < MAX; i++) 
    {
         printf("%d ", arr[i]);

    }
    printf("\n");
    return 0;
}

/*
Bubble Sort
1.6
Bubble Sort is the simplest sorting algorithm that works by repeatedly 
swapping the adjacent elements if they are in wrong order.

Example:
arr = |5|1|4|2|8|

First Pass:
|5|1|4|2|8| => we want the lowest value of x and y on the left => |1|5|4|2|8|
 x y

|1|5|4|2|8| => we want the lowest value of x and y on the left => |1|4|5|2|8|
   x y

|1|4|5|2|8| => we want the lowest value of x and y on the left => |1|4|2|5|8|
     x y

|1|4|2|5|8| => we want the lowest value of x and y on the left => |1|4|2|5|8| (no change)
       x y

arr = |3|9|4|8|2|

First Pass:

|3|9|4|8|2| => |3|9|4|8|2|
 x y

|3|9|4|8|2| => |3|4|9|8|2|
   x y

|3|4|9|8|2| => |3|4|8|9|2|
     x y
    
|3|4|8|9|2| => |3|4|8|2|9|
       x y

Second Pass:
|3|4|8|2|9| => |3|4|8|2|9|
 x y

|3|4|8|2|9| => |3|4|8|2|9|
   x y

|3|4|8|2|9| => |3|4|2|8|9|
     x y

Third Pass:
|3|4|2|8|9| => |3|4|2|8|9|
 x y

|3|4|2|8|9| => |3|2|4|8|9|
   x y

Fourth Pass:
|3|2|4|8|9| => |2|3|4|8|9|
 x y  
      
Things to think about:

For each pass, where do x&y start and end? (Think in terms of indices/positions)
For an array of n elements, how many passes need to occur for the array to be sorted?
Nested for loops are your friends


( 5 1 4 2 8 ) –> ( 1 5 4 2 8 ), Here, algorithm compares the first two elements, and swaps since 5 > 1.
( 1 5 4 2 8 ) –>  ( 1 4 5 2 8 ), Swap since 5 > 4
( 1 4 5 2 8 ) –>  ( 1 4 2 5 8 ), Swap since 5 > 2
( 1 4 2 5 8 ) –> ( 1 4 2 5 8 ), Now, since these elements are already in order (8 > 5), algorithm does not swap them.

Second Pass:
( 1 4 2 5 8 ) –> ( 1 4 2 5 8 )
( 1 4 2 5 8 ) –> ( 1 2 4 5 8 ), Swap since 4 > 2
( 1 2 4 5 8 ) –> ( 1 2 4 5 8 )
( 1 2 4 5 8 ) –>  ( 1 2 4 5 8 )
Now, the array is already sorted, but our algorithm does not know if it is completed. 
The algorithm needs one whole pass without any swap to know it is sorted.

Third Pass:
( 1 2 4 5 8 ) –> ( 1 2 4 5 8 )
( 1 2 4 5 8 ) –> ( 1 2 4 5 8 )
( 1 2 4 5 8 ) –> ( 1 2 4 5 8 )
( 1 2 4 5 8 ) –> ( 1 2 4 5 8 )
*/