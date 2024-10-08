/* Demonstration of recursive ordering
 *
 * Sam Scott, McMaster, 2024
 */
#include <stdio.h>
#include <stdlib.h>

void countdown(int);
void countup(int);

/* calls countdown and countup */
int main() {
	countdown(10);
	puts("");
	countup(10);
	return EXIT_SUCCESS;
}

/* counts down from n to 1(to standard out) */
void countdown(int n) {
    if (n <= 0) 
		return;
    printf("%d \n", n);
    countdown(n-1);
}

/* counts up from 1 to n (to standard out) */
void countup(int n) {
    if (n <= 0) 
		return;
    countup(n-1);
    printf("%d \n", n);
}

