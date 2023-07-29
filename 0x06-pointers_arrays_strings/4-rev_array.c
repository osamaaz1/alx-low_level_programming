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
void reverse_array(int *a, int n)
{
	int i;

	for (i = n - 1; i >= 0; i--)
	{
		_putchar(a[i]);
	}
}
