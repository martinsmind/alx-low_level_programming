#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include <math.h>

/**
*  main -  prints all possible combinations of single-digit numbers
*
* Return: numbers separate by goma
*/

int main(void)
{
	char i = '0', j = '0', k = '0';

	int a = 8;

	for (; i <= '9'; i++)
	{
		for (; j < '7'; j++)
		{
			for (; k < '3'; k++)
			{
				putchar (i);
				putchar (i + 1);
				putchar (i + 2);

				putchar(',');
				putchar(' ');
			}
		}
		putchar(i);
	}
	putchar('\n');
	return (0);
}
