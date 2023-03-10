#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - adds positive integers 
 *
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: 0 if successful, 1 otherwise
 */
int main(int argc, char *argv[])
{
	int sum, i;

	unsigned int j;

	sum = 0;
	for (i = 1; i < argc; i++)
	{
		for (j = 0; j < strlen(argv[i]); j++)
		{
			if (!isdigit(argv[i][j]))
			{
				printf("Error\n");
				return (1);
			}
		}
	sum += atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}
