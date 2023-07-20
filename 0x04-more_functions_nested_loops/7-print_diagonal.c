#include "main.h"
/**
 * print_diagonal - Entry part
 * @n: int dia
 *
 * Description: print diagonal
 *
 * Return: nothing!
*/
void print_diagonal(int n)
{
	int i, j;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			for (j = 0; j <= i; j++)
			{
				if (j == i)
				{
					_putchar('\\');
				}
				else
				{
					_putchar(' ');
				}
			}
			_putchar('\n');
		}
	}
	_putchar('\n');
}
