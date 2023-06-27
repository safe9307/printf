#include <unistd.h>
#include "main.h"

/**
 * _putchar - writes a character to stdout
 * @character: the character to print
 * Return: on success1, on failure -1
 */

int _putchar(char character)
{
	return (write (1, &character, 1));
}
