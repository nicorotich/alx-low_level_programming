#include "holberton.h"
/**
 * _isalpha -returns 1 if c is a letter
 * @c: integer to be tested
 * Return: 1 or 0
 */
int _isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
