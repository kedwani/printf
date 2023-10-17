#include "main.h"

int print_str(char *str,int c)
{
	int j;
	char* nono = "(null)";

	if (str)
		for (j = 0; str[j] != '\0'; ++j)
		{
			_putchar(str[j]);
			++c;
		}
	else
		for (j = 0; nono[j] != '\0'; ++j)
		{
			_putchar(nono[j]);
			++c;
		}
	return (c);

}
