#include <stdio.h>
#include <stdlib.h>

/**
 * main - returns alphabets
 *
 * Returns: Always 0 (Success)
 */
int main(void)
{
	int ch = 'a';

	while (ch <= 'z')
	{
		_putchar(ch);
		ch++;
	}
	_putchar('\n');
	return (0);
}
