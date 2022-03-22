#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * add_nodeint_end - Write a function that adds a new node
 * at the end of a listint_t list.
 * @head: * to te adress
 * @n: int to the new node
 * Return: the address of the new element ||
 * NULL if it failed
*/
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new;
	listint_t *aux = *head;

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (*head)
	{
		for (; aux->next;)
		{
			aux = aux->next;
		}
		aux->next = new;
	}
	else
	{
		*head = new;
	}
	return (new);
}
