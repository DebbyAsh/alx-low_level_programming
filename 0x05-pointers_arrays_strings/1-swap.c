#include "main.h"
/**
 *swap_int - function that swaps the value of two integers
 *@a: first integer parameter
 *@b: second integer parameter
 */

void swap_int(int *a, int *b)
{
	int m;

	m = *a;
	*a = *b;
	*b = m;
}
