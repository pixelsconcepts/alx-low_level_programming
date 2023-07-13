#include "main.h"


/**
 * _strncat - this fuction will concatenates two strings
 * @dest: the string that will modified.
 * @src: the string that ill be concatenated to @dest.
 * @n: copy up to poistion 'n'
 * Return: a pointer to @dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int ind1 = 0;
	int ind2 = 0;

	while (dest[ind1] != '\0')
	{
		ind1++;
	}

	while (ind2 < n && src[ind2] != '\0')
	{
		dest[ind1 + ind2] = src[ind2];
		ind2++;

	}
	dest[ind1 + ind2] = '\0';

	return (dest);
}
