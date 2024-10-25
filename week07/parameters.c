/* Array parameters are aliases.
 *
 * Try changing foo parameter to const a[n].
 * Then try changing it to int *a
 *
 * Sam Scott, McMaster, 2024
 */
#include <stdio.h>
#include <stdlib.h>

void foo(int n, int a[n]);

int main() {
    int b[] = {1,2,3};
    foo(3, b);
    printf("%d, %d, %d\n", b[0], b[1], b[2]);
}

void foo(int n, int a[n]) {
    a[0] = -1;
}

