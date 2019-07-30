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
