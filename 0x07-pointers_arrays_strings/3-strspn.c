#include "main.h"
#include <stdio.h>
/**
 * _strspn - gets the length of a prefix substring
 * @s:bytes in the initial segment of s
 * @accept: bytes
 * Return: bytes from accept
*/
unsigned int _strspn(char *s, char *accept)
{
	unsigned int len = 0, d, acc = 0;
		while (accept[len])
		{
			d = 0;
			while (s[d] != 32)
			{
				if
					(accept[len] == s[d])
					{
						acc++;
					}
				d++;
			}
			len++;
		}
		return (acc);
}
