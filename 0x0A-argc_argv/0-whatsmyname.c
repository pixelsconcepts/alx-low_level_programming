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

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
