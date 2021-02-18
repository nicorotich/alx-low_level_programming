#include "holberton.h"

/**
 * _strcat - concatinates two strings
 * @dest: destination pointer
 * @src: pointer to a string
 * Return: concatinated string
 */
char *_strcat(char *dest, char *src)
{
	int i;
	int j;

	for (i = 0; dest[i] != '\0'; i++)
	{
	}

	j = 0;
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}

	dest[i] = '\0';
	return (dest);
}
