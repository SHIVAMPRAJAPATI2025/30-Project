// 	Write a program to Merge arrays.
#include<stdio.h>
int main() {
    int n1, n2,j,i;
    int a[100], b[100], c[100];
    // first array
    printf("enter the size of first array: ");
    scanf("%d", &n1);
    printf("enter the element of first array: ");
    for(int i=0; i<n1; i++) {
        scanf("%d", &a[i]);
    }
// second array
printf("enter the size of second array: ");
scanf("%d", &n2);
printf("enter the element 0f second array: ");
for( i=0; i<n2; i++) {
    scanf("%d",&b[i]);
}
// copy first array in third array
for( i=0; i<n1; i++) {
    c[i] = a[i];
}
// copy second array in third array
for( i=0, j=n1; i<n2; i++, j++) {
    c[j] = b[i];
}
printf("Merged array: ");
for( i=0; i<n1+n2; i++) {
    printf("%d", c[i]);
}
return 0;
}