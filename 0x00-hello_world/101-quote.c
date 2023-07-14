#include <unistd.h>

/**
 * main - Entry point
 *
 * Description: A c program to print without using print!
 *
 * Return: 1
 *
 * **/

int main(void)
{	char m[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
	write(1, m, 59);
	return (1);
}
