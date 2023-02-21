#include <stdio.h>
/**
 * _islower - Checks if a character is in lowercase
 *
 * Return: 1 if lowercase, 0 otherwise
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0)
}
/**
 * main - Execution starts here
 *
 * Return Always 0 (success)
 */
int main()
{
	int r;

	r = _islower('H');

