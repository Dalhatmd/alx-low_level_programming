#include <stdio.h>
#include <stdlib.h>
/**
 * main - multiplies 2 numbers
 *
 * @argc: number of arguments
 * @argv: array containing arguments
 *
 * Return: 0 if successful, 1 otherwise
 */
int main(int argc, char **argv)
{
	if (argc == 3)
	{
		printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
		return (0);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
}
