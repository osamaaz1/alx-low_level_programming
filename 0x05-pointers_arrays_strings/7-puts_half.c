#include "main.h"
/**
 * puts_half - main function.
 * @str : string that want to print reverse
 *
 * Description: to print reverse.
 *
 * Return: None.
 */
void puts_half(char *str)
{
	int len = 0;
	int i, start;

	while (str[len] != '\0')
	{
		len++;
	}
	start = len / 2;

	if (len % 2 == 1)
    	{
        	start++;
    	}

   	 for (i = start; i < len; i++)
    	{
    		_putchar(str[i]);
   	}
   	 _putchar('\n');
}

