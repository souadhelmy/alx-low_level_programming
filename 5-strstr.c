#include "main.h"
#include <stddef.h>
/**
 * _strstr - function finds the first occurrence of the substring needle in
 * the string haystack
 * @haystack: string
 * @needle: string
 * Return: char
 */
char *_strstr(char *haystack, char *needle)
{
	int i = 0;
	int find = 0;

	if (*(needle) == '\0')
		return (haystack);

	while (*(haystack + i) != '\0')
	{
		int j = 0;

		if (*(needle + j) == *(haystack + i))
		{
			find = 1;
			while (*(needle + j) != '\0')
			{
				if (*(needle + j) != *(haystack + i) || *(haystack + i) == '\0')
				{
					find = 0;
					i--;
					break;
				}
				i++;
				j++;
			}
		}
		if (find == 1)
		{
			i = i - j;
			break;
		}
		i++;
	}

	if (find == 1)
		return (haystack + i);
	else
		return (NULL);
}
