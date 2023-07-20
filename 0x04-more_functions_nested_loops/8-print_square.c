#include "main.h"
/**
 * print_square - Entry part
 * @c: area of square
 *
 * Description: print square!
 *
 * Return: nothing!
*/
void print_square(int c)
{
	int row, col;

	if (c < 0)
	{
		putchar('\n')
		return;
	}
	for (row = 0; row < c; row++)
	{
		for (col = 0; col < c; col++)
		{
			_putchar('#');
		}
	_putchar('\n');
	}
}
