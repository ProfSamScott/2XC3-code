/* An example of reading a variable length list of floats 
 * from standard input
 * 
 * The first item in stdin must be an integer representing 
 * the number of floats in the list
 *
 * Sam Scott, McMaster University, 2024
 */
#include <stdio.h>
#include <stdlib.h>

float *readfs(int *);

int main() {
    int n;
    float *input = readfs(&n);

    if (n == -1) {
        fprintf(stderr, "Couldn't allocate memory");
        return EXIT_FAILURE;
    }

    for (int i = 0; i < n; i++) 
        printf("%f ",input[i]);
    puts("");
}

/* return an array of floats from the user. 
 * Side-effect: *n is the size of the array
 */
float *readfs(int *n) {
    scanf("%d", n);

    float *fs = malloc(*n * sizeof(float));
    if (fs == NULL) return NULL;

    for (int i = 0; i < *n; i++)
        scanf("%f", fs+i);

    return fs;
}
