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
	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		_putchar('#');
		for (int i = 1; i < size; i++)
		{
			_putchar(' ');
			_putchar('#');
		}
		_putchar('\n');
	}
}
