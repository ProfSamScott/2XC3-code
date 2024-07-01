/*
 * An example of using pointer parameters to "returnm" extra values
 * via side effects in the main program.
 *
 * Sam Scott, McMaster University, 2024
 */
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int process(int i, int j, int *s, int *m) {
    *s = i - j;
    *m = i * j;
    return i+j;
}

void main() {
    int sub, mult, add;

    add = process(10, 20, &sub, &mult);

    printf("%d %d %d\n", add, sub, mult);
}
