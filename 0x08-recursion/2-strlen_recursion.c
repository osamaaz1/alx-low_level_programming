#include "main.h"

/**
 * _strlen_recursion - main function.
 * @s: string
 *
 * Description: function that prints a string lenght.
 *
 * Return: int lenght
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	
	return 1 + _strlen_recursion(s + 1);
}
