#include "main.h"
/**
 *_islower - function that detects lower cases
 *
 *@c: parameter of the function
 *
 * Return: 0 when true 1 when false
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
