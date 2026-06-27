// 	Write a program to Find diagonal sum.	
#include <stdio.h>

int main()
{
    int a[3][3];
    int i, j, sum = 0;

    printf("Enter 9 elements of the matrix:\n");

    for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 3; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    printf("\nMatrix:\n");
    for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 3; j++)
        {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }

    // Main diagonal sum
    for(i = 0; i < 3; i++)
    {
        sum += a[i][i];
    }

    printf("\nSum of Main Diagonal = %d\n", sum);

    return 0;
}