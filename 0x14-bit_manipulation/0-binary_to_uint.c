#include "main.h"
/**
  * _stoi - converts chars to ints
  * @c: char to convert
  * Return: converted int
  */
unsigned int _stoi(char c)
{
	return ((unsigned int) (c - '0'));
}
/**
  * _strlen - returns the length of the string
  * @s: the string to measure
  * Return: the length of string
  */
unsigned int _strlen(const char *s)
{
	unsigned int length = 0;

	while (*s)
	{
		length++;
		s++;
	}
	return (length);
}
/**
  * binary_to_uint - converts a string of 1's and 0's to a decimal number
  * @b: string to convert
  * Return: unsigned decimal number
  */
unsigned int binary_to_uint(const char *b)
{
	if (b == NULL)
	{
		return (0);
	}

	unsigned int len = _strlen(b);
	unsigned int value = 0;
	unsigned int exponent = 1;

	for (int i = len - 1; i >= 0; i--)
	{
		if (b[i] != '0' && b[i] != '1')
		{
			return (0);
		}

		value += _stoi(b[i]) * exponent;
		exponent *= 2;
	}

	return (value)
}
