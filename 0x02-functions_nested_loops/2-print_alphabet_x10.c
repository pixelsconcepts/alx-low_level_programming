#include "main.h"
/**
 * print_alphabet_x10 - Prints alphabets 10 times
 *
 * return: 0
 */

void print_alphabet_x10(void)
{
	int i = 1;

	while (i <= 10)
	{

		int j;

		for (j = 'a'; j <= 'z'; j++)
		{
			_putchar(j);
		}

		_putchar('\n');
		i++;
	}
}
