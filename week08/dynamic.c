/* A demonstration of how to return an array from a function.
 * 
 * - Calls good_array_return, initializes array, frees, then  
 *   calls good_array_return again and prints the array to  
 *   show the memory manager re-using memory.
 *
 * - TODO: Call good_array_return in an infinite loop and watch 
 *   the system resources as the simulated memory leak consumes 
 *   available RAM.
 *
 * - Then add a call to "free" to get rid of this error.
 *
 * Sam Scott, McMaster University, 2024
 */
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int *good_array_return(long n) {
    int *a = malloc(n*sizeof(int));
    if (a == NULL) puts("fail");
    return a;
}

void main() {
    int *b = good_array_return(100);
    for (int i=0; i<100; i++) {
        b[i] = i;
    }
    for (int i=0; i<100; i++) {
        printf("%d ",b[i]);
    }
    puts("");
    free(b);

    b = good_array_return(100);
    for (int i=0; i<100; i++) {
        printf("%d ",b[i]);
    }
    free(b);

}
