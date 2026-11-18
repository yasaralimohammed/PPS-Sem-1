
#include <stdio.h>

int main()
{
    int A[50], n, key, i, found = 0;
    int mid, high, low;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements in ascending order:\n", n);

    for(i = 0; i < n; i++)
    {
        scanf("%d", &A[i]);
    }

    printf("Enter the element to search: ");
    scanf("%d", &key);

    low = 0;
    high = n - 1;

    while(low <= high)
    {
        mid = (low + high) / 2;

        if(A[mid] == key)
        {
            found = 1;
            break;
        }
        else if(A[mid] < key)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }

    if(found == 1)
    {
        printf("Element found at position %d", mid + 1);
    }
    else
    {
        printf("Element not found");
    }

    return 0;
}
