//Program to convert days to year,month(30),week,days
#include<conio.h>
#include<stdio.h>
void main()
{
  int days;
  clrscr();
  printf("Enter number of days : ");
  scanf("%d",&days);
  if(days==0)
  printf("You Entered 0 days");
  if(days>=365)
  printf("%d Year(s)\n",days/365);
  days=days%365;
  if(days>=30)
  printf("%d Month(s)\n",days/30);
  days=days%30;
  if(days>=7)
  printf("%d Week(s)\n",days/7);
  days=days%7;
  if(days!=0)
  printf("%d Day(s)",days);
  getch();
}