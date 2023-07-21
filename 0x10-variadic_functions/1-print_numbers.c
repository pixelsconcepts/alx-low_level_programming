#include <stdio.h>
#include <stdarg.h>
#include <string.h>
#include <stdlib.h>
#include "variadic_functions.h"

/**
 * print_numbers - Prints numbers separated with separator
 * @separator: Separator between numbers
 * @n: number of integers passed to the function
 *
 * Return: Always 0.
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list pn_args;
	unsigned int num;

	va_start(pn_args, n);

	for (i = 0; i < n; i++)
	{
		num = va_arg(pn_args, int);

		printf("%d", num);

		if (separator != NULL && i < n - 1)
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(pn_args);
}
