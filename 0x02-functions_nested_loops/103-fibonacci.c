#include <stdio.h>

/**
 * main - print sum of even valued terms
 * Return: 0
 */

int main(void)
{
int num = 4000000;
int sum = 0;
int prev_num = 1;
int current_num = 2;
int next_num;

while (current_num <= num)
{
if (current_num % 2 == 0)
{
sum += current_num;
}

next_num = (prev_num + current_num);
prev_num = current_num;
current_num = next_num;
}

printf("%d\n", sum);

return (0);
}
