//Find Greatest of three numbers
#include<conio.h>
#include<stdio.h>
int main() 
{
    int a,b,c,max;
    clrscr();
    printf("Enter three numbers : \n");
    scanf("%d %d %d",&a,&b,&c);
    if(a>b && a>c)
    {
             max = a;
    }
    else if(b>a && b>c)
    {
             max = b;
    }
    else if(c>a && c>b)
    { 
             max = c;
    }
    else
    {
            printf("These Numbers are Same\n");
            max=a;
    }     
    printf("Max is : %d",max);
    getch();
}