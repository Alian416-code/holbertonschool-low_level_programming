#include "holberton.h"
/**
 * print_square - print a square with #
 * @size: It is the size of the square
 * Return: No return
 */
void print_square(int size)
{
	int h, w;

	if (size > 0)
	{
		for (h = 0; h < size; h++)
		{
			for (w = 0; w < size; w++)
			_putchar('#');
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
