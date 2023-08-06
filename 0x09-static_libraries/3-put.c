#include "main.h"

/**
 * _puts - main function.
 * @str : char that want to count the lenth.
 *
 * Description: to print a str with endline!
 *
 * Return: None.
 */
void _puts(char *str)
{
	while (*str)
	{
		_putchar(*str++);
	}
	_putchar('\n');
}
