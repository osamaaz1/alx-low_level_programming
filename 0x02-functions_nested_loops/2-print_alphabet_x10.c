#include "main.h"
/**
 * print_alphabet_x10 - Entry part
 *
 * Description: print alphabet 10 times.
 *
 * Return: always 0 (success).
*/
void print_alphabet_x10(void)
{
	char letter = 'a';
	int count = 0;

	while (count < 10)
	{
		while (letter <= 'z')
		{
			_putchar(letter);
			letter++;
		}
		_putchar('\n');
	}
}
