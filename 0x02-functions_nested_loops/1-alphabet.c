#include "main.h"
/**
 * print_alphabet - function that prints all alphabet in lower case
 *
 * Return: always 0
 */

void print_alphabet(void)
{
	char count;

	for (count = 'a'; count <= 'z' ; count++)
	{
		_putchar(count);
	}
	_putchar('\n');
}
