#include "main.h"
/**
 * _strncpy - copies the string pointed to by src - including the
 * terminating null byte (\0), to the buffer pointed to by dest.
 * @dest: destiation
 * @src: source
 * @n: length
 * Return: char *
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (*(src + i) != '\0')
	{
		if (i >= n)
			break;

		*(dest + i) = *(src + i);
		i++;
	}
	if (n > i)
	{
		*(dest + (i++)) = '\0';
		while (i < n)
		{
			*(dest + i) = '\0';
			i++;
		}
	}

	return (dest);
}
