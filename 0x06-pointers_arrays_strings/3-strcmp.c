#include "main.h"
/**
 * _strcmp - compares pointers to two strings
 * @s1:first input
 * @s2:second input
 * Return: difference of the two inputs
 */

int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s2 && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
