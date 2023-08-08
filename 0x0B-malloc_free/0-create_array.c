#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - main function.
 * @size: size of array
 * @c: elements
 *
 * Description: function that creates an array of chars, 
 * and initializes it with a specific char.
 *
 * Return: Null if size = 0
 * create array.
 */
char *create_array(unsigned int size, char c)
{
	if (size == 0)
		return (NULL);
	char *array = (char*)malloc(size * sizeof(char));
	if(array == NULL)
		return (NULL);
	unsigned int i;

	for (i = 0; i < size; i++)
		array[i] = c;
	return (array);
}
