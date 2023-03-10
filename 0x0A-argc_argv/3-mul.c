#include <stdio.h>
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
	if (argc > 3)
	{
		printf("%s\n", argv[1] * argv[2]);
		return (0);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
}
