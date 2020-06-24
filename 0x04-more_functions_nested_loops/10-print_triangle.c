#include "holberton.h"
/**
 * print_triangle - print a triangle with # and spaces
 * @size: the size of the triangle
 * Return: No return values
 */
void print_triangle(int size)
{
	int c, s, l;

	if (size > 0)
	{
		for (l = 1; l < size; l++)
		{
			for (s = 0; s < (size - l); s++)
			{
				_putchar(' ');
			}
			for (c = 0; c < l; c++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
