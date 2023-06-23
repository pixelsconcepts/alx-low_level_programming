#include "main.h"
/**
 * print_square - print a square to a given size.
 * @size: size square to print
 */
void print_square(int size)
{
int x, y;

if (size <= 0)
{
_putchar('\n');
return;
}

for (x = size ; x > 0 ; x--)
{
for (y = size ; y > 0 ; y--)
{
_putchar('#');
}
_putchar('\n');
}
}
