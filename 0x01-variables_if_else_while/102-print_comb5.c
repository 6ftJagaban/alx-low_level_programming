#include <stdio.h>
#include <stdlib.h>
/**
 * main -  ALX Coding Project
 * DESCRIPTION - [Addvanced][Opptional]
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n1;

	int n2;

	for (n1 = 0; n2 < 100; n1++)
	{
		for (n2 = 0; n2 < 100; n2++)
		{
			if (n1 < n2)
			{
				putchar((n1 / 10) + 48);
				putchar((n1 % 10) + 48);
				putchar(' ');
				putchar((n2 / 10) + 48);
				putchar((n2 % 10) + 48);
				if (n1 != 98 || n2 != 99)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
