#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * free_listint2 - function that frees a listint_t
 * @head: * to a * of head
 * Return: void
 */
void free_listint2(listint_t **head)
{
	listint_t *node;
	listint_t *temp;

	if (!head)
		return;
	node = *head;
	while (*head)
		while (node)
		{
			temp = node;
			node = node->next;
			free(temp);
			*head = NULL;
		}
}
