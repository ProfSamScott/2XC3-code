/* demo of variable scope
 *
 * Sam Scott, McMaster, 2024
 */
#include <stdio.h>

#define y 15.3 // global macro

int x = 20;    // global variable

void foo(int i) {          // i is local to foo
    int j = 2;             // j is local to foo
    while (i > 10) {
        int k = i * j;     // k is local to while
        printf("%d\n", k);
        i = i -1;
    }
	//k = 5;  // this will cause a syntax error.
}

void main() {
	printf("y: %f\n", y);
	foo(x);
	//foo(j);  // this will cause a syntax error
}
