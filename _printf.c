#include "main.h"
int _printf(const char *format, ...)
{
	int i, j, c = 0;
	va_list ptr;
	char *str, char *nono "(null)";

	if (format == NULL)
		return (0);
	va_start(ptr, format);
	for (i = 0; format[i] != '\0'; ++i)
	{
		if (format[i] == '%')
		{
			if (format[i + 1] == 'c')
			{
				_purchar(va_arg(ptr, char));
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
		else
		{
			_putchar(va_arg(ptr, char));
			c++;
		}
	}
	va_end(ptr);
	return (c);
}
