#include "main.h"

/**
 * _strcmp - main function.
 * @s1 : first char
 * @s2 : sec char
 *
 * Description: used to compare two strings.
 *
 * Return: compation between s1 and s2.
 */
char _strcmp(char *s1, char *s2)
{
	int i = 0;

	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] != s2[i])
			break;
		i++;
	}
	return (s1[i] - s2[i]);
}
