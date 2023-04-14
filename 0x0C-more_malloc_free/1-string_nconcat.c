#include <stdio.h>
#include <stdlib.h>
/**
 * string_nconcat - function that concatenates two strings
 * @s1: string 1
 * @s2: string 2
 * @n:number
 * Return: null or 0
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
char *str;
unsigned int len1;
unsigned int len2;
unsigned int i;
unsigned int j;

if (!s1)
s1 = "";
if (!s2)
s2 = "";
for (i = 0; s1[i] != '\0'; i++)
{
}
for (j = 0; s2[j] != '\0' && j < n; j++)
{
}
str = malloc(sizeof(char) * (i + j + 1));
if (!str)
return (NULL);
for (len1 = 0; len1 < i; len1++)
{
str[len1] = s1[len1];
}
for (len2 = 0; len2 < j; len2++)
{
str[len1 + len2] = s2[len2];
}
str[len1 + len2] = '\0';
return (str);
}
