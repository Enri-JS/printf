#ifndef HEADER_H
#define HEADER_H

#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include <string.h>
#include <unistd.h>
#include <stdarg.h>
#include <limits.h>

/**
 * struct op_match - provides the input the correct function
 * @match: pattern
 * @func: print type
 */

typedef struct op_match
{
char *match;
int (*func)(va_list);
} op_t;

int _printf(const char *format, ...);
int _putchar(char c);
int (*op_select(const char *next, int var))(va_list);
int op_number(va_list d);
int op_char(va_list c);
int op_string(va_list s);
int op_octal(va_list list);
int op_pointer(va_list list);
int op_hexL(va_list list);
int op_hexU(va_list list);
int _strcmp(char *, char *);
int _strlen(const char *str);
int print(char *str);
char *itoa(long int num, int base);
int op_unsigned(va_list i);
int op_unsigned(va_list u);
/* int op_reverse(va_list r); */

#endif /* HEADER_H */
