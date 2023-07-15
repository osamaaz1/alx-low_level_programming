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
	char c = 'z';

	while (c <= 'a')
	{
		putchar(c);
		c--;
	}

	putchar('\n');
	return (0);
}
