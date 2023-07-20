#include "main.h"
/**
 * more_numbers - Entry part
 *
 * Description: print numbers from 0 to 14, 10 times
 *
 * Return: nothing!
*/

void more_numbers(void)
{
	int count, nums;

	for (count = 0; count < 10; count++)
	{
		for (nums = 0; nums < 15; nums++)
		{
			if (nums > 9)
			{
				_putchar((nums / 10) + '0');
			}
			_putchar((nums % 10) + '0');
		}
	_putchar('\n');
	}
}
