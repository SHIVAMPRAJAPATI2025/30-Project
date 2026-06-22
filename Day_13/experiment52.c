// Write a program to Count even and odd elements.
#include <stdio.h>
int main() {
    int n, arr[100], Even=0, Odd=0;
    printf("enter the size: ");
    scanf("%d", &n);
    for(int i=0; i<n; i++) 
    scanf("%d", &arr[i]);
    for(int i=0; i<n; i++) {
        if(arr[i] % 2 == 0) {
            Even ++;
        } else {
            Odd ++;
        }
    }
    printf("Even count =%d\nOdd count =%d",Even,Odd);
    return 0;
}