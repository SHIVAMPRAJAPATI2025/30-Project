// 	Write a program to Rotate array left.
#include<stdio.h>
int main() {
    int n, arr[100], temp;
    printf("enter size of array: ");
    scanf("%d", &n);
    printf("enter the element of array: ");
    for(int i=0; i<n; i++) {
        scanf("%d", &arr[i]);
    }
    temp = arr[0];
    for(int i=0; i<n; i++) {
        arr[i] = arr[i+1];
    }
    arr[n-1] = temp;
    printf("array after left rotation:\n");
    for(int i=0; i<n; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}