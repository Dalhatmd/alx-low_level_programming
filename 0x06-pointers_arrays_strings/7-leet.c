#include "main.h"
/**
 * leet - Switches some characters for others
 *
 * @s: input string
 *
 * Return: string after some characters have been switched
 */
char *leet(char *s)
{
	int count = 0, i;
	int lower[] = {97, 101, 111, 116, 108};
	int upper[] = {65, 69, 79, 84, 76};
	int numbers[] = {52, 51, 48, 55, 49};

	while (*(s + count) != '\0')
	{
		for (i = 0; i < 5; i++)
		{
			if (*(s + count) == lower[i] || *(s + count) == upper[i])
			{
				*(s + count) = numbers[i];
				break;
			}
		}
		count++;
	}

	return (s);
}
