// 	Write a program to Subtract matrices.	
#include<stdio.h>
int main() {
    int a[3][3], b[3][3], sub[3][3];
    int i, j;

    printf("Enter elements of first matrix:\n");
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    printf("Enter elements of second matrix:\n");
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            scanf("%d", &b[i][j]);
        }
    }

    // Subtraction of matrices
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            sub[i][j] = a[i][j] - b[i][j];
        }
    }

    printf("\nSub of the matrices:\n");
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            printf("%d ", sub[i][j]);
        }
        printf("\n");
    }

    return 0;
}