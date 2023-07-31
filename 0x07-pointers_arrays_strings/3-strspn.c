#include "main.h"

/**
 * _strspn - main function.
 * @s: the string source
 * @accept: letters
 *
 * Description: function that gets the length of a prefix substring.
 *
 * Return: number of bytes
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i;

	for (i = 0;s[i] != '\0'; i++)
	{
		if (strchr (accept, s[i]) == NULL){
			break;
		}
	}
	return (i);
}
