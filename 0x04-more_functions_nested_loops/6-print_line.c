#include "holberton.h"

/**
 * print_line - print the line n times
 * @n: the lines to print
 * Return: do not return
 */
void print_line(int n)
{
	int m;

	if (n > 0)
	{
		for (m = 0; m < n; m++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
}
