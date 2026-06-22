// 	Write a program to Second largest element.	
#include<stdio.h>
int main() {
    int n, arr[100] ;
    printf("enter number of element: ");
    scanf("%d", &n);
    printf("enter the element: ");
    for(int i=0; i<n; i++) {
        scanf("%d",&arr[i]);
    }
    int largest = arr[0];
    int second_largest = arr[0];
    for(int i=0; i<n; i++) {
        if(arr[i]>largest) {
            second_largest = largest;
            largest = arr[i];
        } else if(arr[i]>second_largest && arr[i] != largest) {
            second_largest = arr[i];
        } 
        
    }
    printf("second_largest element = %d\n",second_largest);
    return 0;
}