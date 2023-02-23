#include "main.h"
/**
 *print_line - function that prints a line
 *@x: parameter
 *
 */

void print_line(int x)
{
	int d;

	if (x <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (d = 0 ; d < x ; d++)
		{
			_putchar(95);
		}
		_putchar('\n');
	}
}
