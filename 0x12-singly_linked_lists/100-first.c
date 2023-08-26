#include <stdio.h>

/**
 * before_main - Function that runs before main.
 *
 * Description: This function is automatically executed before the main
 * function. It prints two lines of text to the standard output.
 */
void before_main(void) __attribute__((constructor));

void before_main(void)
{
  printf("You're beat! and yet, you must allow,\nI bore my house upon my back!\n");
}

int main(void)
{
  return (0);
}
