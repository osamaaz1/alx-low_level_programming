#include "main.h"
#include <stdio.h>
/**
 * main - Entry part
 *
 * Description: print square!
 *
 * Return: nothing!
*/
int main(void)
{
	int x;

	for (x = 0; x <= 100; x++)
	{
		if (x % 3 == 0)
			printf("Fizz");
		else if (x % 5 == 0)
			printf("Buzz");
		else
			printf("%d", x);
		printf(" ");
	}
}
