#include <stdio.h>
/**
 * my_constructor - prints a string before the main function runs
 */
void my_constructor(void) __attribute__((constructor))
{
	printf("You're beat! and yet, you must allow,\nI bore my house upon my back!\n");
}
