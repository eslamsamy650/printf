#ifndef _PRINTF_MAIN_H
#define _PRINTF_MAIN_H

#include <stdio.h> // Standard Library
#include <stdlib.h> // Standard Library
#include <limits.h> // the limits for the resources we are going to use
#include <stdarg.h> // for accessing the arguments
#include <unistd.h> // to let the write() function work

/* printf.c */
int _printf(const char *format, ...);

#endif
