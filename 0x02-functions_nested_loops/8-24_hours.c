#include "main.h"
/**
 *jack_bauer - print every minutes of the day
 *Retun:
 */

void jack_bauer(void)
{
int hr0, hr1;
int min0, min1;

for (hr0 = 0 ; hr0 <= 2 ; hr0++)
{
for (hr1 = 0 ; hr1 < 10 ; hr1++)
{
for (min0 = 0 ; min0 < 6 ; min0++)
{
for (min1 = 0 ; min1 < 10 ; min1++)
{
_putchar(hr0 + '0');
_putchar(hr1 + '0');
_putchar(':');
_putchar(min0 + '0');
_putchar(min1 + '0');
_putchar('\n');
if (hr0 == 2 && hr1 == 3 && min0 == 5 && min1 == 9)
{
return;
}
}
}
}
}
}


