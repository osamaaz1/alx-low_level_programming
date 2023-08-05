#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - main function.
 * @argc: arguments count
 * @argv: arguments vector
 *
 * Description: program should print the result of the summation.
 *
 * Return: 0 if succ and 1 if failed
 */
int main(int argc, char *argv[])
{
	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}
	else
	{
		int i;
		int num;
		int sum = 0;

		for (i = 1; i < argc; i++)
		{
			int j;

			for (j = 0; argv[i][j] != '\0'; j++)
			{

				if (!isdigit((unsigned char)argv[i][j]))
				{
					printf("Error\n");
					return (1);
				}
			}
			num = atoi(argv[i]);
			sum += num;
		}
		printf("%d\n", sum);
		return (0);
	}
}
