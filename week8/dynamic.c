/* A demonstration of how to return an array from a function.
 * 
 * - Run to see the problem with bad_array_return
 *
 * - Change to good_array_return to see the error disappear
 *
 * - Call good_array_return, initialize array, free, then call 
 *   good_array_return again and print the array to see the 
 *   memory manager re-using memory.
 *
 * - Call good_array_return in an infinite loop and watch the 
 *   system resources as the memory leak consumes available RAM.
 *
 * - Then add a call to "free" to get rid of this error.
 *
 * Sam Scott, McMaster University, 2024
 */
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int *bad_array_return(int n) {
    int a[n];
    return a;
}

int *good_array_return(long n) {
    int *a = malloc(n*sizeof(int));
    if (a == NULL) puts("fail");
    return a;
}

void main() {
    int *b = bad_array_return(100);
    for (int i=0; i<100; i++) {
        printf("%d ",b[i]);
    }
}
