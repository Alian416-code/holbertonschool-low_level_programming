/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
#include <stdio.h>

int main(void)
{
	char a;
	char A;

	a = 'a';
	A = 'A';
	while (a <= 'z')
	{
		putchar(a);
		a++;
	}
	while (A <= 'Z')
	{
		putchar(A);
		A++;
	}
	putchar('\n');
	return (0);
}
