#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * insert_nodeint_at_index - Write a function that inserts
 * a new node at a given position.
 * @head: * to list
 * @idx: index start at 0
 * @n: int
 * Return: address || NULL if it failed
*/
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i = 0;
	listint_t *aux = *head;
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (new)
	{
		new->n = n;
	}
	else
		return (NULL);
	if (idx == 0)
	{
		new->next = aux;
		*head = new;
		return (new);
	}
	for (; i < (idx - 1); i++)
	{
		if (!aux)
		{
			return (NULL);
		}
		aux = aux->next;
	}
	new->next = aux->next;
	aux->next = new;
	return (new);
}
