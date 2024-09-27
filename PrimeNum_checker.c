#include<stdio.h>

int main(){
    int n;
    printf("Enter the number: ");
    scanf("%d",&n);

    if(n/n == 1){
        printf("%d is a prime.\n",n);
    }

    else{
        printf("%d is not a prime.\n",n);
    }
}