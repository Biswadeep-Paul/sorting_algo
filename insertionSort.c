#include <stdio.h>
int main()
{

    int arr[] = {23, 1, 10, 5, 2};
    int key, i, j;
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("\nthe original array");
    for (i = 0; i < n; i++)
    {
        printf("%d,", arr[i]);
    }

    for (i = 0; i < n; i++)
    {
        key = arr[i];
        for (j = i - 1; j >= 0 && arr[j] > key; j--)
        {
            arr[j + 1] = arr[j];
        }
        arr[j + 1] = key;
    }

    printf("\n the sorted array");
    for (i = 0; i < n; i++)
    {
        printf("%d,", arr[i]);
    }

    return 0;
}