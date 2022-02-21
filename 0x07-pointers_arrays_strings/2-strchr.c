#include "main.h"
#include <stdio.h>
/**
 * _strchr - function that locates a character in a string
 * @s: C string
 * @c: char search in s
 * Return: * to the char c || null if char is not found
*/
char *_strchr(char *s, char c)
{
	for (;; s++)
	{
		if (*s == c)
			return (s);
		if (!*s)
			return ('\0');
	}
	return ('\0');
}
