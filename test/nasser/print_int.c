#include "main.h"
int print_int(long int arg, int count)
{
	int c = 0;
	if (arg / 10 != 0)
	{
		if (arg < 0)
		{
			_putchar('-');
			++count;
			arg *= -1;
		}
		count =  (print_int(arg / 10, count));
	}
	_putchar(arg % 10 + '0');
	return (count + 1);
}
