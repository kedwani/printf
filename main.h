#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <unistd.h>
#include "main.h"
#include <stdarg.h>

int _putchar(char);
int _printf(const char *format, ...);
int print_char(char arg, int count);
int print_str(char *str, int c);
int print_int(long int arg, int count);
int dec_to_bin(unsigned int u, int c);
unsigned int get_power(int num, int power);


#endif
