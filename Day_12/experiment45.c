// 	Write a program to Write function for palindrome.
#include<stdio.h>
int palindrome(int n) {
    int rev=0, temp=n ,rem;
    while(temp!=0) {
        rem = temp%10;
        rev =rev*10+rem;
        temp /=10;
    }
    return (n== rev) ;
}
int main() {
    int num;
    printf("enter a number: ");
    scanf("%d", &num);
    if(palindrome(num)) {
        printf("%d is a Palindrome number", num);
    } else {
        printf("%d is not a Palindrome number",num);
    }
    return 0;
}