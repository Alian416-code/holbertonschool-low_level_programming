#include "holberton.h"
/**
 * _isdigit - check if c is a digit
 * @c: it is a digit to be checked
 * Return: 1 if c is a digit else 0
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	return (0);
}
