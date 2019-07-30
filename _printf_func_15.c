#include <stdio.h>
#include "holberton.h"
#include <stdarg.h>

/**
 * rot13_null -  prints null string
 * @vble: null string
 * @str: string
 * @position: Position
 * Return: position
 */
int rot13_null(char *vble, char *str, int position)
{
while (*(vble + position) != '\0')
{
	*(str + position) = *(vble + position);
	position++;
}
return (position);
}



/**
 * rot13 -  encodes a string using rot13
 * @str: string
 * @valist: The operator
 * Return: position
 */
int rot13(va_list valist, char *str)
{
/* local variable declaration */
int position = 0, j, a = 0;
char *vble, *null;
null = "(null)";
vble = va_arg(valist, char *);

if (vble == NULL)
	return (rot13_null(null, str, position));

char c[52][2] = {{'A', 'N'}, {'B', 'O'}, {'C', 'P'}, {'D', 'Q'}, {'E', 'R'},
		{'F', 'S'}, {'G', 'T'}, {'H', 'U'}, {'I', 'V'}, {'J', 'W'},
		{'K', 'X'}, {'L', 'Y'}, {'M', 'Z'}, {'N', 'A'}, {'O', 'B'},
		{'P', 'C'}, {'Q', 'D'}, {'R', 'E'}, {'S', 'F'}, {'T', 'G'},
		{'U', 'H'}, {'V', 'I'}, {'W', 'J'}, {'X', 'K'}, {'Y', 'L'},
		{'Z', 'M'}, {'a', 'n'}, {'b', 'o'}, {'c', 'p'}, {'d', 'q'},
		{'e', 'r'}, {'f', 's'},
		{'g', 't'}, {'h', 'u'}, {'i', 'v'}, {'j', 'w'}, {'k', 'x'},
		{'l', 'y'}, {'m', 'z'}, {'n', 'a'}, {'o', 'b'}, {'p', 'c'},
		{'q', 'd'}, {'r', 'e'}, {'s', 'f'}, {'t', 'g'}, {'u', 'h'},
		{'v', 'i'}, {'w', 'j'}, {'x', 'k'}, {'y', 'l'}, {'z', 'm'}};

while (*(vble + position) != '\0')
{
	for (j = 0 ; j < 52 ; j++)
	{
		if (*(vble + position) == c[j][0])
		{
		*(str + position) = c[j][1];
		a = 1;
		break;
		}
	}
	if (a == 0)
		*(str + position) = *(vble + position);
	a = 0;
	position++;
}
	return (position);
}
