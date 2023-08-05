#include <stdio.h>
/**
 * main - main function.
 * @argc: arguments count
 * @argv: arguments vector
 *
 * Description: function to print the arguments arrays.
 *
 * Return: 0 if succ.
 */
int main(int argc, char *argv[])
{
	for (int i = 0; i < argc; i++)
		printf("%s\n", argv[i]);

	return (0);
}
