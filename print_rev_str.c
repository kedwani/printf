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
	char *nono = "(null)";
	int i;

	if (str)
	{
		i = _strlen(str);
		for (j = i; str[j] >= 0; ++j)
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
