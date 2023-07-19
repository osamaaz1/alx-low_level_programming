#include "main.h"
/**
 * print_alphabet - Entry part
 *
 * Description: print alphabet.
 *
 * Return: always 0 (success).
*/
void print_alphabet(void)
{
	char letter = 'a';

	while (letter <= 'z')
	{
		_putchar(letter);
		letter++;
	}
	_putchar('\n');
	return (0);
}
