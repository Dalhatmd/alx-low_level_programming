#include <stdio.h>
#include <time.h>
/*
 * main - Execution starts here
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	 int n;

	 srand(time(0));
	 n = rand() - RAND_MAX / 2;
	 /* your code goes there */
	if (n > 0)
		printf("is positive\n");
	if (n == 0)
		printf("is zero\n");
	else
		printf("is negative\n");
	 return (0);
}

