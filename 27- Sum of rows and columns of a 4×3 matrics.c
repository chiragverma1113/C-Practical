// Program to find the sum of rows and columns of a 4×3 matrics
#include<stdio.h>
#include<conio.h>
void main()
{
    int i,j,sum_rows,sum_col,k=0;
    int a[4][3];
    //Taking input of matrics
    printf("Enter Matrics\n");
    for(i=0;i<4;i++)
    {
       for(j=0;j<3;j++)
      {
         scanf("%d",&a[i][j]);
      }
    }

    printf("\nGiven matrics is\n");
     for(i=0;i<4;i++)
     {
         for(j=0;j<3;j++)
         {
           printf("%d\t",a[i][j]);
          }

           printf("\n");
      }
     printf("\n");
     
  for(i=0;i<4;i++)
  {
   sum_rows=0;

   for(j=0;j<3;j++)
   {
    sum_rows+=a[i][j];
   }
   printf("Sum of %d Row is %d\n",k,sum_rows);
      k++;
  }
  k=0;
   for(i=0;i<3;i++)
   {
     sum_col=0;
    for(j=0;j<4;j++)
    {
     sum_col+=a[j][i];
     }
       printf("Sum of %d Column is : %d\n",k,sum_col);
       k++;
   }

}