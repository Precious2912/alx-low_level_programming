#include "main.h"

/**
 * leet - encodes a string into 1337
 * @s: string to be encoded
 * Return: A pointer to encoded string
 */
char *leet(char *s)
{
	int i = 0, j;
	int low_letters[] = {97, 101, 111, 116, 108};
	int upp_letters[] = {65, 69, 79, 84, 76};
	int numbers[] = {52, 51, 48, 55, 49};

	while (*(s + i) != '\0')
	{
		for (j = 0; j < 5, j++)
		{
			if (*(s + i) == low_letters[j] || *(s + i) == upp_letters[j])
			{
				*(s + i) = numbers[j];
				break;
			}
		}
		i++;
	}

	return (s);
}
