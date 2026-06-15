// Write a program to Recursive reverse number.
#include<stdio.h>
int reverse_num(int n, int rev){
if(n == 0) {
    return rev;
} else {
    return reverse_num(n/10, rev*10 + n%10);
}
}
int main () {
    int num;
    printf("enter a number: ");
    scanf("%d", &num);
    printf("reversed number = %d", reverse_num(num,0));
    return 0;
}