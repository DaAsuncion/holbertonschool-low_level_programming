#include "main.h"
#include <stdio.h>

/**
 * cap_string - capitalizes all words of a string
 *
 * Return: Always 0.
 */
char *cap_string(char *p)
{
	int c = 0;


	for (; p[c]; c++)
	{
	if (p[c] == 44 || p[c] == 59 || p[c] == 46 || p[c] == 33 || p[c] == 63 || p[c] == 34 || p[c] == 40 || p[c] == 41 || p[c] == 123 || p[c] == 125 || p[c] == 9 || p[c] == 10 || p[c] == 32)
	{
	if (p[c + 1] > 96 && p[c + 1] < 123) 
		p[c + 1] = p[c + 1] - 32;
	}
	}
	return (p);
}
