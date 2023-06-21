#include <stdio.h>

/**
 * main - prevents an infinite loop
 * Return: 0
 */
int main(void)
{
    int i;

    printf("Infinite loop incoming :(\n");

    i = 0;

    while (i < 10)
    {
        putchar(i);
        i++;  // Increment i to prevent infinite loop
    }

    printf("Infinite loop avoided! \\o/\n");

    return (0);
}

