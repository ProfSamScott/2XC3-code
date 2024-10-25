#include <stdio.h>
#include <stdlib.h>

#define N 5

int main() {

    double a[N];

    // Load an array from stdin
    printf("Enter %d numbers: ", N);
    for (int i=0; i<N; i++) {
        scanf("%lf", &a[i]);
    }

    // Sum array elements
    double sum = 0;
    for (int i=0; i<N; i++) {
        sum += a[i];
    }
    printf("The sum of the numbers you entered is %.2lf.\n", sum);

    // Find largest array element
    double largest = a[0];
    for (int i=0; i<N; i++) {
        if (a[i] > largest) {
            largest = a[i];
        }
    }
    printf("The largest number you entered is %.2lf.\n", largest);
}
