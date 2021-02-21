//Program to find the length of the string
#include<conio.h>
#include<stdio.h>
#include<string.h>
void main()
{
	char a[7];
	int length;
	clrscr();
	printf("Enter the value of string : ");
	gets(a);
    length=strlen(a);
    printf("Length of the string is : %d",length);
	getch();
}