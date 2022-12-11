#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/**
 * main - ALX Coding Project
 * DESCRIPTION - assigning a string to the last digit of an unkown variable
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;
	int q;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	q = n % 10;
	printf("Last digit of %d is %d", n, q);
if (q > 5)
{
	printf(" and is greater than 5");
}
if (n == 0)
{
	printf(" and is 0");
}
if (n < 6 ||  n != 0)
{
	printf(" and is less than 6 and not 0\n");
}

	printf("\n");
	return (0);
}
