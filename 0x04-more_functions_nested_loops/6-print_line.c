#include "main.h"
/**
 * print line - Entry part
 * @ c: line distance
 *
 * Description: print streght line!
 *
 * Return: nothing!
*/

void print_line(int c)
{
	int dist;

	for (dist = 0; dist < c; dist++)
	{
		_putchar(95);
	}
	_putchar('\n');
}
