#include "main.h"

/**
 * number  - function that finds the square root of a number
 * @n: number to find the square root
 * @root: squareroot number to be found
 * Return: value
 */

int number(int n, int root)
{
	if (n * n == root)
		return (n);
	if (n == root)
		return (-1);
	return (1 * number(n + 1, root));
}

/**
 * _sqrt_recursion - function that finds the square root of a number
 * @n: number to find the square root
 * Return: value
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (number(1, n));
}
