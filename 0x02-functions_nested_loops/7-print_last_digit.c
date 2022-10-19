#include "main.h"

/**
* print_last_digit - outputs last digits of number.
* @int: parameter.
* @n: parameter.
*
* Return: always 0.
*/

int print_last_digit(int n)
{
	int x;

	if (n < 0)
	{
		x = -1 * (n % 10);
	}
	else
	{
		x = n % 10;
	}

	return (x);
}
