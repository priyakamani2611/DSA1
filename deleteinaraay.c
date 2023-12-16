#include<stdio.h>

int main()
{
 int a[10]={1,2,3,4,5,6,7,8,9};
 for(int i =0;i<=8;i++)
 {
    if (i<3)
    {
        a[i]=a[i];
    }else if(i>=4)
    {
        a[i]=a[i+1];
    }
 } 
 for(int i =0;i<=8;i++)
 {
    printf("%d\t",a[i]);

 }
 return 0;
}