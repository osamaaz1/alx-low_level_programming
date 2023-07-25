#include "main.h"

/**
 * main - main function.
 *
 * Description: Converts a string to an integer.
 *
 * Return: the converted interger
 */
#include <stdlib.h>
#include <stdio.h>
#include <time.h>

#define PASSWORD_LENGTH 20
#define VALID_CHARACTERS "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789!@#$%^&*()_+=-"

int main(void)
{
	char password[PASSWORD_LENGTH + 1];
	int i;

	srand(time(NULL));

	for (i = 0; i < PASSWORD_LENGTH; i++)
	{
		password[i] = VALID_CHARACTERS[rand() % sizeof(VALID_CHARACTERS)];
	}

	password[PASSWORD_LENGTH] = '\0';

	printf("%s\n", password);

	return (0);
}
