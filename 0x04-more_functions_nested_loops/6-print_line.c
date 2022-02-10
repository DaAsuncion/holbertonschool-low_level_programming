#include "main.h"
/**
 * print_line - draws a straight line in the terminal
 * @n:_ should be printed
 * Return: 0
 */
void print_line(int n)
{
	int num;

	for (num = 0; num < n; num++)
	{
		_putchar ('_');
}
	_putchar('\n');
}
