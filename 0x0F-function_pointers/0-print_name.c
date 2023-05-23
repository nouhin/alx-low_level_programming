#include "function_pointers.h"

/**
 * print_name - description
 * @name: description
 * @f: description
 * Return: description
 */
void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}
