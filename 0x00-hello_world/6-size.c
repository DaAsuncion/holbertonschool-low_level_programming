#include<stdio.h>

/**
 *main - we will display the size of certain files
 *Return: 0
*/

int main(void)
{
	printf("Size of int: %zu byte(s)\n", sizeof(char));
	printf("Size of float: %zu byte(s)\n", sizeof(int));
	printf("Size of double: %zu byte(s)\n", sizeof(long int));
	printf("Size of char: %zu byte(s)\n", sizeof(long long int));
	printf("Size of char: %zu byte(s)\n", sizeof(float));
	return (0);
}
