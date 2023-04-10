#include "main.h"
/**
 * int binary_to_uint - converts a binary to unsigned int
 *
 * @b: input character
 *
 * Return: unsigned int converted from binary
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int unit;
	int bit;

	unit = 0;
	bit = 0;

	if (b == NULL)
		return (0);

	while (b[bit] != '\0')
	{
		if (b[bit] == '0' || b[bit] == '1')
		{
			unit <<= 1;
			unit += b[bit] - '0';
			bit++;
		}
		else
		{
			return (0);
		}
	}
	return (unit);
}
