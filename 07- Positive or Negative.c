//Program to check given number is Positive or Negative
#include<stdio.h>
#include<conio.h>
int main()
{
  int a;
  clrscr();
  printf("Enter Number : ");
  scanf("%d",&a);
  if(a<0)
  {
      printf("\nThe number %d is Negative\n",a);
  }
  else
  {
      printf("\nThe number %d is Positive\n",a);
  }
  getch();
}