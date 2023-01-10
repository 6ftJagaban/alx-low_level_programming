#include "main.h"
#include <stdio.h>
/**
 * main - Prints name of program
 * @argc: counts argument
 * @argv:  argument vector
 * Return: Always 0
 */
int main(int argc, char **argv)
{
	(void) argv;
	printf("%i\n", argc - 1);
	
	return (0);
}
