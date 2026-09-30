#include<stdio.h>
int main()
{

int i,j,number,k;
    printf("enter number of rows in pascel triangles : ");
    scanf("%d, &n");
    for(i=1;i<=n;i++)
    {
       for(k=1;k<=n-i;k++)
    {
        printf(" ");
    }
      number=1
      for(j=1;j<=i;j++)


       {
          printf("%d",number);
          number=number*(i=j)/j;
          {
              printf("\n");
          }
       }

    }


    }
}

