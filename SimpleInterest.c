#include<stdio.h>

int main(){
//Creating variables for principle,time,rate and interest with int data type
    int p;
    int t;
    int r;
    int interest;
    
//Taking input from user in principle,time,rate with int data type
    printf("Enter the principle amount: ");
    scanf("%d",&p);
    printf("Enter the time period: ");
    scanf("%d",&t);
    printf("Enter the rate of interest: ");
    scanf("%d",&r);

//Calculating interest with formula interest = (p*t*r)/100
    interest = (p*t*r)/100;
    printf("The interest is: %d",interest);
    return 0;

}