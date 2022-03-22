#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * print_listint - prints all the elements of a list
 * @h: * to list
 * Return: num of nodes
*/
size_t print_listint(const listint_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		nodes++;
	printf("%d\n", h->n);
	h = h->next;
	}

	return (nodes);
}
