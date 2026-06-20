// Write a program to Write function for Armstrong.
#include<stdio.h>
int armstrong(int n) {
    int sum=0,rem,temp=n;
    while(temp!=0) {
        rem =temp%10;
        sum += rem*rem*rem;
        temp /=10;
    }
    return(sum == n);
}
int main() {
    int num ;
    printf("enter the number: ");
    scanf("%d",&num);
    if(armstrong(num)) {
        printf("%d is an armstrong number",num);
    } else {
        printf("%d is not an armstrong number",num);
    }
    return 0;
}