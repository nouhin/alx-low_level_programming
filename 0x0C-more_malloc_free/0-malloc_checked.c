#include "main.h"

/**
 * malloc_checked
 * @b: the size to allocate
 *
 */
void *malloc_checked(unsigned int b)
{
	void *p;

	p = malloc(b);

	if (p == NULL)
		exit(98);

	return (p);
}
