// 	Write a program to Find largest and smallest element.	
#include <stdio.h>
int main() {
    int n, arr[100];
    printf("enter size: ");
    scanf("%d", &n);
    for(int i=0; i<n; i++) 
    scanf("%d", &arr[i]);
    int max= arr[0], min= arr[0] ;
    for(int i=0; i<n; i++) {
        if(arr[i] > max)
        max = arr[i];
        if(arr[i] < min)
        min = arr[i];
    }
    printf("Largest= %d\nSmallest= %d", max,min);
    return 0;
}