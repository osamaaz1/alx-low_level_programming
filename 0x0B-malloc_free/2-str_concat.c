#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * str_concat - main function.
 * @s1: first string
 * @s2: sec string
 *
 * Description: function that concatenates two strings.,
 *
 * Return: Null if Failed, and string if succ
 */
char *str_concat(char *s1, char *s2)
{
	char *constr;
	size_t len1;
	size_t len2;

	if (s2 != NULL && s1 == NULL)
	{
		return (s2);
	}
	else if (s2 == NULL && s1 != NULL)
	{
		return (s1);
	}
	else if (s1 == NULL && s2 == NULL)
		return (NULL);
	len1 = strlen(s1);
	len2 = strlen(s2);
	constr = (char *)malloc((len1 + len2 + 1) * sizeof(char));
	if (constr == NULL)
		return (NULL);
	strcat(constr, s1);
	strcat(constr, s2);
	return (constr);
}

