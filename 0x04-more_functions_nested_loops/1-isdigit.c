#include "main.h"
/**
 *_isdigit - checks for digits 0 to 9
 *@d: parameter
 *Return: 1 if digit and 0 otherwise
 */

int _isdigit(int d)
{
	if (d >= 48 && d <= 57)
	{
		return (1);
	}
	return (0);
}
