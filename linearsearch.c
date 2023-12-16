#include <stdio.h>
int main()
{
    int a[10] = {10,20,30,40,50}, i;
    for (i = 0; i < 5; i++)
    {
        if (a[i] == 20)
        {
            printf("%d\t", i);
        }
    }
    return 0;
}