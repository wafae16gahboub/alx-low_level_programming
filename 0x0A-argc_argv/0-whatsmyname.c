#include <stdio.h>
/**
 * main - Entry point
 * @argc: The number of command line arguments
 * @argv: An array containing the command line arguments
 *
 * Return: Always 0
 */
int main(int argc, char **argv)
{
	if (argc > 0)
	printf("%s\n", argv[0]);
	return (0);
}
