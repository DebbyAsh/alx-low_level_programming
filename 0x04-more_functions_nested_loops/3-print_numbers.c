#include "main.h"
/**
 *print_numbers - prints out the numbers from 0 to 9
 *Return: always 0
 */

void print_numbers(void)
{
	int i;

	for (i = 0 ; i <= 9 ; i++)
	{
		_putchar("%d", i);
	}
	_putchar("\n");
	return (0);
}
