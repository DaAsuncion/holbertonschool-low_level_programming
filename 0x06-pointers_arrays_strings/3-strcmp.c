#include "main.h"
#include <stdio.h>
/**
 * _strcmp - compares two strings
 * @s1: string
 * @s2: string
 * Return: 0
 */
int _strcmp(char *s1, char *s2)
{
	int a = 0;
	int b = 0;

	while
		(s1[a] != '\0' && b == 0)
	{
		b = s1[a] - s2[a];
		a++;
	}
	return (b);
}
