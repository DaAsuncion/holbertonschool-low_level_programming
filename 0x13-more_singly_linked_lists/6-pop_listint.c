#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * pop_listint - Write a function that deletes the head node
 * of a listint_t linked list, and returns the head node’s data (n).
 * @head: * to * to listint
 * Return: empty == 0
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int d;

	if (*head == NULL)
		return (0);
	temp = *head;
	*head = temp->next;
	d = temp->n;
	free(temp);
	return (d);
}
