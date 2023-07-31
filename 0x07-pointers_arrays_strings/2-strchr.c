#include "main.h"

/**
 * _strchr - main function.
 * @s: the string source
 * @c: length
 *
 * Description: function that locates a character in a string.
 *
 * Return: new edited string
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
			return (s);
		s++;
	}
	if (c == '\0')
		return (s);
	return (NULL);
}
