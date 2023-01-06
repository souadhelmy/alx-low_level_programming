#include "main.h"
/**
 * _strcmp - compare two string
 * @s1: first string
 * @s2: second string
 * Return: int
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0;
	char f1;
	char f2;

	while (*(s1 + i) != '\0' && *(s2 + i) != '\0')
	{
		f1 = *(s1 + i);
		f2 = *(s2 + i);
		if (f1 != f2)
			return (f1 - f2);
		i++;
	}

	f1 = *(s1 + i);
	f2 = *(s2 + i);

	return (f1 - f2);
}
