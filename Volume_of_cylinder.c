#include<stdio.h>

int main(){

// Declearing constant valuse for PI using define
    define PI = 3.14159;
// Declearing variables using int date type
    int radius,height;
    int volume;

// Taking input for radius and height from user using int data type
    printf("Enter the radius of the cylinder: ");
    scanf("%d",&radius);
    printf("Enter the height of the cylinder: ");
    scanf("%d",&height)

// Calculating volume of the cylinder using formula volume = PI * radius^2 * height
    volume = PI * radius^2 * height

// Printing the volume of the cylinder
    printf("The volume of the cylinder is: %d",volume);
    return 0;
}