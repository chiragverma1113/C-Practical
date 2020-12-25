//Swapping Two Numbers
#include<stdio.h>
#include<conio.h>
void main()
{
  int a,b,temp;
  clrscr();
  printf("Enter First number (a) : ");
  scanf("%d",&a);
  printf("Enter Second number (b) : ");
  scanf("%d",&b);
  printf("\nBefore Swapping Numbers\n");//Printing a & b before swapping numbers
  printf("a = %d\nb = %d\n",a,b);
  //swapping a & b
  temp=a;
  a=b;
  b=temp;
  printf("\nAfter Swapping Numbers\n");//Printing a & b after swapping numbers
  printf("a = %d\nb = %d",a,b);
  getch();
}