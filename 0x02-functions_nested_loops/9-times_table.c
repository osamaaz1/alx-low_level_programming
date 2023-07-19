#include "main.h"

/**
 * times_table - Prints the 9 times table
 */
void times_table(void)
{
	int row, column, product;

	for (row = 0; row <= 9; row++)
	{
		for (column = 0; column <= 9; column++)
		{
			product = row * column;
			if (product < 10)
			{
				if (column > 0)
				{
					_putchar(',');
					_putchar('\t');
					_putchar('\t');
				}
				_putchar(product + '0');
			}
			else
			{
				_putchar(',');
				_putchar('\t');
				_putchar(product / 10 + '0');
				_putchar(product % 10 + '0');
			}
		}
	_putchar('\n');
	}
}
