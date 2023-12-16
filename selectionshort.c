#include<stdio.h>
int a[5]={1,5,2,4,3};
int i,j,t;
int selection_short()
{
     
    
    for(i=0; i<5;i++)
    {
        for(j=i+1;j<5;j++)
        {
            if(a[i] > a[j])
            {
                t=a[i];
                a[i]=a[j];
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
    selection_short();
}