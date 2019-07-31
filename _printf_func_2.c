#include <stdio.h>
#include <stdarg.h>
#include <limits.h>
#include "holberton.h"

/**
 * size_binary - Replicates the c standar library printf() function
 * @valist: The operator
 * @size: size
 *
 * Return: number of  characters printed
 */
int size_binary(va_list valist, int size)
{
	int vble;

	vble = va_arg(valist, int);
	size += size_convert(vble, 2);
	return (size);
}
/**
 * binary_printf - Replicates the c standar library printf() function
 * @valist: The operator
 * @str: The operator
 *
 * Return: number of  characters printed
 */
int binary_printf(va_list valist, char *str)
{
int position = 0;
unsigned int vble;
char *number;

vble = va_arg(valist, int);
number = convert(vble, 2, 0);
while (*(number + position))
{
	*(str + position) = *(number + position);
	position++;
}
return (position);
}

/**
 * size_octal - Replicates the c standar library printf() function
 * @valist: The operator
 * @size: size
 *
 * Return: number of  characters printed
 */
int size_octal(va_list valist, int size)
{
int vble;

vble = va_arg(valist, int);
size += size_convert(vble, 8);
return (size);
}
/**
 * octal_printf - Replicates the c standar library printf() function
 * @valist: The operator
 * @str: The operator
 *
 * Return: number of  characters printed
 */
int octal_printf(va_list valist, char *str)
{
int position = 0;
unsigned int vble;
char *number;

vble = va_arg(valist, int);
number = convert(vble, 8, 0);
while (*(number + position))
{
	*(str + position) = *(number + position);
	position++;
}
return (position);
}

/**
 * unsigned_printf - Replicates the c standar library printf() function
 * @valist: The operator
 * @str: The operator
 *
 * Return: number of  characters printed
 */
int unsigned_printf(va_list valist, char *str)
{
int position = 0;
int vble;

vble = va_arg(valist, unsigned int);
position = number_recursion(vble, str, position, 0);
return (position);
}

