#include <stdio.h>
#include "main.h"
/**
 * _islower - A program that checks if @c is a lowercase letter
 *
 *@c: Character to be checked
 *
 * Return: 1 if lowercase, 0 otherwise
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
