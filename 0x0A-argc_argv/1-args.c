#include <stdio.h>
/**
 * main - prints number of arguments on main file
 *
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: Always 0 (success)
 */
int main(int argc, char __attribute__((unused)) **argv)
{
	int i, count;

	count = 0;
	for (i = 1; i <= argc; i++)
	{
		count++;
	}
	printf("%d\n", count);
	
	return(0);
}
