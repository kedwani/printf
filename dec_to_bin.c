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
	int i, flag = 0;
	char b[] = "00000000000000000000000000000000";

	for (i = 31; i >= 0; --i)
		if (u >= get_power(2, i))
		{
			b[31 - i] = '1';
			u -= get_power(2, i);
		}
	for (i = 0; b[i] != '\0'; ++i)
	{
		if (b[i] == 1)
			flag = 1;
		if (flag = 1)
		{
			_putchar(b[i]);
			c++;
		}
	}
	return (c);
}

/**
 *get_power- is a function to get power.
 *
 *@num : is the number to get itis power.
 *@power : is the power.
 *
 *Return: always (power)
 */
unsigned int get_power(int num, int power)
{
	if (power == 0)
		return (1);
	return (num * get_power(num, power - 1));
}
