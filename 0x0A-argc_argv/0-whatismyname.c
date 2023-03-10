#include <stdio.h>
/**
 * main - prints the name of the executable file
 *
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: Always 0 (success)
 */
int main(int argc, char** argv)
{
	printf("%s", argv[0]);
	putchar(10);

	return (0);
}
