#include "main.h"

/**
 * print_rev - main function.
 * @s : char that want to print reverse
 *
 * Description: to print reverse.
 *
 * Return: None.
 */
void print_rev(char *s)
{
	int len = 0;
	int i;

	while (s[len] != '\0')
	{
		len++
	}
	for (i = len - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
