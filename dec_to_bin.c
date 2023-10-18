#include "main.h"
int dec_to_bin(unsigned int u,int c);
unsigned int get_power(int num, int power);

int dec_to_bin(unsigned int u,int c)
{
	int i;
	char b[] = "00000000";
	for (i = 7; i >= 0; --i)
		if (u >= get_power(2,i))
		{
			b[7 - i] = '1';
			u -= get_power(2,i);
		}
	for (i = 0; b[i] != '\0'; ++i)
	{
		_putchar(b[i]);
		c++;
	}
	return (c);
}
unsigned int get_power(int num, int power)
{
	if (power == 0)
		return (1);
	return(num * get_power(num ,power- 1) );
}
