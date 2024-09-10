#include<stido,g>

int main(){
// Allocating constant valuse for PI using define
    define PI = 3.14159;

// Declaring variables for radius and area using float
    float radius;
    float area;

// Taking input from user for radius using float data type
    print("Enter the radius of the circle: ");
    scanf("%f", &radius);

// Calculating area of circle and printing it
    area = PI * radius * radius;
    printf("Area of circle = %f", area)

}