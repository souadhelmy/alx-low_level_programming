#include "main.h"
/**
 * _strchr - locates a character in a string
 * @s: string
 * @c: char
 * Return: char
 */
char *_strchr(char *s, char c)
{
	int i = 0;

	while (*(s + i) != '\0')
	{
		if (*(s + i) == c)
			return (s + i);
		i++;
	}
	/* Check if the c is null byte */
	if (c == '\0')
		return (s + i);
	else
		return (0);
}
