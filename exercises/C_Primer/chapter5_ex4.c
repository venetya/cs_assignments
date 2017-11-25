#include <stdio.h>
#include <math.h>
const float CM2FT = 30.48;
const float CM2IN = 2.54;
/*
Write a program that asks the user to enter a height in centimeters and then displays the
height in centimeters and in feet and inches. Fractional centimeters and inches should
be allowed, and the program should allow the user to continue entering heights until a
nonpositive value is entered. A sample run should look like this:
Enter a height in centimeters: 182
182.0 cm = 5 feet, 11.7 inches
Enter a height in centimeters (<=0 to quit): 168
168.0 cm = 5 feet, 6.1 inches
Enter a height in centimeters (<=0 to quit): 0
bye
*/

int main(){

    float cent = 0.0;
    float inches = 0.0;
    float in = 0.0;
    float feet = 0.0;

    printf("Enter a height in centimeters (<=0 to quit): \n");
    while(scanf("%f", &cent)==1 & cent > 0)
    {   
        feet = cent/CM2FT;
        inches = cent/CM2IN;
        in = fmod(inches, 12.0);
        printf("%1.2f =  %d feet, %1.1f inches\n", cent, (int)feet, in);
        printf("Enter a height in centimeters (<=0 to quit): \n");
    }
    printf("bye\n");
    return 0;
}