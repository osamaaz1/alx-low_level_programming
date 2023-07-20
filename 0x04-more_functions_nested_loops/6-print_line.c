#include "main.h"
/**
 * print_line - Entry part
 * @c: line distance
 *
 * Description: print streght line!
 *
 * Return: nothing!
*/
void print_line(int c)
{
	int dist;
	
	if (c > 0)
	{
		for (dist = 0; dist < c; dist++)
		{
			_putchar(95);
		}
	}
	_putchar('\n');
}
