// 	Write a program to Check strong number.	
#include <stdio.h>
int factorial(int n) {
    if(n==0 || n==1){
        return 1;
    } else {
        return n*factorial(n-1);
    }
} 
int main() {
    int num, temp, sum=0, rem;
printf("enter a number : ");
scanf("%d", &num);
temp=num;
while(num>0){
    rem=num%10;
    sum+=factorial(rem);
    num=num/10;
}
if(sum==temp){
    printf("%d is a strong number", temp);
} else {
    printf("%d is not a strong number", temp);
}
return 0;
}
