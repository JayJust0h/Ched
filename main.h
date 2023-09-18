#ifndef MAIN_H
#define MAIN_H

#include <unistd.h>
#include <stdarg.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

void int_to_str(int num, char *num_str);
int _printf(const char *format, ...);
int putcher(char c);
int puuts(char *c);

int printf(const char *format, ...);



#endif
