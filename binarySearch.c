#include <stdio.h>

int binarySearch(int search, int arr[], int l, int h)
{
    if (l <= h)
    {
        int mid = (l + h) / 2;

        if (search == arr[mid])
        {
            return mid;
        }
        if (search > arr[mid])
        {
            return binarySearch(search,arr,mid+1,h);
        }

        if (search < arr[mid])
        {
           return  binarySearch(search,arr,l,mid-1);
        }
    }
    return -1;
}

int main()
{
    int arr[] = {23, 1, 10, 5, 2};

    int n = sizeof(arr) / sizeof(arr[0]);
    int search;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    printf("After sorting the array\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d,", arr[i]);
    }
    printf("\n");

    printf("Enter the element you want to search:");
    scanf("%d", &search);

    int result = binarySearch(search, arr, 0, n - 1);

    if(result != -1)
    printf("element found at index :%d", result);
    else
        printf("no element found!!\n");

    return 0;
}