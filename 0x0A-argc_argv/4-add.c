#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * main - adds positive numbers
 * @argc: count
 * @argv: vector
 * Return: 1
*/
int main (int argc,int **argv)
{
	int a;
	int b;
	int add;
	for (a = 1; a < argc; a++)
	{
		for (b = 0, argv [a][b] != "\0"; b++)
		{
		if (!isdigit(argv[a][b]))
		{
			printf("Error\n");
			return (1);
		}
		}
		add = add + atoi(argv[a]);
				}
				printf("%i\n", add);
				return (0);
}
