#include "main.h"
/**
 * _abs - compute the absolute value of an integer
 *
 * @a: number whose value is to be found
 * Return: Always 0
 */
int _abs(int a)
{
	if (a < 0)
		a *= -1;

	return (a);
}
