// 	Write a program to Recursive factorial.
#include <stdio.h>
int factorial(int n){
    if(n==0 ||n==1){
        return 1;
    } else {
        return n*factorial(n-1);
    }
}	
int main(){
    int num;
    printf("enter the number: ");
    scanf("%d",&num);
    int fact= factorial(num);
    printf("factorial of %d is %d", num ,fact);
    return 0;
}