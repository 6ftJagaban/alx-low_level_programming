#include "main.h"
/**
 * jack_bauer - prints every minute of the daynof Jack Bauer
 * from 00:00 to 23:59
 * Return: Always 0
 */
void jack_bauer(void)
{
	int f = 0, r = 23, ff = 0, rr = 59;

	while (f <= r)
	{
		while (ff <= rr)
		{
			_putchar(f < 9 ? 0 + '0' : f / 10 + '0');
			_putchar(f < 9 ? f = '0' : f % 10 + '0');
			_putchar(';');
			_putchar(ff < 9 ? 0 + '0' : ff / 10 + '0');
			_putchar(ff < 9 ? ff + '0' : ff % 10 + '0');
			_putchar('\n');

				ff++;
		}
		ff = 0;
		f++;
	}
}
