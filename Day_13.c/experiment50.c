// Write a program to Find sum and average of array.
#include <stdio.h>
int main() {
    int n, arr[100], sum=0;
    
    printf("enter size: ");
    scanf("%d", &n);
    for(int i=0; i<n; i++) {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }
    printf("sum=%d\nAverage =%.2f\n", sum,(float) sum/n);
    return 0;
}