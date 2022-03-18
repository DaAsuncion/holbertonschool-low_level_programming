#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * add_node - adds a new node at the beginning
 * @head: point the new node
 * @str: * to list
 * Return: adress || NULL
*/
list_t *add_node(list_t **head, const char *str)
{
	char *nstr = strdup(str);
	list_t *newhead = NULL;
	int i;

	if (!nstr)
	return (NULL);

	for (i = 0; nstr[i] != '\0'; i++)
	{
	;
	}
	newhead = malloc(sizeof(list_t));
	if (newhead == NULL)
	{
	free(nstr);
	return (NULL);
	}
	newhead->str = nstr;
	newhead->len = i;
	newhead->next = *head;
	*head = newhead;
	return (newhead);
}
