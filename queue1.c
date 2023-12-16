#include<stdio.h>
#define n 5
int a[n] , f =-1 , r =-1;

int first_Insert(int data)
{
    if(r >= n-1)
    {
        printf("<-------Queue Is Full------->");
    }
    else if(f < 0)
    {
        f = r = 0;
        a[r] = data;
    }
    else
    {
        r++;
        a[r] = data;
    }
}

int first_Delete()
{
    if (f == r)
    {
        if (f!=-1)
        {
            f=-1;
            r=-1;
        }
        else if (f=r=-1)
        {
            printf("<--------Queue Is Empty--------->\n");
        }
        
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

int display()
{
    if (r!=-1)
    {
     for (int i = f; i <= r; i++)
    {
        printf("%d,",a[i]);
    }  
    }
    
    
}

int main()
{
    first_Insert(10);
    first_Insert(20);
    first_Insert(30);
    first_Insert(40);
    first_Insert(50);
    first_Insert(60);
    first_Delete();
    first_Delete();
    first_Delete();
    first_Delete();
    first_Delete();
    first_Delete();
    display();
}