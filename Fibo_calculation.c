// 3. WAP to check if the given number is palindrome or not.

#include<stdio.h>
int a=0,b=1,c;
int Fibonacci(int n){
    c = a + b;
    printf("%d + %d = %d\n",a,b,c);
    if(n == 0){
        return 0;
    }
    else{
        a = b;
        b = c;
        Fibonacci(n-1);
    }
}
int main(){
    int n;
    printf("Enter the number for Fibonacci Series: ");
    scanf("%d",&n);
    printf("Fibonacci Series upto %d numbers. \n",n);
    Fibonacci(n);
    return 0;
}