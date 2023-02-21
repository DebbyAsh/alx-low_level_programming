#include "main.h"
/**
 * _isalpha - detects only alphabets
 * @c: parameter of the function
 * Return: 1 when true 0 when false
 */

int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
		return (1);
	else
		return (0);
}
