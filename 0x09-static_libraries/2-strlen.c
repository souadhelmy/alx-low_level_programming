#include "main.h"
/**
 * _strlen - returns the length of a string
 * @s: the pointer of the string
 * Return: int
 */
int _strlen(char *s)
{
	char *ptr = s;
	int count = 0;

	while (*(ptr + count) != '\0')
		count++;

	return (count);
}
