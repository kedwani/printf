#include "main.h"

/**
 *_putchar -: is a modefied function to print characters.
 * @f :is  characters that print.
 * Return: always return (counter).
 */

int _putchar(char f)
{
	return (write(1, &f, 1));
}
