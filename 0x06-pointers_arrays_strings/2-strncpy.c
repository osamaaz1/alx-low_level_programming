#include "main.h"

/**
 * _strncpy - main function.
 * @dest : first char
 * @src : sec char
 * @n : bytes from src
 *
 * Description: copy strings from src to dest using n bytes only.
 *
 * Return: copied string.
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}

	return (dest);
}
