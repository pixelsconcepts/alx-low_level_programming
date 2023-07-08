#include <stdlib.h>
#include <stdio.h>

/**
 * main - Print the name of a progran
 * @argc: Argument integer.
 * @argv: Argument vector
 * Return: name of the program
 */

int main(int argc, char *argv[])
{
	int i;
	int product = 1;

	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			product *= strtol(argv[i], NULL, 10);
		}
		printf("%d\n", product);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
