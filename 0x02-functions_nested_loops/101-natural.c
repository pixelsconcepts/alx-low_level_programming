#include <stdio.h>
#include "main.h"

/**
 * main -calculates the sum of multiples of 3 or 5
 * Return: 0
 */
int main(void)
{
int num = 1024;
int sum = 0;
int i;

for (i = 1; i < num; i++)
{
if (i % 3 == 0 || i % 5 == 0)
{
sum += i;
}
}

printf("The sum of multiples of 3 or 5 below %d is: %d\n", num, sum);

return (0);
}
