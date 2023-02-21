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
	if (a < 0)
	{
		a = a * -1;
	}
	_putchar(a + '0');
	return (a);
}
