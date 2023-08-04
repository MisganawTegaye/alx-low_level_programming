#include "main.h"

/**
 * get_endianness - checks if a machine is little or big endian
 * Return: for big 0, for little 1
 */
int get_endianness(void)
{
	unsigned int i = 1;
	char *c = (char *) &i;

	return (*c);
}

