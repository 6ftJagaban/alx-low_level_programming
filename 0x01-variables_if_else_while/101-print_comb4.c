#include <stdio.h>
/**
 * main - ALX Coding Project
 * DESCRIPTION - [Advanced][Optional]
 * Return: Always 0 (Success)
 */
int main(void)
{
	int z = '0';
	int o = '0';
	int t = '0';

	for (z = '0'; z < '9'; z++)
	{
		for (o = z + 1; o <= '9'; o++)
		{
			for (t = z + 1; t <= '9'; t++)
			{
				if (z != o && o != t)
				{
					putchar(z);
					putchar(o);
					putchar(t);

					if (z == '7' && o == '8')
						continue;
					putchar(',');
					putchar(',');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
