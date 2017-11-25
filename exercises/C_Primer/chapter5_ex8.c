#include <stdio.h>
/*
Write a program that requests the user to enter a Fahrenheit temperature. The program
should read the temperature as a type double number and pass it as an argument to a
user-supplied function called Temperatures(). This function should calculate the
Celsius equivalent and the Kelvin equivalent and display all three temperatures with a
precision of two places to the right of the decimal. It should identify each value with the
temperature scale it represents. Here is the formula for converting Fahrenheit to Celsius:
Celsius = 1.8 * Fahrenheit + 32.0
The Kelvin scale, commonly used in science, is a scale in which 0 represents absolute
zero, the lower limit to possible temperatures. Here is the formula for converting Celsius
to Kelvin:
Kelvin = Celsius + 273.16
The Temperatures() function should use const to create symbolic representations of
the three constants that appear in the conversions. The main() function should use a
loop to allow the user to enter temperatures repeatedly, stopping when a q or other nonnumeric
value is entered
*/

int main(){

    double fahr = 0.0;
    void Temperatures(double input);

    printf("Enter temperatures in Fahrenheit ('q' to quit): \n");

    while(scanf("%lf", &fahr) ==1)
        Temperatures(fahr);

    return 0;
}

void Temperatures(double input)
{
    const double FAHR = input;
    const double CELS = (FAHR - 32.0) * 5/9;
    const double KELV = CELS + 273.16;

    printf("Fahrenheight %1.2lf: \nCelsius: %1.2lf \nKelvin: %1.2lf \n", FAHR, CELS, KELV);
}