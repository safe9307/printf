#include "main.h"
#include <stdarg.h>
#include <stddef.h>
/**
 * _printf - function that prints and returns number of characters printed
 * @format: character string
 * Return: number of characters printed
 */
int _printf(const char *format, ...)
{
	unsigned int i = 0, num_c = 0; 
	int num_int;
	va_list ptr_arg;
	char *str;

	va_start(ptr_arg, format);
	while (format[i] != '\0')
	{
		if (format[i] == '%')
		{
			if (format[i + 1] == 'c')
			{
				i += 2;
				num_c++;
				_putchar(va_arg(ptr_arg, int));
			}
			if (format[i + 1] == 's')
			{
				i += 2;
				str = va_arg(ptr_arg, char *);
				num_c = print_string(str);
			}
			if (format[i + 1] == '%')
			{
				i++;
				num_c++;
				_putchar('%');
			}
			if (format[i + 1] == 'd' || format[i + 1] == 'i')
			{
				i += 2;
				num_int = va_arg(ptr_arg, int);
				num_c = print_integer(num_int);
			}
		}
		_putchar(format[i]);
		i++;
		num_c++;
	}
	va_end(ptr_arg);
	return (num_c);
}
