#include "main.h"
/**
 * times_table - prints the multiplication table of nine
 * Return: Always 0
 */
void times_table(void)
{
	int b = 0, d = 9, y = 0;

	while (y <= 9)
	{
		while (b <= d)
		{
			int h = y * b;

			if (b != 0)
			{
				_putchar(',');
				if (h < 10)
				{
					_putchar(' ');
					_putchar(' ');
				}
				else
					_putchar(' ');
			}
			if (h < 10)
				_putchar(h + '0');
			else
			{
				_putchar(h / 10 + '0');
				_putchar(h % 10 + '0');
			}
			if (b == d)
				_putchar('\n');
			b++;
		}
		b = 0;
		y++;
	}
}
