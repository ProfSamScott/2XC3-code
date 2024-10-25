/* Demonstrations of three gotchas. 
 *
 * Arrays are:
 *      inflexible
 *      ignorant
 *      uninitialized
 */
#include <stdio.h>
#include <stdlib.h>

int main() {
	int a[10];

    // display contents before initialization
    // run off the end of the array...
	for (int i=0; i<100; i++) {
		printf("%d ", a[i]);
	}
	puts("");
	
    // undefined side effect ordering
    // behavior may differ for different compilers
	int i=0, b[10];
	while (i<10)
		a[i] = b[i++]; // is i incremented after b[i], or after =?

	for (i=0; i<10; i++) {
        printf("%15d%15d\n", a[i], b[i]);
    }
}

