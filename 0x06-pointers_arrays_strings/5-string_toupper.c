#include "main.h"

/**
 * string_toupper - main function.
 * @str : string
 *
 * Description: make the letters bigger!.
 *
 * Return: string with capital.
 */
char *string_toupper(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] -= 32;
		}
		i++
	}
	return (str);
}
