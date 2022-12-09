#include <stdio.h>

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
