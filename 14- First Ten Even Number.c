//Program to print first ten even numbers
#include<stdio.h>
#include<conio.h>
void main()
{
  int num,i;
  clrscr();
  printf("First Ten Even Number\n");
  for(i=2;i<=2*10;i++)
  {
      if(i%2==0)
      {
          printf("%d\n",i);
      }
   }
   getch();
}