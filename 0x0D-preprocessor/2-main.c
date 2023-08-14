#include <stdio.h>
/**
 * main - main function.
 *
 * Description: This function prints the name of the file
 * Return: 0 on suc or 1 om fail
 */
int main(void)
{
	/* Get the name of the current file. */
	const char *filename = __FILE__;

	/* Print the name of the file to the standard output. */
	printf("%s\n", filename);
	return (0);
}

