#include "main.h"
#include <stdio.h>
/**
 * _strstr - locates a substring
 * @haystack: string
 * @needle: substring
 * Return: * to the beginning of the located substring || NULL
*/
char *_strstr(char *haystack, char *needle)
{
	int a = 0;
	int b = 0;

	if ((haystack == NULL) || (needle == NULL))
		return (NULL);

	while (*haystack)
	{
		if (haystack[a] == needle[b])
		{
			haystack += a;
			return (haystack);
		}
		else
		{
			haystack++;
		}
	}
	return (NULL);
}
