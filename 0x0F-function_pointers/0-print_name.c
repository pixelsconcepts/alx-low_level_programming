#include <stdio.h>
#include <string.h>
#include "function_pointers.h"

/**
 * print_name - prints a name using the specified function
 * @name: name of the person
 * @f: function pointer to the print function
 *
 * Return: Nothing.
 */

void print_name(char *name, void (*f)(char *))
{
	if (!f || !name)
	{
		return;
	}
	f(name);
}

