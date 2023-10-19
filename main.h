#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <unistd.h>
#include "main.h"
#include <stdarg.h>
#include <limits.h>
#include <stdlib.h>

int func_selct(int, char format2, int c, char flag);
int _putchar(char);
int _printf(const char *format, ...);
int print_char(char arg, int count);
int print_str(char *str, int c);
int print_int(long int arg, int count, char flag);
int dec_to_bin(unsigned int u, int c);
int dec_to_hex(int decimalNumber, int c);


#endif
