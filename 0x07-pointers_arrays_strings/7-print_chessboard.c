#include "main.h"
/**
 * print_chessboard-  prints the chessboard.
 * @a:array of characters
 * Return: Always 0
 */
void print_chessboard(char (*a)[8])
{
	int c, d;

	for (c = 0; c <= 8; c++)
	{
		for (d = 0; d <= 8; d++)
		{
			print_chessboard(a[c][d]);
		_putchar('\n');
		}
	}
}
