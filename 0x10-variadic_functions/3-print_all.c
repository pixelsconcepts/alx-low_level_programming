#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <string.h>
#include "variadic_functions.h"

/**
 * print_all - Prints anything based on the format
 * @format: Format string containing the types of arguments
 *
 * Return: void
 */
void print_all(const char * const format, ...)
{
	va_list pa_args;
	int i = 0;
	char *str;
	char c;
	int num;
	float f;

	va_start(pa_args, format);

	while (format && format[i])
	{
		switch (format[i])
		{
			case 'c':
				c = va_arg(pa_args, int);
				printf("%c", c);
				break;

			case 'i':
				num = va_arg(pa_args, int);
				printf("%d", num);
				break;

			case 'f':
				f = va_arg(pa_args, double);
				printf("%f", f);
				break;

			case 's':
				str = va_arg(pa_args, char*);
				if (str == NULL)
				{
					printf("(nil)");
				}
				else
				{
					printf("%s", str);
				}
				break;
			default:
				break;

		}
		if (format[i + 1])
			printf(", ");
		i++;

	}

	printf("\n");
	va_end(pa_args);
}
