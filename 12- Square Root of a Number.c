//Program to find the Square Root of given Number
#include<stdio.h>
#include<conio.h>
void main()
{
  int num;
  float cal;
  clrscr();
  printf("Enter any number : ");
  scanf("%d",&num);
  cal=sqrt(num);
  printf("\nSquare Root of %d  is : %f\n",num,cal);
  getch();
}
