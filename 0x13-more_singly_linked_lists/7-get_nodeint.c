#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * get_nodeint_at_index - Write a function that returns
 * the nth node of a listint_t linked list.
 * Where index is the index of the node, starting at 0
 * @head: * to * to head lists
 * @index: start 0
 * Return: nth || node does not exist == NULL
*/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *actual = head;
	unsigned int i = 0;

	while (actual != NULL)
	{
		if (i == index)
			return (actual);
		i++;
		actual = actual->next;
	}
	return (NULL);
}
