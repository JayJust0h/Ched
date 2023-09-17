#ifndef MAIN_H
#define MAIN_H

#include <unistd.h>
#include <stdlib.h>
#include <stdarg.h>

/**
 * struct flags - Contains flags to consider
 * when flag specifier is passed.
 * @plus: Flag rep '+' character
 * @space: Flag rep ' ' character
 * @hash: Flag rep '#' character.
 */
typedef struct flags
{
	int plus;
	int space;
	int hash;
} flags_t;

/**
 * struct printHandler - Chooses the right function.
 * @c: Format specifier.
 * @f: Pointer for the correct printing function.
 */

int _printf(const char *format, ...);
int putcher(char c);
int putts(char *c);
#endif
