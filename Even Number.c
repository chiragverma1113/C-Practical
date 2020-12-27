//Program to print even numbers
#include<stdio.h>
#include<conio.h>
void main()
{
  int num,i;
  clrscr();
  printf("Enter The Number : ");
  scanf("%d",&num);
  printf("First %d Even Number\n",num);
  for(i=2;i<=2*num;i++)
  {
      if(i%2==0)
      {
          printf("%d\n",i);
      }
   }
   getch();
}