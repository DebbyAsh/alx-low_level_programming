#include "main.h"
/**
 * _strncpy - copies a string
 * @dest: destination input
 * @src: source input
 * @n: number of byte
 */
char *_strncpy(char *dest, char *src, int n)
{
	int destl = 0;
	int srcl = 0;
	int i;

	for (i = 0 ; dest[i] != '\0' ; i++)
		destl++;
	for (i = 0 ; src[i] != '\0' ; i++)
		srcl++;
	for (i = 0 ; i < n ; i++)
		dest[destl + i] = src[i];
	return (dest);

}
