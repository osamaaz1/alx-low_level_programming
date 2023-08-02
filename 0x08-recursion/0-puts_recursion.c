#include "main.h"

/**
 * _puts_recursion - main function.
 * @s: string to print
 *
 * Description: function that prints a string, followed by a new line.
 *
 * Return: nothing!
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
		_putchar('\0');
	else
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
}
