#include "main.h"
/**
 * print_string - prints a string
 * @str: string to print
 * Return: number of characters
 */
unsigned int print_string(char *str)
{
	int num_c =0;
	while (*str != '\0')
	{
		num_c++;
		_putchar(*str);
		str++;
	}
	return (num_c);
}
