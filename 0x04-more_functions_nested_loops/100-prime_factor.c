#include <stdio.h>
#include <math.h>
/**
 *main - prints prime and composite numbers of a given number
 *Return: always 0
 */

int main(void)
{
	long a, mx;
	long num = 612852475143;
	double square = sqrt(number);

	for (a = 1; a <= square ; a++)
	{
		if (num % a == 0)
		{
			mx = num / a;
		}
	}
	printf("%ld\n", mx);
	return (0);
}
