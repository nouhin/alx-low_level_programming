#include <stdio.h>

/*
 * main - Entry point
 * Description:
 *
 * Return: Always 0 (Succed)
 */

int main(void)
{
    char ch = 'a';
    while (ch <= 'z')
    {
        putchar(ch);
        ch++;
    }
    putchar('\n');

    return (0);
}
