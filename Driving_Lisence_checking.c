#include<stdio.h>

int main(){
    
    int age;
    char lisence;

    printf("Enter your age: ");
    scanf("%d",&age);

    printf("y for yes and n for no\n");
    printf("Do you have a lisence: ");
    scanf("%s",&lisence);

    if (age<=21 && lisence=='y'){
        printf("You are eligible to drive here.");
    }
    else{
        printf("You are not eligible to drive here.");
    }
}