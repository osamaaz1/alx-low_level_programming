#include "main.h"
/**
 * print_numbers - Entry part
 *
 * Description: print numbers from 0 to 9
 *
 * Return: nothing!
*/

void print_numbers(void)
{
	int count;

	for (count = 0; count < 10; count++)
	{
		_putchar(count);
	}
	_putchar("\n");
}
