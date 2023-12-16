#include <stdio.h>

void sorting()

{
    int i, j, t;
    int arr[5] ;

    for (i = 0; i < 5 - 1; i++)
    {
        for (j = i + 1; j < 5; j++)
        {
            if (arr[j] < arr[i])
            {
                t = arr[j];
                arr[j] = arr[i];
                arr[i] = t;
            }
        }
    }
    for (i = 0; i < 5; i++)
    {
        printf("%d", arr[i]);
    }
}
int main()
{   printf("Enter the number of elements: ");
    scanf("%d", &n);

    sorting();
}