/* An example of reading a variable length list of floats 
 * from standard input
 * 
 * The first item in stdin must be a long representing 
 * the number of floats in the list
 *
 * If you enter a really big number, it won't be able to 
 * allocate memory for you.
 *
 * Sam Scott, McMaster University, 2024
 */
#include <stdio.h>
#include <stdlib.h>

float *readfs(long *);

int main() {
    long n;
    float *input = readfs(&n);

    if (input == NULL) {
        fprintf(stderr, "Couldn't allocate memory\n");
        return EXIT_FAILURE;
    }

    for (long i = 0; i < n; i++) 
        printf("%f ",input[i]);
    puts("");
}

/* return an array of floats from the user. 
 * Side-effect: *n is the size of the array
 */
float *readfs(long *n) {
    scanf("%ld", n);

    float *fs = malloc(*n * sizeof(float));
    if (fs == NULL) return NULL;

    for (int i = 0; i < *n; i++)
        scanf("%f", fs+i);

    return fs;
}
