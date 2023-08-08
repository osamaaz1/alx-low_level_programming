#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

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
	char *cpstr;
	size_t len;

	if (str == NULL)
		return (NULL);
	len = strlen(str);
	cpstr = (char *)malloc((len + 1) * sizeof(char));
	if (cpstr == NULL)
		return (NULL);

	strcpy(cpstr, str);
	return (cpstr);
}

