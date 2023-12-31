#include "main.h"
/**
 *func_selct - is a function to select which func to use .
 *@arg : is arg.
 *@format2 : is formatt.
 *@c : is count.
 *
 *Return: always(count).
 **/

int func_selct(int arg, char format2, int c)
{


	if (format2 == 'd' || format2 == 'i')
		c = print_int(arg, c);
	else if (format2 == 'c')
		c = print_char(arg, c);
	else if (format2 == 'x')
		c = dec_to_hex(arg, c);
	else if (format2 == 'b')
		c = dec_to_bin(arg, c);
	return (c);
}
