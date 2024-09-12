#include<stdio.h>

int main(){

    int marks;
    printf("Enter your marks: ");
    scanf("%d",&marks);

    if (marks>100){
        printf("Invalid marks");
    }

    else if (marks>=90){
        printf("Grade A+");
    }
    else if (marks>=80 && marks<90){
        printf("Grade A");
    }

    else if (marks>=70 && marks<80){   
        printf("Grade B+");
    }

    else if (marks>=60 && marks<70){
        printf("Grade B");
    }

    else if (marks>=50 && marks<60){
        printf("Grade C+");
    }

    else if (marks<50&& marks>=40){
        printf("Grade C");
    }
    else if (marks<40 && marks>=35){
        printf("Grade D");
    }
    else{
        printf("you failed in exam.");
    }
}
