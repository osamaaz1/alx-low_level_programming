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
	int i = 0;

	while (i < 10)
	{
		putchar(i + '0');
		if (i != 9)
		{
			putchar(', ');
		}
		i++;
	}

	putchar('\n');

	return (0);
}
