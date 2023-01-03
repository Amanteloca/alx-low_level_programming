
Sottie1
/
alx-low_level_programming
Public
Code
Issues
Pull requests
Actions
Projects
Security
Insights
alx-low_level_programming/0x07-pointers_arrays_strings/7-print_chessboard.c
@Sottie1
Sottie1 task 7
 1 contributor
26 lines (23 sloc)  370 Bytes
#include "main.h"

/**
 * print_chessboard - print the chessboard, 2d array
 * @a: 2d array of chars
 *Return: void
 */
void print_chessboard(char (*a)[8])
{
	/*Declaring variables*/
	int i, j;

	i = 0;
	while (i < 8) /*number repetitions*/
	{
		j = 0;
		while (j < 8)
		{
			_putchar (a[i][j]);
			j++;
		}
		_putchar ('\n'); /*print new line*/
		i++; /*add +1*/
	}

}
