#include "main.h"
#include <stdio.h>
/**
 * _strpbrk - searches a string for any of a set of bytes
 * @s: string
 * @accept: string
 * Return: *to the byte in s
*/
char *_strpbrk(char *s, char *accept)
{
	int a = 0;
	int b;

	while (s[a])
	{
		b = 0;
		while (accept[b])
		{
			if (s[a] == accept[b])
			{
				s += a;
				return (s);
			}
			b++;
		}
		a++;
	}
	return (NULL);
}
