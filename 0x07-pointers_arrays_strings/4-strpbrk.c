#include "holberton.h"
#include <stdio.h>

/**
 * _strpbrk - searches a string foe=r any of a set of bytes
 * @s: string to be searched
 * @accept: bytes to be accepted
 * Return: pointer to be the byte that matchesaccept or NULL if not found
 */
char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s)
	{
		for (i 0; accept[i]; i++)
			if (*s == accept[i])
				return (s);
		s++;
	}
	return (NULL);
}
