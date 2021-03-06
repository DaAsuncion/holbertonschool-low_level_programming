#include "main.h"
#include <stdio.h>
/**
 * cap_string - capitalizes all words of a string
 * @n: name cond.
 * Return: n
*/
char *cap_string(char *n)
{
	int i = 0;

	if (n[i] > 96 && n[i] < 123)
		n[i] = n[i] - 32;
	for (; n[i]; i++)
	{
		if (n[i] == 9 || n[i] == 10 || n[i] == 32 || n[i] == 33 ||
				n[i] == 34 || n[i] == 40 || n[i] == 41 || n[i] == 44 ||
				n[i] == 46 || n[i] == 59 || n[i] == 63 || n[i] == 123 ||
				n[i] == 125)
			if (n[i + 1] > 96 && n[i + 1] < 123)
				n[i + 1] = n[i + 1] - 32;
	}
	return (n);
}
