#include <stdio.h>
#include <stdlib.h>
/**
 * main - a program that multiplies two numbers
 * @argc: first argument
 * @argv: second argument
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
int nbr1, nbr2, result;
if (argc != 3)
{
printf("Error\n");
return (1);
}
nbr1 = atoi(argv[1]);
nbr2 = atoi(argv[2]);
result = (nbr1)*(nbr2);
printf("%d\n", result);
return (0);
}
