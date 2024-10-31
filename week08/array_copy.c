/* A demonstration of how to return an array from a function.
 * 
 * - Run to see the problem with the copy function
 *   - set DEBUG to 1 to get some debugging output
 *
 * - Change to goodcopy to see the runtime error disappear
 *
 * - remove the copy function completely to get rid of the warning
 *
 * Sam Scott, McMaster University, 2024
 */
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define DEBUG 0
#define SIZE 10

int *copy(int n, int[n]);
int *goodcopy(int n, int[n]);
void print_array(int n, int[n]);

/* create, print, copy, and print copy of array */
void main() {
    int array1[SIZE];
    
    print_array(SIZE, array1);

    int *array2 = copy(SIZE, array1);
    //int *array2 = goodcopy(SIZE, array1);
    
    print_array(SIZE, array2);
}

/* print a[n] to stdout */
void print_array(int n, int a[n]) {
#if DEBUG
    puts("print_array: started");
#endif
    for (int i=0; i<n; i++) {
        printf("%d ", a[i]);
    }
    puts("");
#if DEBUG
    puts("print_array: finished");
#endif
}

/* return a copy of a[n], but it's on the stack! */
int *copy(int n, int a[n]) {
#if DEBUG
    puts("copy: started");
#endif
    int b[n];
    for (int i=0; i<n; i++) {
        b[i] = a[i];
    }
#if DEBUG
    puts("copy: finished");
#endif
    return b;
}

/* return a copy of a[n] on the heap */
int *goodcopy(int n, int a[n]) {
#if DEBUG
    puts("goodcopy: started");
#endif
    int *b = malloc(n*sizeof(int));
    if (b == NULL) {
        puts("fail");
        return NULL;
    }
    for (int i=0; i<n; i++) {
        b[i] = a[i];
    }
#if DEBUG
    puts("goodcopy: finished");
#endif
    return b;
}

