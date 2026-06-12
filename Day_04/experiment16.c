// Write a program to print the armstrong numbers in a range.
#include <stdio.h>
#include <math.h>
int main() {
    int lower, upper, num, sum=0,original_num, rem;
    printf("enter the range : ");
    scanf("%d%d", &lower,&upper);
    printf("armstrong number between %d and %d are :",lower,upper);
    for (num=lower; num<=upper; num++) {
        original_num=num;
        while(original_num!=0){
            rem=original_num%10;
            sum+=rem*rem*rem;
            original_num/=10;
        }
        if(sum==num){
            printf("%d ",num);
        }
        sum=0;

    }
    return 0;
}