#include "main.h"
#include <stdlib.h>

/**
 * print_str - prints a variadic string each per time to stdout
 * @s: string to print
 *
 * Return: number of characters printed on Success
 */

int print_s(va_list s)
{
	int count;
	char *str = va_arg(s, char *);

	if (str == NULL)
		str = "(null)";
	for (count = 0; str[count]; count++)
	{
		_putchar(str[count]);
	}
	return (count);
}
