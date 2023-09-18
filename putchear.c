#include "main.h"
#include <unistd.h>

/**
 * putchear - Prints the characters.
 * @c: Character input.
 * Return: 1 On (success)
 * Tinnie and Jay.
 */

int putchear(char c)

{
	return (write(1, &c, 1));
}
