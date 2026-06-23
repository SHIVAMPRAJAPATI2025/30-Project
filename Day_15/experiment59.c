// 	Write a program to Rotate array right.
#include<stdio.h>
int main() {
    int n, arr[100], temp;
    printf("enter size of array: ");
    scanf("%d", &n);
    printf("enter the element of array: ");
    for(int i=0; i<n; i++) {
        scanf("%d", &arr[i]);
    }
    temp = arr[n-1];
    for(int i=n-1; i>0; i--) {
        arr[i] = arr[i-1];
    }
    arr[0] = temp;
    printf("Array after right rotation: ");
    for(int i=0; i<n; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}