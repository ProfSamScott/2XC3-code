/* Run on your machine to find out your limits and see overflow examples.
 *
 * Note that floating point limits are about both magnitude and precision.
 * Floating point types have a smallest and largest representable 
 * non-zero magnitude (positive or negative).
 * 
 * Sam Scott, McMaster University, 2024
 */
#include <stdio.h>
#include <stdlib.h>
#include <float.h>  // floating point limit constants

int main(void) {
    printf("float:                  %2ld bytes, %20g to %20g, %2d digits\n",sizeof(float), FLT_MIN, FLT_MAX, FLT_DIG);
    printf("double:                 %2ld bytes, %20g to %20g, %2d digits\n",sizeof(double), DBL_MIN, DBL_MAX, DBL_DIG);
    printf("long double:            %2ld bytes, %20Lg to %20Lg, %2d digits\n",sizeof(long double), LDBL_MIN, LDBL_MAX, LDBL_DIG);

    printf("\nPrecision Error: %.15f\n", 1.13*99.99);

    printf("Float overflow: %f %f\n",FLT_MAX * 2, -FLT_MAX * 2);
    printf("Float underflow: %f %f\n",FLT_MIN / 2, -FLT_MIN / 2);

    double a = 0.1 + 0.1 + 0.1;

    if (a == 0.3) {
        puts("Yay!");
    } else {
        puts("\n0.1 + 0.1 + 0.1 does not equal 0.3!!!");
    }

    if (abs(a - 0.3) < DBL_EPSILON) {
        puts("...but with epsilon, they're equal");
    }
    return EXIT_SUCCESS;
}
