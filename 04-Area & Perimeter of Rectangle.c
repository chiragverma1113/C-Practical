//Calculating Area and Perimeter of Rectangle
#include<stdio.h>
#include<conio.h>
int main()
{
  float l,b,area, perimeter;
  clrscr();
  printf("Enter Length of Rectangle : ");
  scanf("%f",&l);
  printf("Enter Bredth of Rectangle : ");
  scanf("%f",&b);
  area=l*b;
  perimeter=2*(l+b);
  //Printing Area and Perimeter of Rectangle
  printf("\nArea of Rectangle is : %f Sq. units", area);
  printf("\nPerimeter of Rectangle is : %f units", perimeter);
  getch();
}