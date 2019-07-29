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
else if (character != 'c' && character != 's')
{
	size = size + 2;
	printf("size = %i\n", size);
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
int size = 0, index = 0, index_struct = 0, a = 1;

op_s_t func_size[] = {
	{"c", size_char},
	{"s", size_string},
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
			a = 0;
			}
		index_struct++;
		}
		if (a = 1)
			size = size_additional(*(format + index + 1), size);
		index = index + 2;
		a = 1;
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


