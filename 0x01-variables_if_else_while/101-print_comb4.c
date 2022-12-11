#include <stdio.h>
/**
 * main - ALX Coding Project
 * DESCRIPTION - [Advanced][Optional]
 * Return: Always 0 (Sucess)
 */
int main(void)
{
	int z = '0';
	int o = '0';
	int t = '0';

	for (t = '0'; t <= '9';  t++)
	{
		for (o = '0'; o <= '9'; o++)
		{
			for (z = '0'; z <= '9'; z++)
			{
				if (!((z == o) || (o == t) || (o > z) || (t > o)))/*eliminates repitition*/
				{
					putchar(t);
					putchar(o);
					putchar(z);
					if (!(z == '9' && t == '7' && o == '8'))/* adds commas and spaces */

					{
						putchar(',');
						putchar(',');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}

