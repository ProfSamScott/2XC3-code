/* An example of reading a variable length list of floats from standard input
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

float *readfs(int *n) {
    int size = 10;
    printf("Creating array of size %d\n", size);

    float *fs = malloc(size * sizeof(float));
    if (fs == NULL) return NULL;

    *n = 0;
    float next;
    while (scanf("%f", &next) != EOF) {
        fs[*n] = next;
        *n += 1;
        if (*n >= size) {
            size += 10; 
            printf("Increasing size to %d\n", size);
            fs = realloc(fs, size * sizeof(float));
            if (fs == NULL) 
                return NULL;
        }
    }
    printf("Adjusting final size to %d\n", *n);
    fs = realloc(fs, *n * sizeof(float));
    return fs;
}
