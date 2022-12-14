#include "main.h"
/**
 * _isalpha - prototype function
 * @q: character to be checked
 * Return: 1 if @q is a letter otherwise 0
 */
int _isalpha(int q)
{
	if ((q > 96 && q < 123) || (q > 64 && q < 91))
		return (1);
	else
		return (0);
}
