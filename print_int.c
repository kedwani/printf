#include "main.h"
/**
 *print_int -:a function to print int.
 *
 *@arg : is the int ot be print
 *@count : is the count of printed chars
 *
 *Return: (counted chars).
 */



int print_int(long int arg, int count)
{
	if (arg < 0)
	{
		_putchar('-');
		++count;
		arg *= -1;
	}
	if (arg > 9)
	{
		count =  (print_int(arg / 10, count));
	}
	_putchar(arg % 10 + '0');
	return (count + 1);

