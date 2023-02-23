#include "main.h"
/**
 * _isdigit - Checks if a int is between 0 and 9
 *
 * @c: int to be checked
 *
 * Return: 1 if @c is between 0 and 9, 0 otherwise
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
