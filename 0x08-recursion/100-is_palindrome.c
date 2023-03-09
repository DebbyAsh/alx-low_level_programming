#include "main.h"

/**
 * _strlen_recursion - function that returns the length of a string
 * @s: string
 * Return: string length
 */

int _strlen_recursion(char *s)
{
        return (*s ? (1 +  _strlen_recursion(++s)) : 0);

}


/**
 *palindrome - function that indicates if a number is a palindrome
 *@s: pointer to string
 *@p: position
 *Return: 1 if palindrome and 0 otherwise
 */

int palindrome(char *s, int p)
{
	if (p < 1)
	{
		return (1);
	}
	if (*s == *(s + p))
	{
		return (palindrome(s + 1, p - 2));
	}
	return (0);
}


/**
 *is_palindrome - function that indicates if a number is a palindrome
 *@s: string
 *Return: 1 if palindrome and 0 otherwise
 */

int is_palindrome(char *s)
{
	int len = _strlen_recursion(s);

	return (palindrome(s, len - 1));
}

