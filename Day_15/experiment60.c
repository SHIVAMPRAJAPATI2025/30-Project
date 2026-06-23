// 	Write a program to Move zeroes to end.	
#include<stdio.h>
int main() {
    int n, arr[100], count=0;
    printf("enter size of array: ");
    scanf("%d", &n);
    printf("enter the element of array: ");
    for(int i=0; i<n; i++) {
        scanf("%d", &arr[i]);
    }
    for(int i=0; i<n; i++) {
        if (arr[i] !=0) {
            arr[count++] = arr[i];
        }
    }
    while(count<n) {
        arr[count++] = 0;
    }
    printf("Array after moving zeroes to end: ");
    for(int i=0; i<n; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}