#include "main.h"

/**
 * is_prime_number - function that indicates a prime number
 * @n: number
 * Return: 1 when prime and 0 otherwise
 */

int is_prime_number(int n)
{
	int is_prime = 0;

	if (n < 2)
		is_prime = 0;
	else if (n == 2)
		is_prime = 1;
	else if (n % 2 == 1)
		is_prime = 1;
	return (is_prime);
}
