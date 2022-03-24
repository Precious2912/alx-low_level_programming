#include "main.h"

/**
 * _strncat.c - concatenates two strings
 * @dest: destination
 * @src: source
 * @n: amout of bytes used from src
 * Return: the pointer to dest.
 */

char *_strncat(char *dest, char *src, int n)
{
	int count = 0, count2 = 0;

	while (dest[count++])
	{
		count2++;
	}

	for (count = 0; src[count] && count < n; count++)
	{
		dest[count2++] = src[count];
	}

	return (dest);
}
