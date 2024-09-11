#include<stdio.h>

int main(){
//Creating variables for length and breadth and area with int data type
    int length;
    int breadth;
    int area;

//Taking input from user in length and breadth with int data type
    printf("Enter the length of rectangle : ");
    scanf("%d",&length);
    printf("Enter the breadth of rectangle : ");
    scanf("%d",&breadth);

//Calculating area
    area = length*breadth;

//Printing area of rectangle
    printf("Area of rectangle is : %d",area);
    return 0;
}
