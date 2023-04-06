/**
 * strlen_recursion - returns the length of the string
 * @s: string
 * Return: the length of the string
 */

int strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	else
		return (1 + strlen_recursion(s + 1));
}

/**
 * comparation - compares each character of the string.
 * @s: string
 * @a:iterator 1.
 * @b:iterator 2.
 * Return: .
 */

int comparation(char *s, int a, int b)
{
	if (*(s + a) == *(s + b))
	{
		if (a == b || a == b + 1)
			return (1);
		return (0 + comparation(s, a + 1, b - 1));
	}
	return (0);
}

/**
 * is_palindrome - if a string is a palindrome.
 * @s: string.
 * Return: 1 if s is a palindrome, 0 if not.
 */

int is_palindrome(char *s)
{
	if (*s == '\0')
	return (1);
	return (comparation(s, 0, strlen_recursion(s) - 1));
}
