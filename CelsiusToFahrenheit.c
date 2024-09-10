#include<stdio.h>

int main(){
// create variables for celsius and fahrenheit with float data type
    float celsius;
    float fahrenheit;

// Taking input from user in celsius with float data type.
    printf("Enter the temperature in celsius: ");
    scanf("%f", &celsius);

// coverting celsius to fahrenheit using formula.  fahrenheit = (Celsius * 9 / 5) + 32
    fahrenheit = (Celsius * 9 / 5) + 32;


// Printing the calculated tempeture in fahrenheit
    printf("Temperature in fahrenheit is: %f", fahrenheit);
    return 0;
}
