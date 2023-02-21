#include "main.h"
/**
 * _abs - prints out the absolute value
 * @n: parameter of the function
 * Return: returns the absolute value
 */

int _abs(int n)
{
	if (n < 0)
		n = -1 * n;
	else if (n >= 0)
		n = n;
	return (n);
}
