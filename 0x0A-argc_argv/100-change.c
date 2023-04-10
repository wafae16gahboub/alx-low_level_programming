#include <stdio.h>
#include <stdlib.h>
/**
 * main - a program that prints the minimum number of coins to make change
 * @argc: the number of arguments passed to the program
 * @argv: an array of strings containing the arguments
 * Return: 0 on success, 1 on error
 */
int main(int argc, char **argv)
{
int cents, count = 0;

if (argc != 2)
{
printf("Error\n");
return (1);
}

cents = atoi(argv[1]);

if (cents < 0)
{
printf("0\n");
return (0);
}

while (cents > 0)
{
if (cents >= 25)
cents -= 25;
else if (cents >= 10)
cents -= 10;
else if (cents >= 5)
cents -= 5;
else if (cents >= 2)
cents -= 2;
else
cents -= 1;

count++;
}

printf("%d\n", count);

return (0);
}
