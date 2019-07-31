#include <stdio.h>
#include "holberton.h"
#include <stdarg.h>

/**
 * reverse_printf - Reverses a string
 * @valist: The string to reverse
 * @str: The destination string to copy into
 *
 * Return: number of  characters printed
 */
int reverse_printf(va_list valist, char *str)
{
int position = 0;
int rev = 0;
char *vble, *null;

null = "(null)";
vble = va_arg(valist, char *);

if (vble == NULL)
{
	vble = null;
	while (*(vble + position) != '\0')
	{
	*(str + position) = *(vble + position);
	position++;
	}
	return (position);
}


while (*(vble + position) != '\0')
{
	position++;
}
rev = position - 1;

position = 0;
while (*(vble + position) != '\0')
{
	*(str + position) = *(vble + rev);
	position++;
	rev--;
}
	return (position);
}
