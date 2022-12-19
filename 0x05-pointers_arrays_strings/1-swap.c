#include "main.h"
/**
 * swap_int - swaps the value of integer a and integer b
 * @a: first integer
 * @b: second integer
 * Return: Always 0
 */

void swap_int(int *a, int *b)
{
	int d;

	d = *a;
	*a = *b;
	*b = d;
}
