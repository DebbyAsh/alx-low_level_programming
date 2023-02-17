#include <stdio.h>
/**
 * main - start point
 * Return: Always 0
 */
int main(void)
{
	char counter;

	for (counter = 'a'; counter <= 'z'; counter++)
		putchar(counter);
	printf("\n");
	return (0);
}
