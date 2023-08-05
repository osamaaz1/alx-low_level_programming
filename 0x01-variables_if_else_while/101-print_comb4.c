#include <stdio.h>

/**
 * main - Entry part
 *
 * Description: program that prints all possible
 * different combinations of three digits.
 *
 * Return: always 0 (success).
*/

int main(void)
{
	int i, j, k;
	int count = 0;

	for (i = 0; i <= 7; i++)
	{
		for (j = i + 1; j <= 8; j++)
		{
			for (k = j + 1; k <= 9; k++)
			{
				putchar(i + '0');
				putchar(j + '0');
				putchar(k + '0');

				if (count < 110)
				{
					putchar(',');
					putchar(' ');
				}
				count++;
			}
		}
	}
	putchar('\n');
	return (0);
}
