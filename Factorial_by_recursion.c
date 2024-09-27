// 6. WAP to print factorial of all natural number using recursion

#include<stdio.h>

int factorial(int n){
    if(n ==0 || n ==1){
       return 1;
    }
    return n * factorial(n-1);
}

int main(){
    int n;
    printf("Enter the number: ");
    scanf("%d",&n);

    printf("The factory of %d is: %d\n",n,factorial(n));
}