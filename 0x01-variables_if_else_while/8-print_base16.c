#include <stdio.h>

/**
 * main - Entry part
 *
 * Description: print alphabet lowercase.
 *
 * Return: always 0 (success).
*/

int main(void)
{
	int num = 0;

	char c = 'a';

	while (num <= 9)
	{
		putchar(num + '0');
		num++;
	}
	while (c <= 'f')
	{
		putchar(c);
		c++;
	}
	printf("\n");

	return (0);
}
