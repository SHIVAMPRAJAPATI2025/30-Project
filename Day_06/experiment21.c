// Write a program to Convert decimal to binary.
#include <stdio.h>
void decToBinary(int n) {
    if(n==0) {
        printf("0");
        return;
    }
    if(n<0){
        printf("-");
        n=-n;
    }
    int binary[32];
    int i=0;
    while(n>0){
        binary[i++]=n%2;
        n/=2;
    }
    for(int j=i-1; j>=0 ;j--)
    printf("%d", binary[j]);
}
int main(){
int num;
printf("enter a decimal number: ");
scanf("%d",&num);
printf("Binary: ");
decToBinary(num);
printf("\n");
    return 0;
}