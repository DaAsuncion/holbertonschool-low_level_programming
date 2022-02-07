#include <stdio.h>
#include "_putchar.c"
#include "main.h"
/**
 **print_alphabet - Write a function that prints the alphabet, in lowercase
 **Return: 0
 */
void print_alphabet(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
{
	_putchar (ch);
}
	_putchar ('\n');
}
