#include "main.h"

/**
 * _strpbrk - main function.
 * @s: the string source
 * @accept: letters
 *
 * Description: function that searches a string for any of a set of bytes.
 *
 * Return: number of bytes
 */
char *_strpbrk(char *s, char *accept)
{
	unsigned int i, j;
	int t = 0;
	char *word = 0;

	for (i = 0; accept[i] != '\0'; i++)
	{
		for (j = 0; s[j] != '\0'; j++)
		{
			if (s[j] == accept[i])
			{
				t = 1;
				word = &s[j];
				while (s[j] != '\0' && s[j + 1] == accept[i])
					j++;
				break;
			}
		}
		if (t)
			break;
	}
	return (word);
}
