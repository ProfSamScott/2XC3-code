/* Demos of 2D arrays using pointers
 *
 * Sam Scott, McMaster, 2024
 */
#include <stdio.h>
#include <stdlib.h>

#define R 5
#define C 6

int find_largest(int n, int[n]);

int main() {
	int a[R][C];

    // initialize in a single loop with a pointer
	for (int *p = a[0]; p < a[0] + R * C; p++) {
		*p = 100;
	}

    // change row 2 with pointers
    for (int *p=a[2]; p<a[2]+C; p++) {
        *p = 1000;
    }

    // change column 2 with pointers
	for (int (*p)[C]=a; p<a+R; p++) {
		(*p)[2] = 0;
	}

    // print out using indices
	for (int row=0; row<R; row++) {
		for (int col=0; col<C; col++) {
			printf("%5d ",a[row][col]);
		}
		puts("");
	}

    // find largest in row 2
    printf("Largest in row 2: %d\n", find_largest(C, a[2]));
}

/* returns largest element of a[n] */
int find_largest(int n, int a[n]) {
    double largest = a[0];
    for (int i=0; i<n; i++) {
        if (a[i] > largest) {
            largest = a[i];
        }
    }
    return largest;
}
