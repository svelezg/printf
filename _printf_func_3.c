#include <stdio.h>
#include <stdarg.h>
#include <limits.h>
#include "holberton.h"

/**
 * size_hex_l - Replicates the c standar library printf() function
 * @valist: The operator
 * @size: size
 *
 * Return: number of  characters printed
 */
int size_hex_l(va_list valist, int size)
{
	int vble;

	vble = va_arg(valist, int);
	size += size_convert(vble, 16);
	return (size);
}
/**
 * hex_l_printf - Replicates the c standar library printf() function
 * @valist: The operator
 * @str: The operator str
 *
 * Return: number of  characters printed
 */
int hex_l_printf(va_list valist, char *str)
{
int position = 0;
unsigned int vble;
char *number;

vble = va_arg(valist, int);
number = convert(vble, 16, 0);
while (*(number + position))
{
	*(str + position) = *(number + position);
	position++;
}
return (position);
}

/**
 * size_hex_u - Replicates the c standar library printf() function
 * @valist: The operator
 * @size: size
 *
 * Return: number of  characters printed
 */
int size_hex_u(va_list valist, int size)
{
int vble;

vble = va_arg(valist, int);
size += size_convert(vble, 16);
return (size);
}
/**
 * hex_u_printf - Replicates the c standar library printf() function
 * @valist: The operator
 * @str: The operator
 *
 * Return: number of  characters printed
 */
int hex_u_printf(va_list valist, char *str)
{
int position = 0;
unsigned int vble;
char *number;

vble = va_arg(valist, int);
number = convert(vble, 16, 1);
while (*(number + position))
{
	*(str + position) = *(number + position);
	position++;
}
return (position);
}
/**
 * size_unsigned - Replicates the c standar library printf() function
 * @valist: The operator
 * @size: The operator
 *
 * Return: number of  characters printed
 */
int size_unsigned(va_list valist, int size)
{
int vble;

vble = va_arg(valist, unsigned int);
size += size_number(vble);
return (size);
}
