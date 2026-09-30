#include <stdio.h>

void main()
{
    int num, i, rem, arm = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    i = num;

    while (num != 0) {
        rem = num % 10;
       arm += rem * rem * rem;
        num = num / 10;
    }

    if (arm == i)
        printf("%d is an Armstrong number\n", i);
    else
        printf("%d is not an Armstrong number\n", i);

}
