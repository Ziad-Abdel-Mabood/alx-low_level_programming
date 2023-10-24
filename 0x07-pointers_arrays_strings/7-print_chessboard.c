#include "main.h"

/**
 * print_chessboard -	prints a chessboard.
 * @a:			array that resembles a chessboard.
 * Return:		nothing.
 */

void print_chessboard(char (*a)[8])
{
	int i = 0;
	int k = 0;

	for (; a[i][k] != 0; i++)
	{
		for (; k < 8; k++)
		{
			_putchar(a[i][k]);
		}
		k = 0;
		_putchar('\n');
	}
}
