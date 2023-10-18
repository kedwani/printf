#include "main.h"
/**
 *func_selct - is a function to select which func to use .
 *@arg : is arg.
 *@format : is formatt.
 *@i :is index.
 *@c : is count.
 *@flag : is flag.
 *
 *Return: always(count).
 **/

int func_selct(int arg, char *format, int  i, int c, char flag)
{

else if (format[i + 1] == 'd' || format[i + 1] == 'i')
	c = print_int(arg, c);
else if (format[i + 1] == '+' && format[i + 2] == 'd')
{
	flag = '+';
	c = print_int(arg, c, flag);
}
else if (format[i + 1] == '+' && format[i + 2] == 'i')
{
	flag = '+';
	c = print_int(arg, c, flag);
	++i;
}

else if (format[i + 1] == 'c')
	c = print_char(arg, c);
else if (format[i + 1] == 'b')
	c = dec_to_bin(arg, c);
else if (format[i + 1] == '%')
	c = print_char(format[i], c);
else
{
	c = print_char(format[i], c);
	c = print_char(format[i + 1], c);
	}
}
