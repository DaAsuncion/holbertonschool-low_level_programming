#include<stdio.h>

/**
 *main - we will display the size of certain files
 *Return: 0
*/

int main(void)
{
	printf("Size of int: %zu bytes\n", sizeof(int));
	printf("Size of float: %zu bytes\n", sizeof(float));
	printf("Size of double: %zu bytes\n", sizeof(long long int));
	printf("Size of char: %zu byte\n", sizeof(char));
	return (0);
}
