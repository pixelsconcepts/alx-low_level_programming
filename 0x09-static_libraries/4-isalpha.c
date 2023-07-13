#include "main.h"

/**
 * _isalpha - Checks if the arg c is lower care of uppercase
 *
 * *@c: Charact to be checked
 * Return: 1 (if true)
 */
int _isalpha(int c)
{
	if ((c > 'a' && c < 'z') || (c > 'A' && c < 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
