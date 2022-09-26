#include "main.h"

/**
* print_chessboard - function to print the chess board
* @a: pointer to the print pieces
*
* Return: void
*/
void print_chessboard(char (*a)[8])
{
	int i, j;

	for (i = 0; i <= 7; i++)
	{
		for (j = 0; j <= 7; j++)
		{
			_putchar(a[i][j]);
		}
		_putchar('\n');
	}
}
