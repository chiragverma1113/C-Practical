//Program to find table of a number using loop
#include<conio.h>
#include<stdio.h>
void main()
{
    int i,num,end;
    clrscr();
    printf("Enter a number for which you want table\n");
    scanf("%d",&num);
    printf("Enter a number till where \nyou want multiplication with %d\n",num);
    scanf("%d",&end);
    printf("Multiplication table of %d is\n",num);
    for(i=1;i<=end;i++)
    {
     printf("%d x %d = %d\n",num,i,num*i);
    }
    getch();
}
