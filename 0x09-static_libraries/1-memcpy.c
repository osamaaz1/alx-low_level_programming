#include "main.h"

/**
 * _memcpy - main function.
 * @dest: destenation char
 * @src: source string
 * @n: length
 *
 * Description: function that copies memory area.
 *
 * Return: new edited string
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
