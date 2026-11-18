#include <stdio.h>
int main()
{
    int M[5][5], i, j, z = 0, nz = 0;
    printf("Enter 5*5 matrix elements:\n");
    for(i = 0; i < 5; i++)
    {
        for(j = 0; j < 5; j++)
        {
            scanf("%d", &M[i][j]);

            if(M[i][j] == 0)
                z++;
            else
                nz++;
        }
    }

    printf("Number of zeroes = %d\n", z);
    printf("Number of non zeroes = %d\n", nz);

    if(z > nz)
        printf("Matrix is sparse");
    else
        printf("Matrix is not sparse");

    return 0;
}
