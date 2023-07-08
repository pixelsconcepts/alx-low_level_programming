#include <stdio.h>

/**
 * main - Print the name of a progran
 * @argc: Argument integer.
 * @argv: Argument vector
 * Return: name of the program
 */

int main(int argc, char *argv[])
{
	(void)argv;
	
	printf("%d\n", argc - 1);
	return (0);
}
