#include "main.h"
/**
 * main - Program starts here
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	char ch[] = {'_', 'p', 'u', 't', 'c', 'h', 'a', 'r'};

	int i;

	for (i = 0 ; i < 8; i++)
		_putchar(ch[i]);
	_putchar(10);
	return (0);
}
