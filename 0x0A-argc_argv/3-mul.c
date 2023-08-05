#include <stdio.h>
#include <stdlib.h>

/**
 * main - main function.
 * @argc: arguments count
 * @argv: arguments vector
 *
 * Description: program should print the result of the multiplication.
 *
 * Return: 0 if succ.
 */
int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	int mul;
	int num1 = atoi(argv[1]);
	int num2 = atoi(argv[2]);

	mul = num1 * num2;
	printf("%d\n", mul);
	return (0);
}
