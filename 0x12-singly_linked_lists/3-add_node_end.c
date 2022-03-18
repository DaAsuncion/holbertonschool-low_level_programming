#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * add_node_end - adds new node to end of list
 * @head: * to * of head of linked list
 * @str: const char * to string
 * Return: address new element || NULL
*/
list_t *add_node_end(list_t **head, const char *str)
{
	char *nstr = strdup(str);
	list_t *last = *head;
	list_t *new_node = NULL;
	int i;

	if (!nstr)
		return (NULL);

	for (i = 0; nstr[i] != '\0'; i++)
		;
	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
	{
		free(nstr);
		return (NULL);
	}
	new_node->str = nstr;
	new_node->len = i;
	new_node->next = NULL;
	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}
	while (last->next != NULL)
	{
		last = last->next;
	}
	last->next = new_node;
	return (new_node);
}
