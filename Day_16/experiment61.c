// Write a program to Find missing number in array.
#include <stdio.h>

int main() {
    int n, i;
    
    printf("Enter value of n: ");
    scanf("%d", &n);

    int arr[n - 1];

    printf("Enter %d elements:\n", n - 1);
    for(i = 0; i < n - 1; i++) {
        scanf("%d", &arr[i]);
    }

    int expectedSum = n * (n + 1) / 2;
    int actualSum = 0;

    for(i = 0; i < n - 1; i++) {
        actualSum += arr[i];
    }

    printf("Missing Number = %d\n", expectedSum - actualSum);

    return 0;
}