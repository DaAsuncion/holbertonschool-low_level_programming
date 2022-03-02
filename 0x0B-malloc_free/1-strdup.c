#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _strdup - returns a pointer to a newly allocated space
 * @str: *string
 * Return: d, is the duplicated
*/
char *_strdup(char *str)
{
	char *d;
	int i = 0;
	int recorrer = 0;

	if (str == NULL)
	{
		return (0);
	}
	while (str[recorrer] != '\0')
	{
		recorrer++;
	}

	d = (char *)malloc(sizeof(char) * recorrer + 1);
	if (d == NULL)
	{
		return (0);
	}
	for (i = 0; i < recorrer; i++)
	{
		d[i] = str[i];
	}
	return (d);
}
