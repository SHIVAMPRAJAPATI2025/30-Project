// Write a program to Recursive sum of digits.	
#include <stdio.h>
int sum_digit(int n) {
    if (n==0) {
        return 0;
    } else {
        return (n % 10) +sum_digit(n /10);
    }
}
int main () {
    int num;
    printf("enter the number: ");
    scanf("%d", &num);
    printf("sum of digits =%d" , sum_digit(num));
    return 0;
}