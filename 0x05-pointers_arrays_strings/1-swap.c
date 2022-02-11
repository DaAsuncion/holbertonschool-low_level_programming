#include "main.h"
#include <stdio.h>
/**
 * swap_int - swaps the values of two integers
 * @a: value
 * @b:value2
 * Return: void
*/
void swap_int(int *a, int *b)
{
	int swap;

	swap = *a;
	*a = *b;
	*b = swap;
}
