#include "main.h"

/**
 * _islower - checks whether char is lower or uppercase
 * @c - parameter of function.
 * Return: void.
*/

int _islower(int c)
{
	int ch = c;

	if (ch >= 97 && ch <= 122)
	{
		_putchar(1 + '0');
	}
	else if (ch >= 65 && ch <= 90)
	{
		_putchar(0 + '0');
	}
	else
	{
		_putchar('N');
		_putchar('O');
		_putchar('T');
		_putchar('_');
		_putchar('C');
		_putchar('H');
		_putchar('A');
		_putchar('R');
	}
}
