#include "main.h"

/**
* _abs - computes the absolute value of a num.
* @int: parameter.
* Return: Always 0.
*/

int _abs(int n)
{
	if (n < 0)
	{
		return (n * (-1));
	}
	else
	{
		return (n);
	}
}
