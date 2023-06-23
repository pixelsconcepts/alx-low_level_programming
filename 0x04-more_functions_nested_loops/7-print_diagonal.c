#include "main.h"

/**
 * print_diagonal - print a diagonal line of a length.
 * @n: Intger to be checkrf
 */
void print_diagonal(int n)
{
int print_sign, i;

if (n <= 0)
{
_putchar('\n');
return;
}

for (i = 0 ; i < n ; i++)
{
print_sign = i;
while (print_sign > 0)
{
_putchar(32);
print_sign--;
}
_putchar('\\');
_putchar('\n');
}
}
