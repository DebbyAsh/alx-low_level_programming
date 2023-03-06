#include "main.h"

/**
 * _strchr -function that locates character in a string
 * @s: the string
 * @c: characters in the string
 * Return: a pointer to the first occurence of the character
 */

char *_strchr(char *s, char c)
{
	int i = 0;

	for (; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
			return (&s[i]);
	}
	return (0);
}
