#include <stdio.h>
#include "main.h"
/**
 **print_alphabet_x10 - Write a function that prints 10 times the alphabet
 **Return: 0
 */
void print_alphabet(void);
{
	char (ch[10]);

	for (ch = 'a'; ch <= 'z'; ch++)
{
	_putchar(ch);
}
	_putchar ('\n');
}
