#include "main.h"
#include <stdio.h>
/**
 * string_toupper - changes all lowercase letters to uppercase
 * @letter : choose char
 * Return: letter
*/
char *string_toupper(char *letter)
{
	int i = 0;

	for (; letter[i]; i++)
	{
	if (letter[i] > 96 && letter[i] < 123)
		letter[i] = letter[i] - 32;
	}

	return (letter);
}
