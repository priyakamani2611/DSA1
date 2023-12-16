#include <stdio.h>

int main()
{
    int arr[] = {10, 20, 30, 40, 50};
    int p = sizeof(arr) / sizeof(arr[0]);
    int n = 4;

    printf("array: \n");
    for (int i = 0; i < p; i++)
    {
        printf("%d ", arr[i]);
    }

    for (int i = 0; i < n; i++)
    {
        int j, last;
        last = arr[p - 1];

        for (j = p - 1; j > 0; j--)
        {
            arr[j] = arr[j - 1];
        }
        arr[0] = last;
    }

    printf("\n");
    printf("Array : \n");
    for (int i = 0; i < p; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}