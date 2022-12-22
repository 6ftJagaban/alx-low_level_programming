#include "main.h"
/**
 * _strncat - concatenates two strings
 * @src: source of strings
 * @dest: destination
 * @n: length of int
 * Return: pointer to the resulting strin dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	for (i = 0; dest[i] != '\0'; i++)
	{
		continue;
	}
	for (j = 0; src[j] != '\0' && j < n; j++)
	{
		dest[i + j] = src[j];
	}
	dest[i + j] = '\0';
	return (dest);
}
