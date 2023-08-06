#include "main.h"

/**
 * _strncat - main function.
 * @dest : first char
 * @src : sec char
 * @n : bytes from src
 *
 * Description: concatenates two strings using n bytes only.
 *
 * Return: cat string.
 */
char *_strncat(char *dest, char *src, int n)
{
	int len, j;

	len = 0;
	while (dest[len] != '\0')
		len++;
	for (j = 0; j < n && src[j] != '\0'; j++, len++)
		dest[len] = src[j];
	dest[len] = '\0';
	return (dest);

}
