#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * print_list - print of the elements of a list
 * @h: list_t
 * Return: number of the nodes
*/
size_t print_list(const list_t *h)
{
	int i = 0;

	for (; h != NULL;)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%i] %s\n", h->len, h->str);
		}
		h = h->next;
		i++;
	}
	return (i);
}
