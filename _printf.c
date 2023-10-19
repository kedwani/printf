#include "main.h"
/**
 * _printf - : is a modefied function of printf that .
 *
 *@format: is the string format
 *
 *Return: (number of char printed)
 */
int _printf(const char *format, ...)
{
	int i, j, c = 0;
	va_list ptr;
	char flag = '0', f = 'f';
	char spec[] = "cidb";

	if (format == NULL)
		return (-1);
	va_start(ptr, format);
	for (i = 0; format[i] != '\0'; ++i)
	{
		if (format[i] == '%')
		{
			if (!format[i + 1])
				return (-1);
			else if (format[i + 1] == 's')
			{
				c = print_str(va_arg(ptr, char*), c);
				f = 't';
			}
			for (j = 0; spec[j] != '\0'; ++j)
				if (format[i + 1] == spec[j])
				{
					c = func_selct(va_arg(ptr, int), format[i], format[i + 1], c, flag);
					f = 't';
				}
			if (format[i + 1] == '%')
				c = print_char(format[i], c);
			if (f == 'f')
			{
				c = print_char(format[i], c);
				c = print_char(format[i + 1], c);
			}
			if (flag != '0')
				++i;
			++i;
		}
		else
			c = print_char(format[i], c);
	}
	va_end(ptr);
	return (c);
}
