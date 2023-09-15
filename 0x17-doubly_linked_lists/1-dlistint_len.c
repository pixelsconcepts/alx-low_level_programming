#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * dlistint_len - returns the number of elements of a dlistint_t list
 * @h: struct node
 *
 * Return: num_of_elements
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t num_of_elements = 0;

	while (h != NULL)
	{
		h = h->next;
		num_of_elements++;

	}

	return (num_of_elements);
}

