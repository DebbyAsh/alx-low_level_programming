#include "main.h"
/**
 * reverse_array - reverses an arrary
 * @a: pointer
 * @n: number of elements of the array
 * Return: reversed content
 */

void reverse_array(int *a, int n)
{
	int tmp;
	int index;

	for (index = n - 1; index >= n / 2; index--)
	{
		tmp = a[n - 1 - index];
		a[n - 1 - index] = a[index];
		a[index] = tmp;
	}
}

