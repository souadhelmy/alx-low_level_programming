#include "main.h"
/**
 * _islower - Check is char is lower
 * @c: char
 * Return: 1 if lower, or 0 for non-lower
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
