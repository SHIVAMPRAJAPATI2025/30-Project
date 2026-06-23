// 	Write a program to Reverse array.
#include<stdio.h>
int main() {
    int arr[100], n, temp;
    printf("enter the size of array: ");
    scanf("%d", &n);
    printf("enter the element of array: ");
    for(int i=0; i<n; i++) {
        scanf("%d",&arr[i]);
    }
    //Reverse array
    for(int i=0; i<n; i++) {
        temp = arr[i];
        arr[i] = arr[n-1-i];
        arr[n-1-i] = temp;
    }
    printf("Reverse array:\n");
    for(int i=0; i<n; i++) {
        printf("%d ", arr[n-1-i]);
    }
    return 0;
}