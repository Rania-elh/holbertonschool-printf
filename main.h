#ifndef MAIN_HEADER
#define MAIN_HEADER
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

/**
 * struct toprint - type of argument to print/ specifier letter
 *  and pointer to func
 * @letter: type of specifier letter (format[i +1]) example d s c
 * @f: function that is associated with the specifier letter ^^
 */

/* -----------little typedef--------- */

typedef struct toprint
{
	char *letter;
	int (*f)(va_list args);
} toprint_;

/* -------all functions used-------- */

int _printf_char(va_list args);
int _printf(const char *format, ...);
int _printf_string(va_list args);
int _print_integer(va_list args);
int _print_decimal(va_list args);
int _printf_modulo(__attribute__((unused)) va_list args);
int _putchar(char);
int selection(va_list args, char specifiers);
int print_id(int n);

#endif
