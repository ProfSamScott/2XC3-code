/* Recursive and iterative factorial.
 *
 * Sam Scott, McMaster, 2024
 */
#include <stdio.h>
#include <stdlib.h>

long fact1(int);
long fact2(int);

/* tests fact1 and fact2 */
int main() {
	printf("%ld %ld\n", fact1(10), fact2(10));
	return EXIT_SUCCESS;
}

/* returns n! using iteration */
long fact1(int n) {
    long product = 1;
    for (int i = 2; i<=n; i++)
        product *= i;
	return product;
}

/* returns n! using recursion */
long fact2(int n) {
    if (n <= 1) 
		return 1;
    return n * fact2(n-1);
}

