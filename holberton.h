#ifndef _HOLBERTON_H_
#define _HOLBERTON_H_

/*
 * Structs, enums and unions definitions
 * Typedefs
 * Function putchar prototype
 */
int _printf(const char *format, ...);

char *str_printf(const char *format, va_list valist, char *str);
int size_printf(const char *const format, va_list valist);

int size_char(va_list valist, int size);
int size_string(va_list valist, int size);
int size_decimal(va_list valist, int size);
int size_integer(va_list valist, int size);
int size_percentage(int size);

int char_printf(va_list valist, char *str);
int string_printf(va_list valist, char *str);
int decimal_printf(va_list valist, char *str);
int integer_printf(va_list valist, char *str);
int percentage_printf(char *str);

/**
 * struct op_size - Struct op
 *
 * @ops: options c: char, i:integer, f:float, s: char
 * @f: function
 *
 */
typedef struct op_size
{
	const char *const ops;
	int (*f)(va_list valist, int size);
} op_s_t;



/**
 * struct op_write - Struct op
 *
 * @opw: options c: char, i:integer, f:float, s: char
 * @f: function
 *
 */
typedef struct op_write
{
	const char *const opw;
	int (*f)(va_list valist, char *str);
} op_w_t;

#endif

