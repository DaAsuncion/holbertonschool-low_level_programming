#include "main.h"
#include <stdio.h>
/**
 * rev_string -  reverses a string
 * @s: string
 * Return: void
*/
void rev_string(char *s)
{
	int i = 0, len = 0;

	char j;

	while (s[i++])
	{
		len++;
	}
	for (i = len - 1; i >= len / 2; i--)
	{
		j = s[i];
		s[i] = s[len - i - 1];
		s[len - i - 1] = j;
	}
}
