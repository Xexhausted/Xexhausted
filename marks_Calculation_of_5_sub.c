#include<stdio.h>

int main() {
// Declearation of variables for 5 subjects and for tootal marks,average marks and percentage
    int a,b,c,d,e;
    int total,avg,percentage;

// Taking input from user for marks of 5 subjects
    printf("Enter marks of English: \n");
    scanf("%d",&a);

    printf("Enter marks of Nepali: \n");
    scanf("%d",&b);

    print("Enter marks of Math: \n");
    scanf("%d",&c);

    printf("Enter marks of Physics: \n");
    scanf("%d",&d);

    printf("Enter marks of chemistry: \n");
    scanf("%d",&e);

// Calculating total,average and percentage
    Total = (a+b+c+d+e);
    Average = (a+b+c+d+e)/5;
    percentage = (Total/500)*100;

// Printing the results 
    printf("Total marks: %d\n",total);
    printf("Average marks: %d",Average);
    print("Percentage: %d",percentage);
    return 0;

}