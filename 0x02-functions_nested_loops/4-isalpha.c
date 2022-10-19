#include "main.h"

/**
* _isalpha - checks if the value entered is a char
* @c: is argument taken by the function
* Return: 1 if c == letter, 0 if c != letter
*/

int _isalpha(int c)
{
	int ch = c;

	if ((ch <= 122 && ch >= 97) || (ch <= 90 && ch >= 65))
	{
		return (1);
	}
	else
	{
		return (0);
	}

	return (0);
}
