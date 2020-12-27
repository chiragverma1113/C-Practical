//Program to find factorial of a number
#include<conio.h>
#include<stdio.h>
void main()
{
  int number,factorial=1,i;
  clrscr();
  printf("Enter a number for knowing it's factorial\n");
  scanf("%d",&number);
  for(i=1;i<=number;i++)
  {
   factorial=factorial*i;
  }
  printf("%d!=%d\n",number,factorial);
  getch();
}