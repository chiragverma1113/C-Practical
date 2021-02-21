/* Program to exchange values of two by Call by Reference method */
#include<conio.h>
#include<stdio.h>
int swap(int *x, int *y);
void main()
{
	int a,b;
	clrscr();
	printf("Enter Two No. : ");
	scanf("%d %d",&a,&b);
	printf("Before Swaping Value\n");
	printf("a=%d\nb=%d\n",a,b);
    swap(&a,&b);
    printf("After Swaping Value\n");
    printf("a=%d\nb=%d",a,b);
    getch();
}
int swap(int *x, int *y)
{
	int temp;
	temp=*x;
	*x=*y;
	*y=temp;
	return 0;
}