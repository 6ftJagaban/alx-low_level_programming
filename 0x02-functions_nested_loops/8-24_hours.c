#include "main.h"
/**
 * jack_bauer - prints every minute of the daynof Jack Bauer
 * from 00:00 to 23:59
 * Return: Always 0
 */
void jack_bauer(void)
{
	int f, r;

	for (f = 0; f <= 23; f++)
	{
		for (r = 0; r <= 59; r++)
		{
			_putchar((f / 10) + '0');
			_putchar((f % 10) + '0');
			_putchar(':');
			_putchar((r / 10) + '0');
			_putchar((r % 10) + '0');
			_putchar('\n');
		}
	}
}
