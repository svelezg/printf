#include <stdio.h>
#include <stdarg.h>

/**
 * size_number  - Number counter
 * @n: Number
 * Return: counter
*/
int size_number(int n)
{
int cnt = 0;

if (n < 0)
{
	cnt++;
	n *= -1;
}
while (n != 0)
{
	n = n / 10;
	cnt++;
}

return (cnt);
}
/**
 * convert  - Capitalizes String
 * @num: string to convert
 * @base: base to convert
 * @upper: lower && upper conversion
 *
 * Description: String to upper
 * Upper
 * Return: char
*/
char *convert(unsigned int num, int base, int upper)
{
static const char RepresentationU[] = "0123456789ABCDEF";
static const char RepresentationL[] = "0123456789abcdef";
static char buffer[50];
char *ptr;

ptr = &buffer[49];
*ptr = '\0';

do {
	if (upper)
		*--ptr = RepresentationU[num % base];
	else
		*--ptr = RepresentationL[num % base];
		num /= base;
} while (num != 0);

return (ptr);
}
/**
 * size_convert  - Capitalizes String
 * @num: string to convert
 * @base: base to convert
 *
 * Description: String to upper
 * Upper
 * Return: char
*/
int size_convert(unsigned int num, int base)
{
	static const char Representation[] = "0123456789ABCDEF";
	static char buffer[50];
	char *ptr;
	int size = 0;

	ptr = &buffer[49];
	*ptr = '\0';

	do {
		*--ptr = Representation[num % base];
		num /= base;
		size++;
	} while (num != 0);

	return (size);
}
