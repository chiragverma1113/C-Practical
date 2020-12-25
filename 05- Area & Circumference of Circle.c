//Calculating Area and Circumference Circle
#include<stdio.h>
#include<conio.h>
#define pie 3.14
int main()
{
  float r,area,circum;
  clrscr();
  printf("Enter Radius of Circle : ");
  scanf("%f",&r);
  area=pie*r*r;
  circum=2*pie*r;
  //Printing Area and Circumference of Circle
  printf("\nArea of Circle is : %f Sq. units", area);
  printf("\nPerimeter of Circle is : %f units",circum);
  getch();
}