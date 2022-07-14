#ifndef _MAIN_H_
#define _MAIN_H_

#include <stdarg.h>

int _putchar(char c);
int _printf(const char *format, ...);
int (*check_specifier(const char *))(va_list);

/**
 * struct func - struct for specifier to printer
 * @t: character to compare
 * @f: function to handle printing
 */
typedef struct func
{
char *t;
int (*f)(va_list);
} print_t;

int print_c(va_list c);
int print_s(va_list s);
int print_percent(va_list args);

#endif
