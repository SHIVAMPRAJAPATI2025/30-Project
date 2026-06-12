// Write a program to cheak Armstrong number.
#include <stdio.h>
int main(){ 
    int num, originalNUM,sum=0, rem;
    printf("enter a number: ");
    scanf("%d",&num);
    originalNUM=num;
    while(num>0){
        rem=num%10;
        sum += rem*rem*rem;
        num=num/10;
    }
    if(sum==originalNUM){
        printf("%d is an armstrong number",originalNUM);
} else{
    printf("%d is not an armstrong number",originalNUM);
}
return 0;
}