#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdarg.h>
#include "holberton.h"

/**
 * _printf - Replicates the c standar library printf() function
 * @format: The operator
 *
 * Return: number of  characters printed
 */
int _printf(const char * const format, ...)
{
unsigned int bytes = 0, size = 0;
va_list valist_size;
va_list valist_write;
char *str;

va_start(valist_size, format);
va_copy(valist_write, valist_size);


if (!format || (*format == '%' && !*(format + 1)))
	return (-1);

if (*format == '%' && *(format + 1) == ' ' && !*(format + 2))
	return (-1);

size = size_printf(format, valist_size);
str = (char *)malloc(sizeof(char) * (size));
if (str  == NULL)
	return (0);

str_printf(format, valist_write, str);
va_end(valist_write);
va_end(valist_size);

bytes = (int)write(1, str, size - 1);
free(str);
return (bytes);
}


