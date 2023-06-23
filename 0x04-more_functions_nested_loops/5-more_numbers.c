#include "main.h"

/**
 * more_numbers - prints numbers x10
 * return: void
 */

void more_numbers(void)
{
int i;
int j;

for (i = 0 ; i <= 10 ; i++)
{

while (j <= 14)
{

if (j > 9)
_putchar('0' + j / 10);
_putchar('0' + j % 10);
j++;
}
j = 0;
_putchar('\n');
}
}
