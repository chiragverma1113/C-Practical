//Program to concatenate the contents of two strings into another string
#include <conio.h>
#include <stdio.h>
#include <string.h>
void main()
/*{
	char a[10],b[10],c[10];
	clrscr();
	printf("Enter the value of a : ");
	gets(a);
	printf("Enter the value of b : ");
	gets(b);
	printf("Enter the value of c : ");
	gets(c);
	printf("\nAfter concatenating the strings in a\n");
	strcat(a,b);
	strcat(a,c);
	printf("\nValue of a is : %s",a);
	getch();
}*/

//OR

{
	char a[10]="Coding ",b[10]="is ",c[10]="easy";
	clrscr();
    printf("Value of a is : %s\n",a);
    printf("Value of b is : %s\n",b);
    printf("Value of c is : %s\n",c);
	printf("\nAfter concatenating the strings in 'a'\n");
	strcat(a,b);
	strcat(a,c);
	printf("\nValue of a is : %s",a);
	getch();
}