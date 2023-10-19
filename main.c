#include "main.h"
int main()
{
int i = _printf("Could you print some non-prntable characters?\n%S\nThanks!\n", "Sure:\x1F\x7F\n");
printf("\n%d\n",i);


	return (0);
}
