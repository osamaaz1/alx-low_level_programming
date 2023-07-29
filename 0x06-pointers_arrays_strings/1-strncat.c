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
	int dest_len = 0;
	int i;

	while (dest[dest_len] != '\0')
		dest_len++;
	while (src[dest_len] != '\0' && i < n)
	{
		dest[dest_len + i] = src[i];
		i++;
	}
	dest[dest_len + i] = '\0';

	return (dest);
}
