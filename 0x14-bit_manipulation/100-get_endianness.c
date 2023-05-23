#include "main.h"

/**
 * get_endianness - description
 * Return: description
 */
int get_endianness(void)
{
	int value = 1;

	return (*((char *)&value) + '0');
}
