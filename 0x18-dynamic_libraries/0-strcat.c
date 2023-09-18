#include "main.h"
#include <stdio.h>

/**
 * _strcat - Concatenates two strings
 * @dest: First string
 * @src: second string
 * Return: destination string
 */


char *_strcat(char *dest, char *src)
{
	int ind1 = 0;
	int ind2 = 0;

	while (dest[ind1] != '\0')
	{
		ind1++;
	}

	while (src[ind2] != '\0')
	{
		dest[ind1] = src[ind2];
		ind1++;
		ind2++;
	}

	dest[ind1] = '\0';

	return (dest);
}
