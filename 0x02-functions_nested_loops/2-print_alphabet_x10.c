#include "main.h"

/**
 * print_alphabet_x10 - prints alphabet 10x in a row
 *
 * Return: void.
 *
*/

void print_alphabet_x10(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		char yb = 'a';

		while (yb <= 'z')
		{
			_putchar(yb);
			yb++;
		}

		_putchar('\n');
	}
}
