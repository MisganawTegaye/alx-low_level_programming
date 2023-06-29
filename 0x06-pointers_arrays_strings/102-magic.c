#include <stdio.h>
#include <string.h>

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
    int len1 = strlen(n1); // length of n1
    int len2 = strlen(n2); // length of n2

    int carry = 0; // carry value for addition
    int i = len1 - 1; // index for n1
    int j = len2 - 1; // index for n2
    int k = size_r - 1; // index for result string (r)

    // Ensure there is enough space in r to store the result
    if (len1 + len2 >= size_r)
        return 0;

    // Perform addition digit by digit from right to left
    while (i >= 0 || j >= 0 || carry != 0)
    {
        int sum = carry;

        if (i >= 0)
            sum += n1[i--] - '0';

        if (j >= 0)
            sum += n2[j--] - '0';

        carry = sum / 10;
        sum %= 10;

        r[k--] = sum + '0';
    }

    // Move the result to the beginning of the string
    memmove(r, r + k + 1, size_r - k - 1);

    return r;
}

int main(void)
{
    char n1[] = "123456789";
    char n2[] = "987654321";
    char result[20];

    char *res = infinite_add(n1, n2, result, sizeof(result));

    if (res != 0)
        printf("Sum: %s\n", res);
    else
        printf("Result could not be stored in the buffer.\n");

    return 0;
}

