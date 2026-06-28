// 	Write a program to Check symmetric matrix.	
#include <stdio.h>

int main() {
    int n, i, j;
    int a[10][10];
    int symmetric = 1;

    printf("Enter the order of matrix: ");
    scanf("%d", &n);

    printf("Enter matrix elements:\n");
    for(i = 0; i < n; i++) {
        for(j = 0; j < n; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    for(i = 0; i < n; i++) {
        for(j = 0; j < n; j++) {
            if(a[i][j] != a[j][i]) {
                symmetric = 0;
                break;
            }
        }
        if(symmetric == 0)
            break;
    }

    if(symmetric)
        printf("Matrix is Symmetric.\n");
    else
        printf("Matrix is Not Symmetric.\n");

    return 0;
}