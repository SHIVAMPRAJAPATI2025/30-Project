// 	Write a program to Recursive Fibonacci.	
#include<stdio.h>
int fibonacci(int n){
    if(n==0) {
        return 0;
    } if(n==1) {

        return 1;
    } else {
      return fibonacci(n-1) +fibonacci(n-2);
    }
}
int main(){
    int num;
    printf("enter the number: ");
    scanf("%d",&num);
    if(num >=0) {
        printf(" Fibonacci sequence: ");
        for(int i=0 ;i<=num ; i++) {
            printf("%d ", fibonacci(i));
        }
    }
   
    return 0;

}