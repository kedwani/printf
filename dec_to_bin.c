#include "main.h"

/**
 *dec_to_bin- is a converter function to binary.
 *
 *@u :is the dicemal muber.
 *@c :is the counter for printed chars.
 *
 *Return: always (counter)
 */

int dec_to_bin(unsigned int u, int c)
{
	int i, j;
	char b[64];

	if (u == 0)
	{
		_putchar('0');
		return (c + 2);
	}

	for (i = 0; u != 0; ++i)
	{
		b[i] = u % 2;
		u /= 2;
	}
	for (j = i - 1; j >= 0; --j)
	{
		_putchar(b[j] + '0');
			c++;
	}
	return (c);
}
