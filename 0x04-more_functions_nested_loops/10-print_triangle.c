#include "main.h"
/**
 * print_triangle - Entry part
 * @size: int dia
 *
 * Description: print diagonal
 *
 * Return: nothing!
*/

void print_triangle(int size)
{
	int i, base;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 1; i <= size; i++)
		{
			for (base = 1; base <= size; base++)
			{
				if ((i + base) <= size)
					_putchar(' ');
				else
					_putchar('#');
			}
		_putchar('\n');
		}
	}
}
