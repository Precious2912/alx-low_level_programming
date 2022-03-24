#include "main.h"

/**
 * string_toupper - changes all lowecase letters of string to uppercase
 * @s: string to be checked
 * Return: uppercase string
 */
char *string_toupper(char *s)
{
	int i = 0;

	while (s[i])
	{
		if (s[i] >= 'a' && s[i] <= 'z')
			s[i] = s[i] - 32;
		i++;
	}

	return (s);
}
