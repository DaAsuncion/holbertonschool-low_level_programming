#include <stdlib.h>
#include <string.h>
/**
 * mallock_checked - function that allocates memory
 * @b: pointer
 * Return: p
*/
void *malloc_checked(unsigned int b)
{
	unsigned int *p = malloc(b);

	if (p == NULL)
		exit(98);
	return (p);
}

