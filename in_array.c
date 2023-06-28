#include "main.h"

/**
 * in_array - checks if an item exists in an array
 * @array: the array to chack in
 * @x: the x to look for in the array
 * @n: size of the array
 * Return: true or false
 */

int in_array(char array[], int n, char x)
{
	int exists = 0;
	int i;

	for (i = 0 ; i < n; i++)
	{
		if (array[i] == x)
		{
			exists = 1;
			break;
		}
	}
	return (exists);
}
