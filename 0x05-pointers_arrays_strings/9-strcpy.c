#include "main.h"
/**
 * print_array - prints n elements of an array of integers
 * @a: the array of integers
 * @n: the number of elements to be printed
 *
 * Description: Print array
 *
 * Return : None
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return dest;
}
