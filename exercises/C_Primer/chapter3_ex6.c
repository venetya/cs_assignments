#include <stdio.h>
#include <math.h>

int main(){
    /*
    The mass of a single molecule of water is about 3.0x10^-23 grams. A quart of water
    is about 950 grams. Write a program that requests an amount of water, in quarts,
    and displays the number of water molecules in that amount.
    */
    double molecule = pow((3.10 * 10), -23);
    double water = 0.0;
    printf("How many quarts of water?: \n");
    scanf("%lf", &water);
    printf("%lf quarts of water contains %lf molecules of water.\n", water, water/molecule);

    return 0;
}