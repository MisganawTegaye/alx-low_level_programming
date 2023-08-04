#include "main.h"
#include <unistd.h>
/**
 * _putchar - writes char c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, returned -1, and set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

