#include "main.h"
/**
 * clear_bit - description
 * @num: description
 * @bitIndex: description
 * Return: description
 */
int clear_bit(unsigned long int *num, unsigned int bitIndex)
{
	if (bitIndex >= 64)
		return (-1);

	*num = *num & ~(1ul << bitIndex);
	return (1);
}
