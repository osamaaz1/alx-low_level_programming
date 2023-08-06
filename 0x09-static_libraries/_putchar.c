#include <unistd.h>

/**
 * _putchar - main function
 * @c: the char to print
 *
 * Return: 1 on suc
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
