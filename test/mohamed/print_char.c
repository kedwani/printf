#include "main.h"

/**
 *print_char -: is a function to print simple char.
 *
 *@arg : is the char tp be printed
 *@count : the count of prevois printed chars to be increment.
 *
 *Return: always (counter of printed chars).
 */

int print_char(char arg, int count)
{
	_putchar(arg);
	return (count + 1);
}
