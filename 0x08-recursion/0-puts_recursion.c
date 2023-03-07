#include "main.h"
#include <stdio.h>
/**
 * _puts_recursion - prints a string followed by a new line
 *
 * @s: string to be printed
 */
void _puts_recursion(char *s)
{
	if (s == '\0')
		putchar(10);
	putchar(s[0]);
	putchar(_puts_recursion(s[1]));
}
