#include<stdio.h>
#include<math.h>
void main ()
{
    int dec=0,bin,i=0,rem;
    printf("Enter the binary number: ");
    scanf("%d",&bin);
    while(bin!=0)
    {
        rem=bin%10;
        bin=bin/10;
        dec=dec+rem*pow(2,i);
        i++;
    }
    printf("%d",dec);
}

