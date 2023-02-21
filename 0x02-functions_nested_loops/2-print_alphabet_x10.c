#include "main.h"
/**
 * print_alphabet_x10 - prints all alphabets in lowercase 10 times
 * Return: always 0
 */

void print_alphabet_x10(void)
{
	char count;
	int freq;

	for (freq = 1; freq <= 10; freq++)
	{
		for (count = 'a'; count <= 'z' ; count++)
		{
			_putchar(count);
		}
		_putchar('\n');
	}
}
