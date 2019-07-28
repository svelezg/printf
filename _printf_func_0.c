#include <stdio.h>
#include "holberton.h"
#include <stdarg.h>
/**
 * size_char - Replicates the c standar library printf() function
 * @valist: The operator
 * @size: The operator
 *
 * Return: number of  characters printed
 */
int size_char(va_list valist, int size)
{
char vble;
vble = va_arg(valist, int);
if (vble != '\0')
	size++;
return (size);
}


/**
 * size_string- Replicates the c standar library printf() function
 * @valist: The operator
 * @size: The operator
 *
 * Return: number of  characters printed
 */
int size_string(va_list valist, int size)
{
char *vble;
int index = 0;
vble = va_arg(valist, char *);
while (*(vble + index) != '\0')
{
	size++;
	index++;
}
return (size);
}


/**
 * char_printf - Replicates the c standar library printf() function
 * @valist: The operator
 * @str: The operator
 *
 * Return: number of  characters printed
 */
int char_printf(va_list valist, char *str)
{
int position = 0;
char  vble;

position++;
vble = va_arg(valist, int);
*(str) = vble;
return (position);
}


/**
 * string_printf - Replicates the c standar library printf() function
 * @valist: The operator
 * @str: The operator
 *
 * Return: number of  characters printed
 */
int string_printf(va_list valist, char *str)
{
int position = 0;
char *vble;
vble = va_arg(valist, char *);
while (*(vble + position) != '\0')
{
	*(str + position) = *(vble + position);
	position++;
}
	return (position);
}

