#include<stdio.h>
#define n 5
int a[n] , f = -1 , r = -1;

int insertEnd(int data)
{
    if(r > 0)
    {
        f = r = 0;
        a[r] = data;
    }
    else if((r + 1)% n == f)
    {
        printf("Queue Is Full...\n");
    }
    else
    {
        r = (r + 1)% n;
        a[r] = data;
    }
}

int first_Delete()
{
    if (f == r)
    {
        printf("<-------Queue Is Empty----->\n");
    }
    else if (f < 0)
    {
        f = r = -1;
    }
    else
    {
        f++;
    }
}

int insertfirst(int data)
{
    if (f < 0)
    {
        f = r = 0;
        a[f] = data;        
    }
    
    else
    {
        f--;
        a[f] = data;
    }
}

int deleteEnd()
{
    if (r < 0)
    {
        printf("<----------Queue Is Empty-------->\n");
    }
    else if (r == f)
    {
        f = r = -1;
    }
    else
    {
        r--;
    }
}

int display()
{
   for (int i = f; i <= r; i++)
   {
        printf("%d\t",a[i]);    
   }
}

int main()
{
    insertEnd(10);
    insertEnd(20);
    insertEnd(30);
    insertEnd(40);
    insertEnd(50);
    insertEnd(60);
   //insertfirst(50);
   // deleteEnd();
   first_Delete();
    display();
}

