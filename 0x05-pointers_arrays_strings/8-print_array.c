#include "main.h"
#include <stdio.h>
/**
 * print_array - prints x element of an array of integers
 * @a: integer to check
 * @n: integer to check
 * Return: Always 0
 */
void print_array(int *a, int n)
{
	int x;

	for (x = 0 ; x < n; x++)
		if (x != n - 1)
			printf("%d, ", a[x]);
		else
			printf("%d", a[x]);
	printf("\n");
}