#include "main.h"
/**
 * print_alphabet_x10 - ALX Coding Project
 * Description - prints lowercase alphabets ten times
 * Return: Always 0
 */
void print_alphabet_x10(void)
{
	int k = 97, g = 122, x = 1;

	while (x < 11)
	{
		while (k <= g)
		{
			_putchar(k);
			k++;
		}
		_putchar('\n');

		k = 97;
		x++;
	}
}
