#include "main.h"

/**
 * rev_string - main function.
 * @s : string that want to print reverse
 *
 * Description: to print reverse.
 *
 * Return: None.
 */
void rev_string(char *s)
{
	int len = 0;
	int i, j;
	char temp;

	while (s[len] != '\0')
	{
		len++;
	}
	j = len - 1;

	for (i = 0; i < j; i++)
	{
		temp = s[i];
		s[i] = s[j];
		s[j] = temp;
		j--;
	}
}
