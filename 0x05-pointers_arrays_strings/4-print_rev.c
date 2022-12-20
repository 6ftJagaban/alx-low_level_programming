#include "main.h"
/**
 * print_rev - prints a string in reverse
 * @s: the string
 */
void print_rev(char *s)
{
	int o, p;

	p = 0;
	while (s[p] != '\0')
		p++;
	for (o = p - 1; o >= 0; o--)
	{
		_putchar(s[o]);
	}
	_putchar('\n');
}
