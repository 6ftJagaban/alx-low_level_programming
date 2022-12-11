#include <stdio.h>
/**
 *main - ALX Coding Project
 *DESCRIPTION - printing alphabets in lowercase using 'putchar' function only
 *Return: Always 0 (Success)
 */
int main(void)
{
	  char t;

	for (t = 'a' ; t <= 'z' ; t++)
	       putchar(t);

	for (t = 'A' ; t <= 'Z' ; t++){
		putchar(t);
}
	putchar('\n');
	return (0);

}
