#include <stdio.h>
#include <stdlib.h>
/**
 * main - Prints the last digit of a randomly generated number
 * and whether it it greather than 5, less than 6, or 0.
 *
 * Return: Always 0
 */
int main(void)
{
	int n;

	int m;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	m = n % 10;
	if (m > 5)
		printf("Last digit of %d is %d and is greater than 5\n", n, m);
	if (m == 0)
		printf("Last digit of %d is %d and is 0\n", n, m);
	if (m < 6 && m != 0)
		printf("Last digit of %d is %d and is than 6 and not 0\n", n, m);
	return (0);
}
