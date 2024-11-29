#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>

int _putchar(char c);
int _printf(const char *format, ...); 
int _printf_char(va_list args);
int _printf_modulo(va_list args);
int _printf_string(va_list args);

#endif
