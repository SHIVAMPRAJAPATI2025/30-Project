// Write a program to Linear search.
#include<stdio.h>
int main() {
   int arr[100], n ,key, found= 0;
   printf("enter the size: ");
   scanf("%d", &n);
   printf("enter the element of array: ");
   for(int i=0 ;i<n; i++) {
    scanf("%d", &arr[i]);
   } 
   printf("enter the element to search: ");
   scanf("%d", &key);
   for(int i=0; i<n; i++) {
    if(arr[i]==key) {
        found = 1;
        printf("element is found at position %d", i+1);
        break;
    }
   }
   if(found == 0) {
    printf("element is not found");
   }
   return 0;
}