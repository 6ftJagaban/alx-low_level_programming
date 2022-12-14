#include "main.h"
/**
 * main - ALX Coding Project
 * Description - prints lowercase alphabets ten times
 * Return: Always 0
 */
void print_alphabet_x10(void)/*prototype function*/
{
	int k = 97, g = 122, x = 1;

	while (x < 111)
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
