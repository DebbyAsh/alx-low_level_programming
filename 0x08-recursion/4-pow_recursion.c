#include "main.h"

/**
 * _pow_recursion - function that returns x exponent y
 * @x: first input representing the number
 * @y: power of x
 * Return: value
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 1)
		return (x);
	if (y == 0)
		return (1);
	return (x * _pow_recursion(x, (y - 1)));

}
