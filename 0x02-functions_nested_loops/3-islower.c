#include "main.h"
/**
 **int _islower(int c) - Write a function that checks for lowercase character.
 *
 * @c:Returns 1 if c is lowercase 
 *
 **Return: 0
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	return (1);
	else
	return (0);
}
