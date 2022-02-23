#include "main.h"
#include <stdio.h>
/**
 * sqr - natural square root of a number
 * @b: root
 * @n: number
 * Return: n != int = -1
*/
int sqr(int n, int b)
{
	if (b * b == n)
		return (b);
	else if (b * b > n)
		return (-1);
	else
		return (sqr(n, (b + 1)));
}
/**
 * _sqrt_recursion - root
 * @n:input
 * Return: n
*/
int _sqrt_recursion(int n)
{
	return (sqr(n, 1));
}
