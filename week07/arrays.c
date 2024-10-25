/* Array basics
 *
 * Sam Scott, McMaster, 2024
 */
#include <stdio.h>
#include <stdlib.h>

#define ARRAY_SIZE 10

int main() {
    int a[ARRAY_SIZE];
    for (int i=0; i<ARRAY_SIZE; i++) {
        a[i] = -1;
    }

    printf("Size of array:   %ld\n", sizeof(a));
    printf("Size of element: %ld\n", sizeof(a[0]));
    printf("Length of array: %ld\n", sizeof(a)/sizeof(a[0]));

    for (int i=0; i<sizeof(a)/sizeof(a[0]); i++) {
        printf("%5d", a[i]);
    }
    puts("");

}
