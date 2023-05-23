#include "main.h"
#include <unistd.h>

/**
 * _putchar - description
 * @c: description
 * Return: description
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
