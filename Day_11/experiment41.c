// 	Write a program to Write function to find sum of two numbers.
#include<stdio.h>
int sum(int a, int b) {
    return a+b;
}
int main() {
    int num1, num2;
    printf("enter two number: ");
    scanf("%d%d", &num1,&num2);
    printf("sum=%d",sum(num1,num2));
    return 0;
}