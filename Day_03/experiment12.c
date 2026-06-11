//Write a program to Find LCM of two numbers.	
#include <stdio.h>
int find_lcm(int a, int b,int common_multiple){
    if(common_multiple%a==0 && common_multiple%b==0){
        return common_multiple;
    }
    return find_lcm(a,b,common_multiple+1);

}
int main(){
    int num1,num2;
    printf("enter the two numbers: ");
    scanf("%d%d",&num1,&num2);
    int lcm = find_lcm(num1,num2,1);
    printf("LCM of %d and %d is: %d",num1,num2,lcm);
    return 0;
}