#include "main.h"
#include <unistd.h>

/**
 * putcher - Prints the characters.
 * @c: Character input.
 * Return: 1 On (success)
 * Tinnie and Jay.
 */

int putcher(char c)

{
	return (write(1, &c, 1));
}
