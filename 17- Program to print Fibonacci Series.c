//Program to print Fibonacci Series
#include<conio.h>
#include<stdio.h>
void main()
{
 int a=0,b=1,num,c,count;
 clrscr();
 printf("Enter a number to obtain fibonacci series\n");
 scanf("%d",&num);
 printf("The series is\n");
 printf("%d \n%d\n",a,b);
 count=2;
 while(count<num)
     {
       c=a+b;
       a=b;
       b=c;
       printf("%d\n",c);
       count++;
     }
     getch();
    }