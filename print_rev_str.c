#include "main.h"
/**
 *print_rev_str -: is a function to print simple string.
 *
 *@str : is the string tp be printed
 *@c : the count of prevois printed chars to be increment.
 *
 *Return: always (counter of printed chars)
 */


int print_rev_str(char *str, int c)
{
	int j;

	j = _strlen(str);
	for (; str[j] >= 0; --j)
	{
		_putchar(str[j]);
		++c;
	}
	return (c);

}
