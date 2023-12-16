#include<stdio.h>
int a[5]={1,5,2,4,3};
int i,j,t;
int bubble_sort()
{
     
    
    for(i=0; i<5;i++)
    {
        for(j=0;j<5-i-1;j++)
        {
            if(a[j] > a[j+1])
            {
                t=a[j+1];
                a[j+1]=a[j];
                a[j]=t;
            }
        }
    }
    for(i=0;i<5;i++)
    {
        printf(" %d",a[i]);
    }



}
int main()
{
    bubble_sort();
}