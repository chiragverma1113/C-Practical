//Program to check given number is Prime or Not Prime
#include<stdio.h>
#include<conio.h>
int main()
{
  int num,i,count=0;
  printf("Enter a number to check prime or not\n");
  scanf("%d",&num);
  for(i=2;i<=num/2;i++)
  {
    if(num%i==0)
      count=1;
  }
  if(count==0)
    printf("The given number %d is a Prime Number\n",num);
  else
  {
    printf("The given number %d is not a Prime Number\nBecause The number is divisible by\n",num);
    for(i=1;i<=num;i++)
    {
      if(num%i==0)
        printf("%d\n",i);
    }
  }
}
