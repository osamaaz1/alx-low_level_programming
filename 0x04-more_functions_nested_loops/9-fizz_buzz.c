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
		else if (x % 3 == 0  && x % 5 == 0)
			printf("FizzBizz");
		else
			printf("%d", x);
		printf(" ");
	}
	return (0);
}
