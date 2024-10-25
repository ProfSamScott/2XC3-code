/* A demonstration of how to return an array from a function.
 * 
 * - Run to see the problem with bad_array_return
 *
 * - Change to good_array_return to see the runtime error disappear
 *
 * - remove the bad_array_return function completely to get
 *   rid of the warning
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
    puts("");

}
