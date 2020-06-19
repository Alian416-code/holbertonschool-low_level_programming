#include "holberton.h"
/**
 * print_diagonal - print a diagonal line with \
 *
 * @n: the times that the lines is printed
 * Return: void
 */
void print_diagonal(int n)
{
	int m, l;

	if (n > 0)
	{
		for (m = 0; m < n; m++)
		{
			for (l = 0; l < m; l++)
				_putchar(' ');
				_putchar('\\');
				_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
