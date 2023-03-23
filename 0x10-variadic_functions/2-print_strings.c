#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;

	va_list args;

	const char *str;

	va_start(args, n);

	for(i = 0; i < n; i++)
	{
		str = va_arg(args, const char*);
		if (!str)
			printf("(nil)");
		else
			printf("%s", str);

		if (separator && i < n - 1)
			printf("%s", separator);
	}

	putchar(10);

	va_end(args);
}
