#include "main.h"
/**
 * set_bit - description
 * @num: description
 * @bitIndex: description
 * Return: description
 */
int set_bit(unsigned long int *num, unsigned int bitIndex)
{
	if (bitIndex > 63)
		return (-1);

	*num = *num | 1ul << bitIndex;
	return (1);
}
