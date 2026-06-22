// Write a program to Frequency of an element.
#include<stdio.h>
int main() {
    int arr[] = {1,2,4,7,5,9};
    int n=6, key, count=0;
    printf("enter element: ");
    scanf("%d", &key);
    for(int i=0; i<n; i++) {
        if (arr[i] == key)
        count++ ;
    }
        printf("Frequncy of %d = %d\n",key,count);
    return 0;
}