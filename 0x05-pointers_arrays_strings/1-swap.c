#include "main.h"

/**
 * swap_int - Swaps the value of to int parameters a and b
 * @a: first parament
 * @b: second parament
 */

void swap_int(int *a, int *b)
{
	int temp_a;

	temp_a = *a;


	*a = *b;
	*b = temp_a;
}
