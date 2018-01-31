#include <stdio.h>
#define MAX 5

void sort(int arr[], int);
int main(void)
{
    int arr[5] = {12, 11, 13, 5, 6};
    sort(arr, MAX);

    printf("Sorted array: \n");
    for(int i = 0;i < MAX;i++)
        printf("%d ", arr[i]);
     printf("\n");   
}
//12, 11, 13, 5, 6
void sort(int arr[], int num)
{
    int temp, i, j;
    for(i = 1; i < num; i++)
    {   
        j = i-1;
        temp = arr[i];
       
        while(j >=0 && arr[j] > temp)
        {
            arr[j+1] = arr[j];
            j = j-1;
        }
        arr[j+1] = temp;
    }
}