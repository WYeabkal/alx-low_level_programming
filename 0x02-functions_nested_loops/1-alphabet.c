#include <stdio.h>
#include "main.h"

/**
 * print_alphabet - prints lowercase alphabet a-z
 *
 * Return: Void.
*/

void print_alphabet(void)
{

	char sc = 'a';

	while (sc <= 'z')
	{
		_putchar(sc);
		sc++;
	}

	_putchar('\n');
}