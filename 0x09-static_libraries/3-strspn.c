#include "main.h"
/**
 * _strspn - gets the length of a prefix substring
 * @s: string
 * @accept: char
 * Return: unsigned int
 */
unsigned int _strspn(char *s, char *accept)
{
	int i = 0;

	while (*(s + i) != '\0')
	{
		int j = 0;
		int find = 0;

		while (*(accept + j) != '\0')
		{
			if (*(accept + j) == *(s + i))
			{
				find = 1;
				break;
			}
			j++;
		}
		if (find == 0)
			break;

		i++;
	}

	return (i);
}
