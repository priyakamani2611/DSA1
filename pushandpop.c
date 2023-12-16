#include <stdio.h>
#define n 5
int a[5], top = -1,p[5];

int display()
{
    for (int i = 0; i <= top; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n");
}

int insertend(int val)
{
    if (top >= n - 1)
    {
        printf("Stack is full\n");
    }
    else
    {
        top++;
        a[top] = val;
    }
}


int deleteend()
{
    if (top == -1)
    {
        printf("Stack is empty\n");
    }
    else
    {
        top--;
    }
}

int insertfirst(int val)
{
    int i,k;
    if(top==-1)
    {
        top++;
        a[top]=val;
    }
    else if(top>=4)
    {
        printf("\nStack is full");
    }
    else{
        top++;
        k=top-1;

        for(int i=top;i>0;i--)
        {
            a[i]=a[k];
            k--;
        }
        a[0]=val;
    }
    
}


int deletefirst()
{
    int j=1;

    if(top==-1)
    {
        printf("\nStack is  empty");
    }
    
    else{
       for(int i=0;i<=top;i++)
       {
            a[i]=a[j];
            j++;
       }
    }
    top--;
}

int main()
{
    int x;

    printf("Pres 1 to insertEnd \n");
    printf("Pres 2 to delete \n");
    printf("Pres 3 to display \n");
    printf("Pres 0 to Exit \n");
    scanf("%d",&x);

    switch (x)
    {
    case 1:
        insertEnd(x);
        break;


    case 2:
    delete();
    break;

    case 3:
    display();
    break;

    case 0:
    break;

    
    default:
        break;
    }

    insertfirst(20);
    insertfirst(30);
    insertfirst(40);
    insertfirst(50);
    insertend(60);
    deletefirst();

    printf("\n");
    display(); 
    return 0;
}