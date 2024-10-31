/* A demonstration of how to return an array from a function.
 * 
 * Sam Scott, McMaster University, 2024
 */
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

/* creates an array of size n on the heap and returns it */
int *get_array(long n) {
    int *a = malloc(n*sizeof(int));
    if (a == NULL) puts("fail");
    return a;
}

/* Calls get_array, initializes array, frees, then  
 * calls get_array again and prints the array to  
 * show the memory manager re-using memory.
 *
 * - TODO: Call get_array in an infinite loop and watch 
 *   the system resources as the simulated memory leak consumes 
 *   available RAM.
 *
 * - Then add a call to "free" to get rid of this error.
 *
 */
void main() {
    int *b = get_array(100);
    for (int i=0; i<100; i++) {
        b[i] = i;
    }
    for (int i=0; i<100; i++) {
        printf("%d ",b[i]);
    }
    puts("");
    free(b);

    b = get_array(100);
    for (int i=0; i<100; i++) {
        printf("%d ",b[i]);
    }
    puts("");
    free(b);
}
