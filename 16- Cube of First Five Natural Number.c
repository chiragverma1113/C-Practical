//Program to Print First Ten Natural Number
#include<stdio.h>
#include<conio.h>
int main()
{
	int n;    
	clrscr();
	printf("Cube of first five natural number : \n\n");
	printf("Number        Cube\n");
	for(n=1;n<=5;n++)
	{
	    printf("  %d      -     %d\n",n,n*n*n);
	}
	getch();
}