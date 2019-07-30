#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdarg.h>
#include "holberton.h"

/**
 * size_additional - Replicates the c standar library printf() function
 * @character: The operator
 * @size: list
 *
 * Return: number of  characters printed
 */
int size_additional(char character, int size)
{
if (character == '%')
{
	size++;
}
else if (character != 'c' && character != 's' &&  character != 'd'
	&& character != 'i' && character != 'b' && character != 'R'
	&& character != 'o' && character != 'x' && character != 'X'
	&& character != 'u')
{
	size = size + 2;
}
return (size);
}
/**
 * size_printf - Replicates the c standar library printf() function
 * @format: The operator
 * @valist: list
 *
 * Return: number of  characters printed
 */
int size_printf(const char * const format, va_list valist)
{
int size = 0, index = 0, index_struct = 0;

op_s_t func_size[] = {
	{"c", size_char},
	{"s", size_string},
	{"d", size_decimal},
	{"i", size_integer},
	{"R", size_string},
	{"b", size_binary},
	{"o", size_octal},
	{"x", size_hex_l},
	{"X", size_hex_u},
	{"u", size_unsigned},
	{NULL, NULL}
};

while (*(format + index))
{
	if (*(format + index) == '%')
	{
		index_struct = 0;
		while (func_size[index_struct].ops != NULL)
		{
			if (*(format + index + 1) == *(func_size[index_struct].ops))
			{
			size = (func_size[index_struct].f(valist, size));
			}
		index_struct++;
		}
		size = size_additional(*(format + index +  1), size);
		index = index + 2;
	}
	else
	{
		index++;
		size++;
	}
}
size = size + 1;
return (size);
}


