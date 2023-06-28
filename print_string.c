#include "main.h"
/**
 * print_string - prints a string
 * @str: string to print
 * Return: number of characters
 */
int print_string(char *str)
{
	int num_c = 0;
	char display_special[4] = {'\\', '\'', '\?', '\"'};

	while (*str != '\0')
	{
		if (*str == '%' && str[1] == '%')
		{
			num_c++;
			_putchar('%');
			str += 2;
		}
		else
		{
			if (*str == '\\' && in_array(display_special, str[1], 4) == 1)
			{
				num_c++;
				_putchar(str[1]);
				str += 2;
			}
			else
			{
				num_c++;
				_putchar(*str);
				str++;
			}
		}
	}
	return (num_c);
}
