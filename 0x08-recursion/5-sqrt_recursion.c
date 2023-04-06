#include "main.h"
/**
 * _sqrt_root - find square root of n, starting from the smallest possible, 0
 * @n: number
 * @root:root
 * Return: natural square root, or -1 if not natural /wafa
 */

int _sqrt_root(int n, int root)
{
	if (root * root > n)
		return (-1);

	else if (root * root == n)
		return (root);
	else

		return (_sqrt_root(n, root + 1));
}

/**
 * _sqrt_recursion -  returns the natural square root of a number.
 * @n: n
 * Return: natural square root, or -1 if not natural root
 */

	int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	else

		return (_sqrt_root(n, 0));
}
