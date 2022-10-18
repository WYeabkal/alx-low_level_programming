#include "main.h"

/**
 * _islower - checks whether char is lower or uppercase
 *
 * @c: parameter of unction to store value.
 *
 * Return: void.
*/

int _islower(int c)
{
	int ch = c;

	if (ch >= 97 && ch <= 122)
	{
		return (1);
	}

	return (0);

}
