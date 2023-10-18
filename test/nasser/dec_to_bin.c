#include "main.h"
int converter(unsigned int u,int c);
unsigned int power(int num, int power);

int main(void)
{
	int i;
	_printf("please enter your decimal number to be converted : \n");
	scanf("%u",&i);
	_printf("you have entered %d and it is equivlant binary number is %u \n",i,i);
	return 0;
}

int converter(unsigned int u,int c)
{
	int i;
	char b[] = "00000000";
	for (i = 7; i >= 0; --i)
		if (u >= power(2,i))
		{
			b[7 - i] = '1';
			u -= power(2,i);
		}
	for (i = 0; b[i] != '\0'; ++i)
	{
		_putchar(b[i]);
		c++;
	}
	return (c);
}
unsigned int power(int num, int pow)
{
	if (pow == 0)
		return (1);
	return(num * power(num ,pow- 1) );
}
