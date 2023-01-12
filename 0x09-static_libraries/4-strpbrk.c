#include "main.h"
#include <stddef.h>
/**
 * _strpbrk - locates the first occurrence in the string s of any of the bytes
 * in the string accept
 * @s: string
 * @accept: char
 * Return: char
 */
char *_strpbrk(char *s, char *accept)
{
	int i = 0;
	int find = 0;

	while (*(s + i) != '\0')
	{
		int j = 0;

		while (*(accept + j) != '\0')
		{
			if (*(accept + j) == *(s + i))
			{
				find = 1;
				break;
			}
			j++;
		}
		if (find == 1)
			break;

		i++;
	}

	if (find == 1)
		return (s + i);
	else
		return (NULL);
}
