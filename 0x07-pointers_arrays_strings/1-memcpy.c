#include "main.h"
/**
 * _memcpy -function that copies memory area
 * @dest: destination memory area
 * @src: source memory area
 * @n: number of bytes
 * Return: pointer to destination memory
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int r = 0;
	int i = n;

	for (; r < i; r++)
	{
		dest[r] = src[r];
		n--;
	}
	return (dest);
}
