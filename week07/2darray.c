#include <stdio.h>
#include <stdlib.h>

#define R 5
#define C 6

int main() {
	int a[R][C];
	for (int *p = a[0]; p < a[0] + R * C; p++) {
		*p = 100;
	}
	for (int (*p)[C]=a; p<a+R; p++) {
		(*p)[2] = 0;
	}
	for (int row=0; row<R; row++) {
		for (int col=0; col<C; col++) {
			printf("%5d ",a[row][col]);
		}
		puts("");
	}
}
