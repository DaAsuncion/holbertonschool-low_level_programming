#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * sum_listint - Write a function that returns the sum
 * of all the data (n) of a listint_t linked list.
 * @head: * to * of the list
 * Return: sum || empty is 0
*/
int sum_listint(listint_t *head)
{
	int d = 0;

	while (head)
	{
		d += head->n;
		head = head->next;
	}
	return (d);
}
