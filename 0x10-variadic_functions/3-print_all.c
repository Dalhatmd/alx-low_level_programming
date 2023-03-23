#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_all - prints anything
 *
 * @format: format of what will be printed
 */
void print_all(const char * const format, ...)
{
	va_list args;

	char c;
	
	int i;

	float f;

	char *s;

	int index;

	index = 0;

	va_start(args, format);

	while (format[index] && format)
	{
		switch (format[index])
		{
			case 'c':
				c = va_arg(args, int);
				printf("%c", c);
				break;
			case 'i':
				i = va_arg(args, int);
				printf("%d", i);
				break;
			case 'f':
				f = va_arg(args, double);
				printf("%f", f);
				break;
			case 's':
				s = va_arg(args, char*);
				if (s == NULL)
					printf("(nil)");
				printf("%s", s);
				break;
			default:
				index++;
				continue;

		}
		if (format[index + 1])
			printf(", ");
		index++;
	}
	va_end(args);

	printf("\n");
}
