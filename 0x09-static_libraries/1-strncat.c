#include "main.h"
/**
 * _strncat - appends the src string to the dest string
 * @dest: destiation
 * @src: source
 * @n: length
 * Return: char *
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int j = 0;

	while (*(dest + i) != '\0')
	{
		i++;
	}
	while (*(src + j) != '\0')
	{
		if (j == n)
			break;

		*(dest + i) = *(src + j);
		i++;
		j++;
	}
	*(dest + i) = '\0';

	return (dest);
}
