#include "main.h"
/**
 * _puts - prints a string, followed by a new line, to stdout
 * @str: the pointer of the string
 * Return: void
 */
void _puts(char *str)
{
	int p = 0;

	while (*(str + p) != '\0')
		_putchar(*(str + p++));
	_putchar('\n');
}
