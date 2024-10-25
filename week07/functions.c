/* Demo of calling a function with an array argument
 *
 * Sam Scott, McMaster, 2024
 */
#include <stdio.h>
#include <stdlib.h>

#define N 5

double find_largest(int n, double[n]);

int main() {

    double a[N];

    // Load an array from stdin
    printf("Enter %d numbers: ", N);
    for (int i=0; i<N; i++) {
        scanf("%lf", &a[i]);
    }

    printf("The largest number you entered is %.2lf.\n", find_largest(N, a));
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
