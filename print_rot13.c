#include "main.h"

/**
  * print_rot13 - prints string using the rot13.
  * @R: To convert string
  * Return: length output
  * Authors: Tinnie & Jay
  */
int print_rot13(va_list R)
{
	int a, h, count = 0;
	char *r;
	char input[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char output[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	r = va_arg(R, char *);
	/* If the input string is NULL, replace it with "(null)" */
	if (r == NULL)
		r = "(null)";
	for (a = 0; r[a] != '\0'; a++)
	{
		for (h = 0; input[h] != '\0'; h++)
		{
			if (r[a] == input[h])
			{
				/*Print The Rot 13 char */
				putchear(output[h]);
				count++;
				break;
			}
		}
	}
	return (count);
}
