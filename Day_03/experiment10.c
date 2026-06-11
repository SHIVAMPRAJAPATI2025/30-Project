// Write a program to print prime numbers in a range.
#include <stdio.h>
int main (){
    int num1, num2, count,i,j;
    printf("enter the range : ");
    scanf("%d%d",&num1,&num2);
    for(i=num1; i<=num2; i++){
        count=0;
        for( j=1; j<=i; j++){
            if(i%j==0){
                count++;
            }
        }
    

    if(count==2){
        printf("%d ",i);

    }
}
    return 0;
}