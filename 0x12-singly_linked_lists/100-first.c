#include <stdio.h>

/**
 * print_first - A function that prints before man
 *
 * Return: Always 0.
 */

void print_first(void)
{
	printf("You're beat! and yet, you must allow,\nI bore my house upon my back!\n");
}

/**
 * print_first_wrapper - this function is marked with
 * a constructor attribute so that it prints before
 * the main function
 *
 * Return: Always 0.
 */
void __attribute__((constructor)) print_first_wrapper(void)
{
	print_first();
}

