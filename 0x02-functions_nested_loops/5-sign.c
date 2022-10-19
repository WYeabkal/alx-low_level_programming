#include "main.h"

/**
* print_sign - prints the sign of value.
*
* @n: - parameter the function takes
*
* Return: 1 and prints + if n is greater than zero
*         0 and prints 0 if n is zero
*         -1 and prints - if n is less than zero.
*/

int print_sign(int n)
{
	int value;

	if (i < 0)
	{
		value = -1;
		_putchar ('-');
	}
	else if (i == 0)
	{
		value = 0;
		_putchar (0 + '0');
	}
	else
	{
		value = 1;
		_putchar ('+');
	}

	return (value);
}
