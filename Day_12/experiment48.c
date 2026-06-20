// 	Write a program to Write function for perfect number.	
#include<stdio.h>
int perfect(int n) {
    int sum=1;
    for(int i=2; i*i<=n; i++) {
        if(n%i==0) {
            sum += i;
            if(i != n/i)
            sum +=n/i;
        }
    }
        return sum == n;
    
}
int main() {
    int num;
    printf("enter a number: ");
    scanf("%d",&num);
    if(perfect(num)) {
        printf("%d is a perfect number", num);
    } else {
        printf("%d is not a perfect number",num);
    }
    return 0;
}