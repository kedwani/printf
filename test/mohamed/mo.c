#include <limits.h>
#include <stdio.h>
#include "main.h"

int main(void)
{;
	int len1=printf("&\0h");
	printf("\n______________\n");
	int len2=_printf("&\0h");
	printf("len1 = %d\n len2 = %d",len1,len2);
}
