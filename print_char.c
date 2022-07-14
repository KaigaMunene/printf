#include "main.h"
#include <stdlib.h>

/**
 * print_char - prints a character to stdout
 * @c: variadic parameter
 *
 * Return: always 1
 */

int print_c(va_list c)
{
	char ch = (char)va_arg(c, int);

	_putchar(ch);
	return (1);
}
