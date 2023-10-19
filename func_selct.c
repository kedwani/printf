#include "main.h"
/**
 *func_selct - is a function to select which func to use .
 *@arg : is arg.
 *@format : is formatt.
 *@format2 : is formatt.
 *@c : is count.
 *@f : is flag.
 *
 *Return: always(count).
 **/

int func_selct(char arg, char format, char format2, int c, char f)
{


	if (format2 == 'd' || format2 == 'i')
		c = print_int(arg, c, f);
	else if (format2 == 'c')
		c = print_char(arg, c);
	else if (format2 == 'b')
		c = dec_to_bin(arg, c);
	else if (format2 == '%')
		c = print_char(format, c);
	return (c);
}
