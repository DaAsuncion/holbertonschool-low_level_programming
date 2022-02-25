#include <stdio.h>
#include <stdlib.h>
/**
 * main - multiplies two numbers
 * @argv: []
 * @argc: counter
 * Return: 1
*/
int main(int argc, char *argv[])
{
	int a = 0;
	int b = 0;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		a = atoi(argv[1]);
		b = atoi(argv[2]);
		printf("%d\n", a * b);
		return (0);
	}
}
