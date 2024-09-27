// 4. WAP to check if the given number is Armstrone or not.
#include<stdio.h>
int reverse(int n){
    int rev;
    int revnum = 0;
    while(n != 0){
        rev = n%10;
        revnum =  revnum*10 + rev;
        n = n/10;
    }
    printf("The reverse number is: %d\n",revnum);
    return revnum;
}

int main(){
    int n;
    printf("Enter the number: ");
    scanf("%d",&n);
    if(n == reverse(n)){
        printf("The number is palindrome\n");
    }
    else{
        printf("The number is not palindrome\n");
    }


}

