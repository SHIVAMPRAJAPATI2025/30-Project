// Write a program to Convert binary to decimal.
#include <stdio.h>
#include <math.h>

int binaryToDecimal(long long binary) {
    int decimal = 0, i = 0;
    while (binary != 0) {
        int digit = binary % 10;
        decimal += digit * pow(2, i);
        binary /= 10;
        i++;
    }
    return decimal;
}

int main() {
    long long binary;
    printf("Enter a binary number: ");
    scanf("%lld", &binary);
    printf("Decimal: %d\n", binaryToDecimal(binary));
    return 0;
}