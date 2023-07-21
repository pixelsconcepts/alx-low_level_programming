#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <string.h>
#include "variadic_functions.h"

/**
 * print_strings - Print string separated with separator
 * @separator: Character to separated printed strings
 * @n: Number of Argument passed in the function
 *
 * Return: Always 0.
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list ps_args;
	char *str;

	va_start(ps_args, n);

	for (i = 0; i < n; i++)
	{
		str = va_arg(ps_args, char*);

		if (str != NULL)
		{
			printf("%s", str);
		}
		else
		{
			printf("(nil)");
		}

		if (separator != NULL && i < n - 1 && str != NULL)
		{
			printf("%s", separator);
		}
	}

	printf("\n");
	va_end(ps_args);
}
