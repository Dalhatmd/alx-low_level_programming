#include "main.h"
unsigned int binary_to_uint(const char *b)
{
	unsigned int num;
	int len;
	int i;

	num = 0;
	len = 0;
	i = 0;

	if (b == NULL)
		return (0);

	while (b[len] != '\0')
	{
		len++;
	}

	for (i = 0; i < len; i++)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
		num += (b[i] - '0') * (1u << (len - 1 - i));
	}
	return (num);
}
