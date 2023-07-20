#include "main.h"
/**
 * print_most_numbers - Entry part
 *
 * Description: print numbers from 0 to 9 without 2 and 4
 *
 * Return: nothing!
*/

void print_most_numbers(void)
{
	int count;

	for (count = 0; count < 10; count++)
	{
		if (count != 4 && count != 2)
		{
			_putchar(count + 48);
		}
	}
	_putchar('\n');
}
