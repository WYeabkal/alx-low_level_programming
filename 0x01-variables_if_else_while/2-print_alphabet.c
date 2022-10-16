#include <stdio.h>

/**
 * main - prints alphabet in small case
 *
 * Return: always 0.
*/

int main(void)
{
	char i = 'a';

	while (i <= 'z')
	{
		putchar(i);
		i++;
	}

	putchar('\n');

	return (0);
}
