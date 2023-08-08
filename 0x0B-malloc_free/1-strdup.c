#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - main function.
 * @str: string that want to dup.
 *
 * Description: function that creates an array of chars,
 * and initializes it with a specific char.
 *
 * Return: Null if size = 0
 * create array.
 */
char *_strdup(char *str)
{
	char *dup;
	unsigned int i;

	if (str == NULL)
		return (NULL);
	dup = (char *)malloc(sizeof(str) + 1);

	if (dup != NULL)
		strcpy (dup, str);
	return (dup);
}
