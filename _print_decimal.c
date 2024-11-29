#include <stdio.h>
#include <stdarg.h>
#include "main.h"

/*
 * _print_decimal - print a decimal
 *@agrs: int
 *Return: 0
 */

int _print_decimal(va_list args)
{
int i = va_arg(args, int);
int count = 0;
if (i < 0 )
{
	_putchar('-');
	i = -i;
	count++;
}
if (i / 10 != 0)
count += _print_decimal(args);
_putchar((i % 10) + '0');
count++;

return (count);
}
