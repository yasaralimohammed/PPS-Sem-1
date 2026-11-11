
#include<stdio.h>

int main()
{
    int A[10][10], B[10][10], i, j, r, c;

    printf("Enter number of rows and columns: ");
    scanf("%d%d", &r, &c);

    printf("Enter values for A matrix:\n");
    for(i=0; i<r; i++)
    {
        for(j=0; j<c; j++)
        {
            scanf("%d", &A[i][j]);
        }
    }

    for(i=0; i<r; i++)
    {
        for(j=0; j<c; j++)
        {
            B[j][i] = A[i][j];
        }
    }

    printf("\nOriginal matrix A is:\n");
    for(i=0; i<r; i++)
    {
        for(j=0; j<c; j++)
        {
            printf("%d\t", A[i][j]);
        }
        printf("\n");
    }

    printf("\nTranspose of matrix A is:\n");
    for(i=0; i<c; i++)
    {
        for(j=0; j<r; j++)
        {
            printf("%d\t", B[i][j]);
        }
        printf("\n");
    }

    return 0;
}
