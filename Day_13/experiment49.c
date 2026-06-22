// Write a program to Input and display array.
#include <stdio.h>
int main() {
    int n, arr[100];
    printf("enter size: ");
    scanf("%d", &n);
    printf("enter the element: ");
    for(int i=0; i<n; i++) {
        scanf("%d ", &arr[i]);
    }
    printf("Array: ");
    for(int i=0; i<n; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}