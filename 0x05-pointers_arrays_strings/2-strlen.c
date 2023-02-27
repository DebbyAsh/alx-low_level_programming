#include "main.h"
#include <stdio.h>
/**
 *_strlen - function that returns the length of a string
 *@s: holds the strings
 *Return: the length of string
*/

int _strlen(char *s)
{
	size_t len = 0;

	while (*s++)
	{
		len++;
	}
	return (len);
}
