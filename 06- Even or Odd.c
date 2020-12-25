//Program to check given number is Odd or Even
#include<stdio.h>
#include<conio.h>
int main()
{
  int a;
  clrscr();
  printf("Enter Number : ");
  scanf("%d",&a);
  if(a%2==0)
  {
      printf("\nThe number %d is Even\n",a);
  }
  else
  {
      printf("\nThe number %d is Odd\n",a);
  }
  getch();
}