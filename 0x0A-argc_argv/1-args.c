#include <stdio.h>
/**
 * main - main function.
 * @argc: arguments count
 * @argv: arguments vector
 *
 * Description: function to print the arguments numbers.
 *
 * Return: 0 if succ.
 */
int main(int argc, char *argv[])
{
	(void)argv;
	printf("%d\n", argc - 1);
	return (0);
}
