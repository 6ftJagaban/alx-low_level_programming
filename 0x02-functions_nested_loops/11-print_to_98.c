#include <stdio.h>
#include "main.h"
/**
 * print_to_98 - prints all natural numbers from @j to 98
 * @j: start of natural numbers
 * Return: Always 0
 */
void print_to_98(int j)
{
	if (j > 98)
	{
		while (j >= 98)
		{
			printf("%d", j);
			if (j != 98)
				printf(", ");
			j--;
		}
	}
	else
	{
		while (j <= 98)
		{
			printf("%d", j);
			if (j != 98)
				printf(", ");
			j++;
		}
	}
	putchar('\n');
}
