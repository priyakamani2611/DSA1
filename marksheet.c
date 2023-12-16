#include<stdio.h>

int main() 

{

   int eng[5],guj[5],stat[5],total[5],per[5];
   int i;
  

  for(i=0; i <5; i++)
  {
    printf("\nEnter %d student marks : \n",i+1);

    printf("Enter  the  mark of english : ");
    scanf("%d",&eng[i]);

    printf("Enter the mark of Gujrati  : ");
    scanf("%d",&guj[i]);

    printf("Enter the  mark of stat  : ");
    scanf("%d",&stat[i]);

    total[i]=eng[i] + guj[i] + stat[i];
    per[i]=(total[i]*100)/300;
  }

  printf("\nNo.\teng\tguj\tstat\ttotal\tper\t\n");

  for(i=1; i <= 5; i++)
  {
    printf("\n%d\t%d\t%d\t%d\t%d\t%d\t",i,eng[i],guj[i],stat[i],total[i],per[i]);


    if(per[i]<=35)
        {
            printf("Studen is fail");
        }
    else if(per[i]>=90)
        {
            printf(" Grade A ");
        }
    else if(80<=per[i]<=90)
        {
            printf(" Grade B ");
        }
    else if(70<=per[i]<=80)
        {
            printf(" Grade C ");
        }
    else if(60<=per[i]<=70)
        {
            printf(" Grade D ");
        }
    else
        {
            printf(" Grade E ");
        }

  }

    return 0;

}