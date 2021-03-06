#include <stdio.h>
#include "holberton.h"
#include <stdarg.h>

/*int number_recursion(int num, char *str, int position, int sign);*/

/**
 * size_decimal - Replicates the c standar library printf() function
 * @valist: The operator
 * @size: size
 *
 * Return: number of  characters printed
 */
int size_decimal(va_list valist, int size)
{
int vble;

vble = va_arg(valist, int);

if (vble == 0)
	size++;
else
	size += size_number(vble);

return (size);
}
/**
 * size_integer - Replicates the c standar library printf() function
 * @valist: The operator
 * @size: The operator
 *
 * Return: number of  characters printed
 */
int size_integer(va_list valist, int size)
{
int vble;
vble = va_arg(valist, int);

if (vble == 0)
	size++;
else
	size += size_number(vble);

return (size);
}
/**
 * decimal_printf - Replicates the c standar library printf() function
 * @valist: The operator
 * @str: The operator
 *
 * Return: number of  characters printed
 */
int decimal_printf(va_list valist, char *str)
{
int position = 0;
int vble;

vble = va_arg(valist, int);
if (vble == 0)
{
	*(str +  position) = '0';
	return (1);
}
position = number_recursion(vble, str, position, 1);
return (position);
}

/**
 * number_recursion - Replicates the c standar library printf() function
 * @vble: number to print
 * @str: char pointer to write
 * @position: position
 * @sign: sign
 *
 * Return: number of  characters printed
 */
int number_recursion(int vble, char *str, int position, int sign)
{
unsigned int num = 0;

if (vble % 10 < 0 && sign == 1)
{
	*(str +  position) = '-';
	position++;
	num = -vble;
}
else
{
num = vble;
}

/*printf("Number= %i, Str= %s, Position= %i\n", num, str, position);*/

if (num < 10)
{
	*(str +  position) = '0' + (num % 10);
	position++;
/*	printf("Number= %i, Str= %s, Position= %i\n", num, str, position);*/
}
else
{
	position = number_recursion(num / 10, str, position, sign);
	*(str +  position) = '0' + (num % 10);
/*	printf("Number= %i, Str= %s, Position= %i\n", num, str, position);*/
	position++;
}
return (position);
}

/**
 * integer_printf - Replicates the c standar library printf() function
 * @valist: The operator
 * @str: The operator
 *
 * Return: number of  characters printed
 */
int integer_printf(va_list valist, char *str)
{
int position = 0;
int vble;

vble = va_arg(valist, int);
if (vble == 0)
{
	*(str +  position) = '0';
	return (1);
}
position = number_recursion(vble, str, position, 1);
return (position);
}

