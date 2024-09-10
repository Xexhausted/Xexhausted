#include<stdio.h>

int main(){

// Declearing variables for length and breadth and perimeter
    int length;
    int breadth;
    int perimeter;

//Taking input from user in length and breadth
    printf("Enter the length of rectangle: ");
    scanf("%d",&length);
    printf("Enter the breadth of rectangle: ");
    scanf("%d",&breadth);

    perimeter = 2*(length+breadth);
    printf("The perimeter of rectangle is: %d",perimeter);
    return 0;

}