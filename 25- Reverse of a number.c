#include<conio.h>
//Program to input a number and print in Reverse
#include<stdio.h>
#include<conio.h>
void main()
{
	int num,x,rev=0,temp;
	clrscr();
	printf("Enter a Number : ");
	scanf("%d",&num);
	temp=num;
	while(num>0)
	{
	    x=num%10;
		rev=rev*10+x;
		num=num/10;
	}
	printf("Reverse of %d is : %d",temp,rev);
	getch();
}