#include "main.h"
/**
 *func_selct_str - is a function to select which func to use .
 *@arg : is arg.
 *@format2 : is formatt.
 *@c : is count.
 *@f : is flag.
 *
 *Return: always(count).
 **/

int func_selct_str(char *arg, char format2, int c, char f)
{
	(void)f;
	if (format2 == 's')
		c = print_str(arg, c);
	if (format2 == 'r')
		c = print_rev_str(arg, c);
	if (format2 == 'S')
		c = print_Str(arg, c);
	return (c);
}
