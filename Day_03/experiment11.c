// Write a program to Find GCD of two numbers.
#include <stdio.h>
int find_gcd(int a, int b){
    if(b==0){
        return a;
    }
    return find_gcd(b, a%b);

}
int main(){
    int num1, num2;
    printf("enter the two numbers: ");
    scanf("%d%d", &num1,&num2);
    int gcd = find_gcd(num1, num2);
    printf("GCD of %d and %d is: %d",num1,num2,gcd);
    return 0;
}