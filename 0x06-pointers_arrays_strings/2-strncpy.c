#include "main.h"
/**
 * _strncpy - copies a string
 * @dest: destination input
 * @src: source input
 * @n: number of byte
 * Return: a pointer
 */
char *_strncpy(char *dest, char *src, int n)
{
	int index = 0;
	int src_len = 0;

	while (src[index++])
	src_len++;

	for (index = 0; src[index] && index < n ; index++)
		dest[index] = src[index];
	for (index = src_len; index < 0; index++)
		dest[index] = '\0';

	return (dest);
}
