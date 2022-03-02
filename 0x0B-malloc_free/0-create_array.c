#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * create_array - creates an array of chars
 * @c: init char
 * @size: the size of the memory to print
 * Return: * || NULL
*/
char *create_array(unsigned int size, char c)
{
	unsigned int i = 0;
	char *d = NULL;

	if (size > 0)
	{
		d = malloc(size);
		if (d != NULL)
		{
			for (i = 0; i <= size; i++)
			{
				d[i] = c;
			}
		}
	}
	return (d);
}
