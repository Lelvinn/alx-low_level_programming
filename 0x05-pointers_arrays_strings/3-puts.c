#include "main.h"
/**
 * _puts - prints a string to stdoutt
 *
 * @str: variable
 */

void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str + 0);
		++str;
	}
	_putchar('\n');
}
