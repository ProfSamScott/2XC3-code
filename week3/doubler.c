/* Reads a list of integers from stdin, doubles each one, and outputs to stdout.
 * Writes to stderr and exits if it encounters a bad value.
 *
 * Sam Scott, McMaster University , 2024
 */
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main()
{
    int value;
    while (true)
    {
        int result = scanf("%d", &value);
        if (result == 0)
        {
            fprintf(stderr, "Bad Value\n");
            return EXIT_FAILURE;
        }
        if (result == EOF)
            break;
        value = value * 2;
        printf("%d\n", value);
    }
    return EXIT_SUCCESS;
}
