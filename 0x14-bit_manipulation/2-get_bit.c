/**
 * get_bit - description
 * @num: description
 * @bitIndex: description
 * Return: description
 */
int get_bit(unsigned long int num, unsigned int bitIndex)
{
	unsigned long int bitmask;

	if (bitIndex > 63)
		return (-1);

	bitmask = 1 << bitIndex;
	return ((num & bitmask) > 0);
}
