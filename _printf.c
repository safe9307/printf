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
				while (*str != '\0')
				{
					num_c++;
					_putchar(*str);
					str++;
				}
			}
			if (format[i + 1] == '%')
			{
				i++;
				num_c++;
				_putchar('%');
			}
		}
		_putchar(format[i]);
		i++;
		num_c++;
	}
	return (num_c);
}
