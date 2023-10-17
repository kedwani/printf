#include "main.h"
int _printf(const char *format, ...)
{
	int i, j, c = 0;
	va_list ptr;

	if (format == NULL)
		return (-1);
	va_start(ptr, format);
	for (i = 0; format[i] != '\0'; ++i)
	{
		if (format[i] == '%')
		{
			if (!format[i + 1])
				return (-1);
			else if (format[i + 1] == 'c')
			{
				c = print_char(va_arg(ptr, int), c);
				++i;
			}
			else if (format[i + 1] == 's')
			{
				c = print_str(va_arg(ptr, char*), c);
				++i;
			}
			else if (format[i + 1] == '%')
			{
				c = print_char(format[i], c);
				i++;
			}
			else
				c = print_char(format[i], c);
		}
		else
			c = print_char(format[i], c);
	}
	va_end(ptr);
	return (c);
}
