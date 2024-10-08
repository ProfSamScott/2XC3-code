/*
 * An example of using pointer parameters to "returnm" extra values
 * via side effects in the main program.
 *
 * Sam Scott, McMaster University, 2024
 */
#include <stdio.h>
#include <stdlib.h>

int process (int, int, int *, int *);

/* tests the process function */
int main() {
    int sub, mult, add;

    add = process(10, 20, &sub, &mult);

    printf("Addition, Subtraction, Multiplication: %d %d %d\n", add, sub, mult);

	return EXIT_SUCCESS;
}

/* compute the sum, difference, and product of i and j.
 * *d = difference, *m = product
 * returns sum
 */
int process(int i, int j, int *d, int *m) {
    *d = i - j;
    *m = i * j;
    return i+j;
}

