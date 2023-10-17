#include <limits.h>
#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
    int len;
    int len2;
    len = _printf("%d", 1024);
    len2 = printf("%d", 1024);
    printf("my code = %d and the original code = %d\n",len,len2);
    len = _printf("%d", -1024);
    len2 = printf("%d", -1024);
    printf("my code = %d and the original code = %d\n",len,len2);
    len = _printf("%d", 0);
    len2 = printf("%d", 0);
    printf("my code = %d and the original code = %d\n",len,len2);
    len = _printf("%d", INT_MAX);
    len2 = printf("%d", INT_MAX);
    printf("my code = %d and the original code = %d\n",len,len2);
    len = _printf("%d", INT_MIN);
    len2 = printf("%d", INT_MIN);
    printf("my code = %d and the original code = %d\n",len,len2);
    len = _printf("There is %d bytes in %d KB\n", 1024, 1);
    len2 = printf("There is %d bytes in %d KB\n", 1024, 1);
    printf("my code = %d and the original code = %d\n",len,len2);
    len = _printf("%d - %d = %d\n", 1024, 2048, -1024);
    len2 = printf("%d - %d = %d\n", 1024, 2048, -1024);
    printf("my code = %d and the original code = %d\n",len,len2);
    len = _printf("%d + %d = %d\n", INT_MIN, INT_MAX, (INT_MIN + INT_MAX));
    len2 = printf("%d + %d = %d\n", INT_MIN, INT_MAX, (INT_MIN + INT_MAX));
    printf("my code = %d and the original code = %d\n",len,len2);
    len = _printf("%i", 1024);
    len2 = printf("%i", 1024);
    printf("my code = %d and the original code = %d\n",len,len2);
    len = _printf("%i", -1024);
    len2 = printf("%i", -1024);
    printf("my code = %d and the original code = %d\n",len,len2);
    len = _printf("%i", 0);
    len2 = printf("%i", 0);
    printf("my code = %d and the original code = %d\n",len,len2);
    len = _printf("%i", INT_MAX);
    len2 = printf("%i", INT_MAX);
    printf("my code = %d and the original code = %d\n",len,len2);
    len = _printf("%i", INT_MIN);
    len2 = printf("%i", INT_MIN);
    printf("my code = %d and the original code = %d\n",len,len2);
    len = _printf("There is %i bytes in %i KB\n", 1024, 1);
    len2 = printf("There is %i bytes in %i KB\n", 1024, 1);
    printf("my code = %d and the original code = %d\n",len,len2);
    len = _printf("%i - %i = %i\n", 1024, 2048, -1024);
    len2 = printf("%i - %i = %i\n", 1024, 2048, -1024);
    printf("my code = %d and the original code = %d\n",len,len2);
    len = _printf("%i + %i = %i\n", INT_MIN, INT_MAX, (INT_MIN + INT_MAX));
    len2 = printf("%i + %i = %i\n", INT_MIN, INT_MAX, (INT_MIN + INT_MAX));
    printf("my code = %d and the original code = %d\n",len,len2);
    len = _printf("%d == %i\n", 1024, 1024);
    len2 = printf("%d == %i\n", 1024, 1024);
    printf("my code = %d and the original code = %d\n",len,len2);
    len = _printf("iddi%diddiiddi\n", 1024);
    len2 = printf("iddi%diddiiddi\n", 1024);
    printf("my code = %d and the original code = %d\n",len,len2);
    len = _printf("%d", 10000);
    len2 = printf("%d", 10000);
    printf("my code = %d and the original code = %d\n",len,len2);
    len = _printf("%i", 10000);
    len2 = printf("%i", 10000);
    printf("my code = %d and the original code = %d\n",len,len2);
    return (0);
}
