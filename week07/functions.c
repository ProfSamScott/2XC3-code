/* Demo of calling a function with an array argument
 *
 * Sam Scott, McMaster, 2024
 */
#include <stdio.h>
#include <stdlib.h>

#define N 5

double find_largest(int n, double[n]);
int sum(int rows, int cols, int array[rows][cols]); 

int main() {

    double a[N];

    // Load an array from stdin
    printf("Enter %d numbers: ", N);
    for (int i=0; i<N; i++) {
        scanf("%lf", &a[i]);
    }

    printf("The largest number you entered is %.2lf.\n", find_largest(N, a));

	int b[N][N]; // uninitialized
	for (int r=0; r<N; r++) {
		for (int c=0; c<N; c++) {
			b[r][c] = 10;
		}
	}
	printf("Sum of 5x5 array of 10's: %d\n", sum(N, N, b));
}

/* returns largest element of a[n] */
double find_largest(int n, double a[n]) {
    //printf("%ld\n", sizeof(a));
    double largest = a[0];
    for (int i=0; i<n; i++) {
        if (a[i] > largest) {
            largest = a[i];
        }
    }
    return largest;
}

/* sums up the elements in a 2d array */
int sum(int rows, int cols, int array[rows][cols]) {
    int total = 0;
    for (int r=0; r<rows; r++)
        for (int c=0; c<cols; c++)
            total += array[r][c];
    return total;
}
