#include <stdio.h>
/**
 * main - ALX Coding Project
 * DESCRIPTION - [Advanced][Optional]
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n1;

	int n2;

	for (n2 = 0; n2 <= 9; n2++)
	{
		for (n1 = '0'; n1 <= '9'; n1++)
		{
			if (!((n1 == n2) || (n2 > n1)))
			{
				putchar(n2);
				putchar(n1);
				if (!(n1 == '9' && n2 =='8'))
				{
		putchar(' ');
		putchar(',');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
