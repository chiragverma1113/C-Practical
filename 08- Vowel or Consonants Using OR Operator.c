//Program to check a Character is Vowel or Consonant using OR Operator
#include<stdio.h>
#include<conio.h>
void main()
{
  char c;
  clrscr();
  printf("Enter a Character : ");
  scanf("%c",&c);
  //Checking input character is a,e,i,o,u using OR operator
  if(c=='a' || c=='e' || c=='i' || c=='o' || c=='u' || c=='A' || c=='E' || c=='I' || c=='O' || c=='U')
  {
      printf("\nThe Character '%c' is a Vowel\n",c);
  }
  else
  {
      printf("\nThe Character '%c' is a Consonant\n",c);
  }
  getch();
}