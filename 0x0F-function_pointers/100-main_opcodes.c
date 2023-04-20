#include <stdio.h>
#include <stdlib.h>
/**
 * main - program that prints
 * @argc: number
 * @argv: array
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int bytes, i;
	char *ptr;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	bytes = atoi(argv[1]);

	if (bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}
	ptr = (char *)main;

	for (i = 0; i < bytes; i++)
	{
		if (i ==  bytes - 1)
		{
			printf("%02hhx ", ptr[i]);
		}
		return (0);
	}
}
