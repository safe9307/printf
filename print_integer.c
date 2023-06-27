#include "main.h"

/**
 * print_integer - prints an integer using putchar
 * @n: integer to print
 * Return: number of characters
 */

unsigned int print_integer(unsigned int n)
{
	unsigned int num_c = 0;

	if (n / 10)
		print_integer(n / 10);
	_putchar (48 + n % 10);
	num_c++;
	return (num_c);
}

