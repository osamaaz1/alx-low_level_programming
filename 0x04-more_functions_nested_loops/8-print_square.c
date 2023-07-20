#include "main.h"
/**
 * print_square - Entry part
 * @size: area of square
 *
 * Description: print square!
 *
 * Return: nothing!
*/
void print_square(int size)
{
	int row, col;

	if (size < 0)
	{
		putchar('\n')
		return;
	}
	for (row = 0; row < size; row++)
	{
		for (col = 0; col < size; col++)
		{
			_putchar('#');
		}
	_putchar('\n');
	}
}
