#include "main.h"
#include <stdio.h>

/**
 * _puts - main function.
 * @str : char that want to count the lenth.
 *
 * Description: to print a str with endline!
 *
 * Return: None.
 */
void _put(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		puts(str[i]);
		i++;
	}
	puts('\n');
}
