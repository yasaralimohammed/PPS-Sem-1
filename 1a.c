#include <stdio.h>

int main() {
    int n1, n2, i, j, flag;

    printf("Enter the starting number: ");
    scanf("%d", &n1);

    printf("Enter the ending number: ");
    scanf("%d", &n2);

    printf("Prime numbers between %d and %d are:\n", n1, n2);

    for (i = n1; i <= n2; i++)
        {
        if (i < 2)
            continue;

        flag = 1;

        for (j = 2; j < i; j++)
            {
            if (i % j == 0)
             {
                flag = 0;
                break;
            }
        }

        if (flag == 1)
            printf("%d ", i);
    }

    return 0;
}
