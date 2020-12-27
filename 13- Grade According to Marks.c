// Input Marks and Grade According
#include<stdio.h>
#include<conio.h>
int main()
{
	int sub1,sub2,sub3, avg;    
	clrscr();
	printf("Enter Marks of Subject 1 : ");
	scanf("%d",&sub1);
	printf("\nEnter Marks of Subject 2 : ");
	scanf("%d",&sub2);
	printf("\nEnter Marks of Subject 3 : ");
	scanf("%d",&sub3);
	avg=(sub1+sub2+sub3)/3;
	printf("\nAverage Marks : %d\n",avg);	
	if(avg>=80 && avg<=100)
	{
	        printf("\nGrade : Honors");
	}
	else if(avg>=60 && avg<=79)
	{
	        printf("\nGrade : First Division");
	}
	else if(avg>=50 && avg<=59)
	{
	        printf("\nGrade : Second Division");
	}
	else if(avg>=40 && avg<=49)
	{
	        printf("\nGrade : Third Division");
	}		
	else if(avg>=0 && avg<=39)
	{
	        printf("\nGrade : Fail");
	}	
    else;
    printf("\n");
	getch();
}