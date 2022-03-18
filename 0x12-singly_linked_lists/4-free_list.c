#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * free_list - frees a list
 * @head: * to * of head of linked list
 * Return: void
*/
void free_list(list_t *head)
{
	list_t *node = head;
	list_t *temp;

	while (node != NULL)
	{
		temp = node;
		node = node->next;
		free(temp->str);
		free(temp);
		head = NULL;
	}
}
