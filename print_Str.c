#include "main.h"
/**
 *print_Str -: is a function to print simple string.
 *
 *@str : is the string tp be printed
 *@c : the count of prevois printed chars to be increment.
 *
 *Return: always (counter of printed chars)
 */

int print_Str(char *str, int c)
{
	int j;
	char *nono = "(null)";




	if (str)
		for (j = 0; str[j] != '\0'; ++j)
		{
			if ((str[j] > 0 && str[j] < 32) || str[j] >= 127)
			{
				_putchar('\\');
				_putchar('x');
				c += 2;
				c = dec_to_hex(str[j], c);
			}
			else
			{
				_putchar(str[j]);
				++c;
			}
		}
	else
		for (j = 0; nono[j] != '\0'; ++j)
		{
			_putchar(nono[j]);
			++c;
		}
	return (c);

}
