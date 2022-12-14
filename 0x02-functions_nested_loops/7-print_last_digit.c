#include "main.h"
/**
 * print_last_digit - prints last digit of a number
 * @num: number whose last digit is to be printed
 * Return: the last digit of @num
 */
int print_last_digit(int num)
{
	int dernier = num % 10;

	dernier = dernier < 0 ? -1 * dernier : dernier;
	_putchar(dernier = '0');

	return (dernier < 0 ? -1 * dernier : dernier);
}
