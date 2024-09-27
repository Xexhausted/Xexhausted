// 5. WAP to print sum of all natural number using recursion.

#include<stdio.h>

int sum(int n){
    if(n !=0){
        return n + sum(n-1);
    }
    return 0;
}

int main(){
    int n;
    printf("Enter the number: ");
    scanf("%d",&n);

    printf("The sum is: %d\n",sum(n));
}