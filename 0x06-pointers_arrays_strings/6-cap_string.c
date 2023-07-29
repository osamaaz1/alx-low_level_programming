#include "main.h"

/**
 * cap_string - main function.
 * @str : string
 *
 * Description: make the letters smaller!
 *
 * Return: string with small letters.
 */
char *cap_string(char *str)
{
	int i = 0;

        while (str[i] != '\0')
        {

		if (str[0] >= 97 && str[0] <= 122)
		{
			str[0] -= 32;
		}
		if (str[i] == ' ' || str[i] == '\t' ||
				str[i] == '\n' || str[i] == ',' ||
				str[i] == ';' || str[i] == '.' ||
				str[i] == '!' || str[i] == '?' ||
				str[i] == '\"' || str[i] == '(' ||
				str[i] == ')' || str[i] == '{' ||
				str[i] == '}' || str[i] == '"')
		{
			if (str[i] >= 'a' && str[i] <= 'z')
			{
				str[i] -= 32;
			}
		}

	i++;
	}
	return (str);
}
