#include <stdio.h>

/**
 * main - prints the alphabet in lowercase,
 * followedby a new line
 * main - Prints the alphabet
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char ch;
	char alp[26] = "abcdefghijklmnopqrstuvwxyz";
	int i;

	for (ch = 'a'; ch <= 'z' ch++)
	for (i = 0; i < 26; i++)
	{
		putchar(ch);
		putchar(alp[i]);
	}
	putchar('\n';
	return (0);
}
