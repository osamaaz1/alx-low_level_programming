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
	int count = 0, count2 = 0;

	while (*(dest + count) != '\0')
		count++;
	while (count2 < n)
	{
		*(desk + count) = *(src + count2);
		if (*(src + count2) == '\0')
			break;
		count++;
		count2++;
	}


	return (dest);
}
