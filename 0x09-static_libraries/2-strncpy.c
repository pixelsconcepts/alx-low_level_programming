#include "main.h"

/**
 * _strncpy - concatenates two strings
 * @dest: the string that will modified.
 * @src: the string that ill be concatenated to @des.
 * @n: how much to copy from src into dest.
 *
 * Return: a pointer to @des
 */
char *_strncpy(char *dest, char *src, int n)
{
	int ind1 = 0;

	for (ind1 = 0; ind1 < n && src[ind1] != '\0'; ind1++)
		dest[ind1] = src[ind1];
	for ( ; ind1 < n ; ind1++)
		dest[ind1] = '\0';

	return (dest);
}


