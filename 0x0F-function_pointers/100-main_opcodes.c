#include <stdio.h>

/**
 * main - description
 * @argc: description
 * @argv: description
 * Return: description
 */

int main(int argc, char *argv[])
{
	int adress, number_of_bytes;

	if (argc != 2)
	{
		printf("Error\n");

		return (1);
	}

	number_of_bytes = atoi(argv[1]);

	if (number_of_bytes < 0)
	{
		printf("Error\n");

		return (2);
	}

	unsigned char *main_pointer = (unsigned char *)main;

	for (adress = 0; adress < number_of_bytes; adress++)
	{
		printf("%02x", main_pointer[adress]);

		if (adress < number_of_bytes - 1)
			printf(" ");
	}
	printf("\n");

	return (0);
}
