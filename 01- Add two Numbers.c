//Program to Add to Numbers
#include<stdio.h>
#include<conio.h>
void main()
{
  int num1,num2,sum;
  clrscr();
  printf("Adding two Numbers\n");
  printf("Enter First number : ");
  scanf("%d",&num1);
  printf("Enter Second number : ");
  scanf("%d",&num2);
  sum=num1+num2;
  printf("\nAddition of two numbers is : %d\n",sum);
  getch();
}