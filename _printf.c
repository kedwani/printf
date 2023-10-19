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
	char spec[] = "cidb", f = 't', flag = '0',specs[] = "cibds%";

	if (format == NULL)
		return (-1);
	va_start(ptr, format);
	for (i = 0; format[i] != '\0'; ++i)
	{
		if (format[i] == '%')
		{
			if (!format[i + 1])
				return (-1);
			for (j = 0; spec[j] != '\0'; ++j)
			{
				if (format[i + 1] == spec[j])
					c = func_selct(va_arg(ptr, int), format[i], format[i + 1], c, flag);
			}
			if (format[i + 1] == 's')
				c = print_str(va_arg(ptr, char*), c);
			else if (format[i + 1] == '%')
				c = print_char(format[i], c);
			if (flag != '0')
				++i;
			for (j = 0; specs[j] != '\0'; ++j)
				if (format[i + 1] == specs[j])
					f = 't';
			if (f == 'f') 				{
				{
					c = print_char(format[i], c);
					c = print_char(format[i + 1], c);
				}
			}
			++i;
		}
		else
			c = print_char(format[i], c);
	}
	va_end(ptr);
	return (c);
}
