#include <stdio.h>
/**
*print_fibonacci - Prints fibonacci
*Return: void
*/

void print_fibonacci(void)
{
unsigned int num1 = 1;
unsigned int num2 = 2;
unsigned int fib;
int i;

printf("%u, %u, ", num1, num2);

for (i = 3; i <= 98; i++)
{
fib = num1 + num2;
printf("%u", fib);

if (i != 98)
{
printf(", ");
}

num1 = num2;
num2 = fib;
}

printf("\n");
}

/**
 * main - Entry point
 * Return: 0
 */
int main(void)
{
print_fibonacci();
return (0);
}
