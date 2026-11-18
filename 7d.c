
#include <stdio.h>
int main()
{
    int a[50], n, key, i, found = 0;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("Enter the element to search: ");
    scanf("%d", &key);

    for(i = 0; i < n; i++)
    {
        if(a[i] == key)
        {
            found = 1;
            break;
        }
    }

    if(found == 1)
    {
        printf("Element found at position %d", i + 1);
    }
    else
    {
        printf("Element not found");
    }

    return 0;
}

