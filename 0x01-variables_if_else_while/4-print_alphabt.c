#include <stdio.h>

/**
 * main - main code block
 * Description - prints all alphabets except 'q' and 'e'
 * Return: always 0.
*/

int main(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		if (c != 'q' && c != 'e')
			putchar(c);
		c++;
	}

	putchar('\n');

	return (0);
}
