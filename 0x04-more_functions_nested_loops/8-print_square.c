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
	int dist;

	if (c < 0)
	{
		putchar('\n')
		return;
	}
	for (dist = 0; dist < c; dist++)
	{
		for (dist = 0; dist < c; dist++)
		{
			_putchar('#');
		}
	_putchar('\n');
	}
}
