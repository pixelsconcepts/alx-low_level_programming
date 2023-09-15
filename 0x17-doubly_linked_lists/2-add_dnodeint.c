#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_dnodeint - Prints all the elements of a dlistint_t list
 * @head: pointer to head
 * @n: member of the list
 *
 * Return: address of new element or NULL if it failed
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node = malloc(sizeof(dlistint_t));

	if (new_node == NULL)
	{
		return (NULL);
	}

	new_node->n = n;

	new_node->next = *head;

	new_node->prev = NULL;

	if (*head != NULL)
	{
		(*head)->prev = new_node;
	}

	*head = new_node;

	return (new_node);
}
