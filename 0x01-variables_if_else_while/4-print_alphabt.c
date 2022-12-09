#include <stdio.h>

/**
 * main - prints the alphabet in lowercase,
 * followed by a new line, omits q and e
 * Return: Aways 0 (Sucess)
 */

int main ()

{

        char pha;

        while (pha <= 'z')

	{
		if ( pha != 'e' && pha != 'q')
		
	           {
	            putchar(pha);

		   }
		    pha++; 


	}
        putchar('\n');
        return 0;
