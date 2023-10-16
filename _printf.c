#include "main.h"
int _printf(const char *format, ...)
{
	int i, j, c = 0;
	va_list ptr;
	char *str, *nono = "(null)", a;

	if (format == NULL)
		return (0);
	va_start(ptr, format);
	for (i = 0; format[i] != '\0'; ++i)
	{
		if (format[i] == '%')
		{
			if (format[i + 1] == 'c')
			{
				_putchar(va_arg(ptr, int));
				++c;
				++i;
			}
			else if (format[i + 1] == 's')
			{
				str = (va_arg(ptr, char*));
				if (str)
					for (j = 0; str[j] != '\0'; ++j)
					{
						_putchar(str[j]);
						++c;
					}
				else
					for (j = 0; nono[i] != '\0'; ++j)
					{
						_putchar(nono[j]);
						++c;
					}
				++i;
			}
		}
		_putchar(format[i]);
		c++;
	}
	va_end(ptr);
	return (c);
}
