#include<conio.h>
#include<stdio.h>
void main()
{
   int n,input[n],max,i;
   clrscr();
   printf("Enter no. of values you wanna enter : ");
   scanf("%d",&n);
   for(i=0;i<n;i++)
   {
   	printf("Enter No. : ");
   	scanf("%d",&input[i]);
   }
   max=input[0];
   for(i=1;i<n;i++)
   {
   	if(input[i]>max)
   	max=input[i];
   }
   printf("\nLargest No. : %d",max);
   getch();
}
