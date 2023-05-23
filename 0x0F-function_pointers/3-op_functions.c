#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * op_add - description
 * @a: description
 * @b: description
 * Return: description
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - description
 * @a: description
 * @b: description
 * Return: description
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - description
 * @a: description
 * @b: description
 * Return: description
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - description
 * @a: description
 * @b: description
 * Return: description
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}

	return (a / b);
}

/**
 * op_mod - description
 * @a: description
 * @b: description
 * Return: description
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}

	return (a % b);
}
