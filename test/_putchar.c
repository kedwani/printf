#include "main.h"
/**
 *
*_putchar: print characters.
*@f;characters that print.
*return : intger.
*/

int _putchar(char f)
{
	return	(write(1 ,&f,1));
}
