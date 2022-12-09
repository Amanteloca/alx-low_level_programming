#include <stdio.h>


/**
 * main - prints alphabets in lowercase and uppercase,
 * followed by a new line
 * Return: Always 0 (Success)
 */

int main ()

{

        char pha;

        for (pha = 'a', pha <= 'z' , pha++)
        
	putchar(pha);

	for (pha = 'A', pha <= 'Z' , pha++)

        putchar(pha);
 


        putchar('\n');
        return 0;
}
