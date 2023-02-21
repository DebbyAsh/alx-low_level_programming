#include "main.h"
/**
 * print_last_digit - function that prints the last digit of a number
 * @n: parameter of the function
 * Return: always n
 */

int print_last_digit(int n)
{
	int a;

	a = n % 10;
	if (n < 0)
		n = -1 * n;
	return (a);
}
