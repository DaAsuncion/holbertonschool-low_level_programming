#include "main.h"
#include <stdio.h>
/**
 * _memset - fills memory with a constant byte
 * @s: the address of memory to print
 * @n: the size of the memory to print
 * @b: constant byte
 * Return: pointer to the memory area s
*/
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int d;

	for (d = 0; d < n; d++)
	{
		s[d] = b;
	}
	return (s);
}
