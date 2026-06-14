// 	Write a program to Count set bits in a number.

#include <stdio.h>

int main() {
    int n, count = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    while (n > 0) {
        count += n & 1;  // Check if the last bit is 1
        n = n >> 1;      // Right shift by 1 bit
    }

    printf("Number of set bits = %d\n", count);

    return 0;
}