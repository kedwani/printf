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
    len = _printf("Let'see if the cast is correctly done: %c. Did it work?\n", 48);
    len2 = printf("Let'see if the cast is correctly done: %c. Did it work?\n", 48);
    printf("my code = %d and the original code = %d\n",len,len2);
    len = _printf("Let's print a simple sentence.\n");
    len2 = printf("Let's print a simple sentence.\n");
    printf("my code = %d and the original code = %d\n",len,len2);
    len = _printf("%c", 'S');
    len2 = printf("%c", 'S');
    printf("my code = %d and the original code = %d\n",len,len2);
    len = _printf("A char inside a sentence: %c. Did it work?\n", 'F');
    len2 = printf("A char inside a sentence: %c. Did it work?\n", 'F');
    printf("my code = %d and the original code = %d\n",len,len2);
    len = _printf("%s", "This sentence is retrieved from va_args!\n");
    len2 = printf("%s", "This sentence is retrieved from va_args!\n");
    printf("my code = %d and the original code = %d\n",len,len2);
    len = _printf("Complete the sentence: You %s nothing, Jon Snow.\n", "know");
    len2 = printf("Complete the sentence: You %s nothing, Jon Snow.\n", "know");
    printf("my code = %d and the original code = %d\n",len,len2);
    len = _printf("Complete the sentence: You %s nothing, Jon Snow.\n", (char *)0);
    len2 = printf("Complete the sentence: You %s nothing, Jon Snow.\n", (char *)0);
    printf("my code = %d and the original code = %d\n",len,len2);
    len = _printf("%c%cth %s%s a%cg%s: Y%sou %s no%ching%s Snow.%c", 'W', 'i', "some ", "more", 'r', "s", "", "know", 't', ", Jon", '\n');
    len2 = printf("%c%cth %s%s a%cg%s: Y%sou %s no%ching%s Snow.%c", 'W', 'i', "some ", "more", 'r', "s", "", "know", 't', ", Jon", '\n');
    printf("my code = %d and the original code = %d\n",len,len2);
    len = _printf("%%");
    len2 = printf("%%");
    printf("my code = %d and the original code = %d\n",len,len2);
    len = _printf("Should print a single percent sign: %%\n");
    len2 = printf("Should print a single percent sign: %%\n");
    printf("my code = %d and the original code = %d\n",len,len2);
    len = _printf("%s%c%c%c%s%%%s%c", "Loading ", '.', '.', '.', " 99", " Please wait", '\n');
    len2 = printf("%s%c%c%c%s%%%s%c", "Loading ", '.', '.', '.', " 99", " Please wait", '\n');
    printf("my code = %d and the original code = %d\n",len,len2);
    len = _printf("%%");
    len2 = printf("%%");
    printf("my code = %d and the original code = %d\n",len,len2);
    len = _printf("Should print a single percent sign: %%\n");
    len2 = printf("Should print a single percent sign: %%\n");
    printf("my code = %d and the original code = %d\n",len,len2);
    len = _printf("%s%c%c%c%s%%%s%c", "Loading ", '.', '.', '.', " 99", " Please wait", '\n');
    len2 = printf("%s%c%c%c%s%%%s%c", "Loading ", '.', '.', '.', " 99", " Please wait", '\n');
    printf("my code = %d and the original code = %d\n",len,len2);
    len = _printf("css%ccs%scscscs", 'T', "Test");
    len2 = printf("css%ccs%scscscs", 'T', "Test");
    printf("my code = %d and the original code = %d\n",len,len2);
    len = _printf(NULL);
    len2 = printf(NULL);
    printf("my code = %d and the original code = %d\n",len,len2);
    len = _printf("%c", '\0');
    len2 = printf("%c", '\0');
    printf("my code = %d and the original code = %d\n",len,len2);
    len = _printf("%");
    len2 = printf("%");
    printf("my code = %d and the original code = %d\n",len,len2);
    len = _printf("%!\n");
    len2 = printf("%!\n");
    printf("my code = %d and the original code = %d\n",len,len2);
    len = _printf("%K\n");
    len2 = printf("%K\n");
    printf("my code = %d and the original code = %d\n",len,len2);
    return (0);
}
