#include <stdio.h>
/**
 *main - ALX Coding Project
 *DESCRIPTION - printing alphabets in lowercase using 'putchar' function only
 *Return: Always 0 (Success)
 */
int main(void)
{
	char t;

	char w;

	t = 'a';
	w = 'A';

	while (t <= 'z')
	{
		putchar(t);
		t++;
	}
	while (w <= 'Z')
	{
		putchar(w);
		w++;
	}
	putchar('\n');
	return (0);

}
