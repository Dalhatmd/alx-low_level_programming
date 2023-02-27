#include "main.h"
void puts_half(char *str)
{
	int count, i;

	while (count >= 0)
	{
		if (str[count] == '\0')
			break;
		count++;
	}
	if (count % 2 == 0)
		i = count / 2;
	else
		i = (count - 1) / 2;

	for (i++; i < count; i++)
		putchar(str[i]);
	putchar(10);
}
