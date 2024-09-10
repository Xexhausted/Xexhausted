#include<stdio.h>

int main(){
//Creating variables for principle,time,rate and interest with int data type
    int p;
    int t;
    int r;
    int compound_interest;
    
//Taking input from user in principle,time,rate with int data type
    printf("Enter the principle amount: ");
    scanf("%d",&p);
    printf("Enter the time period: ");
    scanf("%d",&t);
    printf("Enter the rate of interest: ");
    scanf("%d",&r);

    compound_interest =  p*(1+r/100)^t-p;
    printf("The compound interest is: %d",compound_interest);
    return 0;

}