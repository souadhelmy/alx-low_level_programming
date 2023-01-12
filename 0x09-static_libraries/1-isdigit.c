#include "main.h"
/**
 * _isdigit - Checks for uppercase character
 * @c: int
 * Return: 1 if is digit, otherwise 0
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
