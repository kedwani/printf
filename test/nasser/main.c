#include "main.h"

int main(void)
{
	int i ;

	i = _printf("%b", 1024);
	printf("\n%d\n",i);
	i = _printf("%b", -1024);
	printf("\n%d\n",i);
	i= _printf("%b", 0);
	printf("\n%d\n",i);
	i = _printf("%b", UINT_MAX);
	printf("\n%d\n",i);
	i =_printf("There is %b bytes in %b KB\n", 1024, 1);
	printf("\n%d\n",i);
	i = _printf("%b - %b = %b\n", 2048, 1024, 1024);
	printf("\n%d\n",i);


	return (0);
}
