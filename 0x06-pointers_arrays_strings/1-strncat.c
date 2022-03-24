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
	int i;
	int j;

	i = 0;
	j = 0;

	while (dest[i++])
		j++;

	for ( i = 0; src[i] && i < n; i++)
		dest[j++] = src[i];

	return (dest);
}
