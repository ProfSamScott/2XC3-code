/* function prototype demo
 * 
 * Sam Scott, McMaster, 2024
 */
#include <stdio.h>

/* prototype for foo */
void foo(float);

/* calls foo */
int main() {
    foo(12);
}

/* implementation of foo */
void foo(float f) {
    printf("%f\n", f);
}

