// Write a program to Write function to check prime.
#include<stdio.h>
int isPrime(int n) {
    if(n<=1)
    return 0;
    for(int i=2; i<=n/2; i++) {
        if(n%i==0)
        return 0;
    } return 1;
}
int main() {
    int num;
    printf("enter the number: ");
    scanf("%d",&num);
    if(isPrime(num)){
        printf("Prime number");
    } else {
        printf("Not Prime Number");
    }
    return 0;
}