#include "main.h"
/**
 * _puts - prints a string
 * @str: string
 * Return: the length of the string
 */
void _puts(char *str)
{
	int h = 0;

	while (str[h] != '\0')
	{
		_putchar(str[h]);
		h++;
	}
	_putchar('\n');
}
