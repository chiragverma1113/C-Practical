// check whether the given character is Vowel or Consonant using switch case

#include <stdio.h>
#include <conio.h>

int main()
{
	char ch;
	clrscr();

	printf( " Enter any Character : " );
	scanf( "%c", &ch );

	switch( ch )
	{
		case 'a':
		case 'A':
		case 'e':
		case 'E':
		case 'i':
		case 'I':
		case 'o':
		case 'O':
		case 'u':
		case 'U':
			printf( "\n '%c' is Vowel.", ch );
			break;
		default :
			printf( "\n '%c' is a Consonant.", ch );
			break;
	}
	getch();
}