#include<stdio.h>
void main ()
{
    int hexa,bin=0,i=1,rem;
    printf("Enter the decimal number: ");
    scanf("%d",&hexa);
    while(hexa!=0)
    {
        rem=hexa%16;
        hexa=hexa/16;
        bin=bin+rem*i;
        i=i*10;
    }
    printf("%d",bin);
}
