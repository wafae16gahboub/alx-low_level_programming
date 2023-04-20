#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * op_add - calculate the sum
 * @a: first num
 * @b: second num
 * Return: 0
 */

int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - the difference
 * @a: first num
 * @b: second num
 * Return: 0
 */

int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - the product
 * @a: first num
 * @b: second num
 * Return: 0
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - the division
 * @a: first num
 * @b: second num
 * Return: 0
 */

int op_div(int a, int b)
{
	if (b == 0)
	{
	printf("Error\n");
	exit(100);
	}
	return (a / b);
}
/**
 * op_mod - mod of two numbers
 * @a: number one
 * @b: number two
 * Return: the remainder of the division of a by b
 */

int op_mod(int a, int b)
{
	if (b == 0)
	{
	printf("Error\n");
	exit(100);
	}
	return (a % b);
}
