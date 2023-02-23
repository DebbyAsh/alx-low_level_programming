#include "main.h"

/**
 *_isupper - checks for uppercases
 *@a: parameter
 *Return: always 1 when letter is upper and 0 otherwise
 */

int _isupper(int a)
{
	if (a >= 65 && a <= 90)
	{
		return (1);
	}
	return (0);
}
