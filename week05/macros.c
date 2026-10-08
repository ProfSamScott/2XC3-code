#include <stdio.h>
#include <stdlib.h>

// standard use: define a constant
#define PI 3.14159

// less standard use: define a string substitution
#define AREA1 PI*radius*radius

// parameterized macro
#define AREA2(rad) PI*rad*rad

/* Makes use of PI, AREA1 and AREA2 */
int main() {
    float radius = 10.0;
    float radius2 = 20.0;

    puts("PI");
    printf("%f\n", PI*radius*radius);
    puts("AREA1");
    printf("%f\n", AREA1);
    puts("AREA2");
    printf("%f\n", AREA2(radius));
    printf("%f\n", AREA2(radius2));
    printf("%f\n", AREA2(5.5));
    printf("%f\n", AREA2(radius*2));

    return EXIT_SUCCESS;
}
