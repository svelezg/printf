#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdarg.h>
#include "holberton.h"

/**
 * str_printf - Replicates the c standar library printf() function
 * @format: The operator
 * @valist: The operator
 * @str: The operator
 *
 * Return: number of  characters printed
 */
char *str_printf(const char *format, va_list valist, char *str)
{
int index = 0;
int index_struct = 0, position = 0;
op_w_t func_write[] = {
	{"c", char_printf},
{	"s", string_printf},
	{NULL, NULL}
};
while (*(format + index))
{
	if (*(format + index) == '%')
	{
		index_struct = 0;
		while (func_write[index_struct].opw != NULL)
		{
			if (*(format + index + 1) == *(func_write[index_struct].opw))
			{
			position += (func_write[index_struct].f(valist, (str + position)));
			}
		index_struct++;
		}
		if (*(format + index + 1) == '%')
		{
			*(str +  position) = '%';
			position++;
		}
		else if (*(format + index + 1) != 'c' && *(format + index + 1) != 's')
		{
			*(str +  position) = '%';
			position++;
			*(str +  position) = *(format + index + 1);
			position++;
		}
		index = index + 2;
	}
	else
	{
		*(str +  position) = *(format + index);
		index++;
		position++;
	}
}
*(str + position) = '\0';
return (str);
}


