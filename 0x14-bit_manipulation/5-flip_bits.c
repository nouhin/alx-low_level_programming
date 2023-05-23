#include "main.h"

/**
 * flip_bits - description
 * @num1: description
 * @num2: description
 * Return: description
 */
unsigned int flip_bits(unsigned long int num1, unsigned long int num2)
{
	unsigned int count = 0;
	int position = 0;

	for (; position <= 63; position++)
	{
		if (((num1 ^ num2) >> position) & 1)
			count++;
	}

	return (count);
}
