#include "main.h"

/**
 * _strstr - main function.
 * @haystack: main string
 * @needle: first occurrence of the substring
 *
 * Description: function finds the first occurrence of the substring
 *
 * Return: number of bytes or NULL
 */
char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *h = haystack;
		char *n = needle;

		while (*n != '\0' && *h == *n)
		{
			h++;
			n++;
		}
		if (*n == '\0')
			return (haystack);
	}
	return (0);
}
