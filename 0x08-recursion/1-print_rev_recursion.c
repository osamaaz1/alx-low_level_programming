#include "main.h"

/**
 * _print_rev_recursion - main function.
 * @s: string to print in reverse
 *
 * Description: function that prints a string in reverse.
 *
 * Return: nothing!
 */
void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
	}
	_print_rev_recursion(s + 1);
	_putchar(*s);
}
