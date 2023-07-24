#include "main.h"
/**
 * _strlen - main function.
 * @s : char that want to count the lenth.
 *
 * Description: swap the value of s
 *
 * Return: None.
 */
int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}
