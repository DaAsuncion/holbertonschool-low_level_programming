#include "main.h"
#include <stdio.h>
/**
 * _memcpy - copies memory area
 * @dest: * to the destination array
 * @src: * to the source of data to be copied
 * @n: bytes to be copied
 * Return: dest
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int d;

	for (d = 0; d < n; d++)
	{
		dest[d] = src[d];
	}
	return (dest);
}
