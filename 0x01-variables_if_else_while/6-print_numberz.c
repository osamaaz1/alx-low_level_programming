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
	char num = 0;

	while (num <= 9)
	{
		putchar(num + 48);
		num++;
	}
	putchar('\n');

	return (0);
}
