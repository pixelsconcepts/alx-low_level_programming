#include "main.h"

/**
 * print_last_digit - Print the last digit of the number
 * @r: character to be checked
 * Return: last digit of number r
 */

int print_last_digit(int r)
{
int last_digit;
if (r < 0)
{
last_digit = -1 * (r % 10);
}
else
{
last_digit = r % 10;
}
_putchar((last_digit % 10) + '0');
return (last_digit % 10);
}
