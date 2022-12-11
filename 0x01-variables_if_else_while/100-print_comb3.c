#include <stdio.h>
/**
 * main - ALX Coding Project
 * DESCRIPTION - [Advanced][Optional]
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n2;

	for (n2 = 0; n2 <= 99; n2++)
	{
		putchar(' ');
		putchar((n2 / 10) + '0');
		putchar((n2 % 10) + '0');
		putchar(',');
	}
	putchar('\n');
	return (0);
}
