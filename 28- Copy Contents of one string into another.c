//Program to copy the contents of one string into another string
#include<conio.h>
#include<stdio.h>
#include<string.h>
void main()
{
	char a[7],b[7]="nil";
	clrscr();
	printf("Enter the value of a : ");
	gets(a);
	printf("Value of a is : %s",a);
	printf("\nValue of b is : %s",b);
	printf("\nAfter copying the contents of a in b\n");
	strcpy(b,a);
	printf("Value of a is : %s",a);
	printf("\nValue of b is : %s",b);
	getch();
}