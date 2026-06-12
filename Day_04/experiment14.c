//Write a program to find the nth fibonacci term.
#include <stdio.h>
int fibonacci(int n){
    if(n==0){
        return 0;
    }else if(n==1){
        return 1;
    }
    else{
        return fibonacci(n-1)+fibonacci(n-2);
    }

}
int main(){
    int n;
    printf("enter the term number: ");
    scanf("%d",&n);
    printf("the %dth term of fibonacci series is :%d",n,fibonacci(n));
    return 0;
}
