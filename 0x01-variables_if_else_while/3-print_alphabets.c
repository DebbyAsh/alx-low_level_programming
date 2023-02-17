#include <stdio.h>

/**
 * main - start of the program
 * Return: Always 0
 */
int main(void)
{
	char count1;
	char count2;

	for (count1 = 'a'; count1 <= 'z'; count1++)
		putchar(count1);
	for (count2 = 'A'; count2 <= 'Z'; count2++)
		putchar(count2);
	putchar('\n');

	return (0);
}
