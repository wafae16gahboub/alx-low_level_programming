#include "main.h"
/**
 * prime_number - recursively divide by higher divisor
 * @n: number to
 * @divisor: divisor
 * Return: 1 if prime, 0 if not  /wafa
 */

int prime_number(int n, int divisor)
{
	if (n == divisor)
		return (1);
	if (n % divisor == 0)
		return (0);
	return (prime_number(n, divisor + 1));

}

/**
 * is_prime_number - function that returns 1 if the input is a prime number
 * is a prime number, otherwise return 0.
 * @n: number
 * Return: 1 if prime, 0 if not wafa
 */

int is_prime_number(int n)
{
	int divisor = 3;

	if (n % 2 == 0 || n < 2)
		return (0);
	if (n == 2)
		return (1);

	return (prime_number(n, divisor));
}
