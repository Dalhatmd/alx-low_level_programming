#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
void print_all(const char * const format, ...)
{
	va_list args;

	va_start(args, format);

	char c;
	
	int i;

	float f;

	char *s;

	i = 0;

	while (format[i])
	{
		switch (format[i])
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
				s = va_arg(args, char *);
				if (s)
					printf("%s", s);
				else
					printf("(nil)");
				break;
			default:
				i++;
				continue;
		}
		i++;
	}
	va_end(args);

	putchar(10);
}


