#include "main.h"

/**
 * _memset - main function.
 * @s: the string want to edit
 * @b: the char to replaced with
 * @n: length
 *
 * Description:  function that fills memory with a constant byte.
 *
 * Return: new edited string.
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (n > 0)
	{
		s[i] = b;
		n--;
		i++;
	}
	return (s);
}
