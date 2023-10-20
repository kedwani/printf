#include "main.h"
/**
 *dec_to_hex- is a converter function to hexadecimal
 *
 *@decimalNumber :is the dicemal muber.
 *@c :is the counter for printed chars.
 *Return: always (counter).
 */

int dec_to_hex(int decimalNumber, int c)
{
	char hexadecimal[16] = "0123456789ABCDEF";
	char hexResult[2000];
	int index = 0;
	int remainder, i;

	while (decimalNumber > 0)
	{
		remainder = decimalNumber % 16;
		hexResult[index] = hexadecimal[remainder];
		decimalNumber /= 16;
		index++;
	}
	if (index == 1)
	{
		_putchar('0');
		c++;
	}
	for (i = (index - 1); i >= 0; i--)
	{
		_putchar(hexResult[i]);
		c++;
	}
	return (c);
}